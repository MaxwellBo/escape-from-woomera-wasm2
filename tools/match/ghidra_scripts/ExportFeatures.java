// Writes one JSON document describing every function in the current program:
// referenced strings, numeric constants, direct callees in instruction order,
// referenced globals, plus exports and candidate vtables.
// @category EFW

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressIterator;
import ghidra.program.model.address.AddressSetView;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.*;

import java.io.FileWriter;
import java.util.*;

public class ExportFeatures extends GhidraScript {

	static class Fn {
		String name;
		long entry;
		long size;
		boolean thunk;
		long thunkTarget = -1;
		List<String> strings = new ArrayList<>();
		List<Long> calls = new ArrayList<>();
		List<Long> data = new ArrayList<>();
		List<String> consts = new ArrayList<>();
		List<String> floats = new ArrayList<>();
		int insns;
		List<Long> indirectCallOffsets = new ArrayList<>();
		List<Long> disps = new ArrayList<>();
	}

	static class Out {
		String program;
		long imageBase;
		List<Fn> functions = new ArrayList<>();
		Map<String, Long> exports = new TreeMap<>();
		List<List<Long>> vtables = new ArrayList<>();
		List<Long> vtableAddrs = new ArrayList<>();
	}

	private boolean isText(Address a) {
		MemoryBlock b = currentProgram.getMemory().getBlock(a);
		return b != null && b.isExecute();
	}

	private String readCString(Address a) {
		try {
			StringBuilder sb = new StringBuilder();
			for (int i = 0; i < 512; i++) {
				byte c = getByte(a.add(i));
				if (c == 0) break;
				int u = c & 0xff;
				if (u < 0x09 || (u > 0x0d && u < 0x20) || u > 0x7e) return null;
				sb.append((char) u);
			}
			return sb.length() >= 2 ? sb.toString() : null;
		}
		catch (Exception e) {
			return null;
		}
	}

	private String dataString(Address a) {
		Data d = getDataAt(a);
		if (d != null && d.hasStringValue()) {
			Object v = d.getValue();
			return v == null ? null : v.toString();
		}
		MemoryBlock b = currentProgram.getMemory().getBlock(a);
		if (b == null || b.isExecute()) return null;
		return readCString(a);
	}

	private String floatAt(Address a, int size) {
		try {
			if (size == 4) {
				float f = Float.intBitsToFloat(getInt(a));
				if (Float.isNaN(f) || Float.isInfinite(f)) return null;
				return Float.toString(f);
			}
			if (size == 8) {
				double d = Double.longBitsToDouble(getLong(a));
				if (Double.isNaN(d) || Double.isInfinite(d)) return null;
				return Double.toString((float) d);
			}
		}
		catch (Exception e) {
		}
		return null;
	}

	@Override
	public void run() throws Exception {
		String outPath = getScriptArgs()[0];
		Out out = new Out();
		out.program = currentProgram.getName();
		out.imageBase = currentProgram.getImageBase().getOffset();
		Listing listing = currentProgram.getListing();
		ReferenceManager refs = currentProgram.getReferenceManager();
		FunctionManager fm = currentProgram.getFunctionManager();

		for (Function f : fm.getFunctions(true)) {
			if (f.isExternal()) continue;
			Fn fn = new Fn();
			fn.name = f.getName(true);
			fn.entry = f.getEntryPoint().getOffset();
			AddressSetView body = f.getBody();
			fn.size = body.getNumAddresses();
			fn.thunk = f.isThunk();
			if (f.isThunk()) {
				Function t = f.getThunkedFunction(false);
				if (t != null && !t.isExternal()) fn.thunkTarget = t.getEntryPoint().getOffset();
				else if (t != null) fn.name = "thunk_" + t.getName();
			}
			InstructionIterator it = listing.getInstructions(body, true);
			while (it.hasNext()) {
				Instruction ins = it.next();
				fn.insns++;
				String mnem = ins.getMnemonicString();
				boolean isFloatLoad = mnem.startsWith("F");
				for (Reference r : refs.getReferencesFrom(ins.getAddress())) {
					Address to = r.getToAddress();
					if (!to.isMemoryAddress()) continue;
					RefType t = r.getReferenceType();
					if (t.isCall()) {
						Function callee = fm.getFunctionAt(to);
						if (callee != null && callee.isThunk()) {
							Function tt = callee.getThunkedFunction(true);
							if (tt != null && tt.isExternal()) {
								fn.strings.add("@import:" + tt.getName());
								continue;
							}
						}
						fn.calls.add(to.getOffset());
						continue;
					}
					if (t.isFlow()) continue;
					String s = dataString(to);
					if (s != null) {
						fn.strings.add(s);
						continue;
					}
					if (isText(to)) {
						fn.calls.add(-to.getOffset());
						continue;
					}
					Data d = getDataAt(to);
					if (d != null && d.isPointer() && d.getValue() instanceof Address) {
						Function ext = fm.getFunctionAt((Address) d.getValue());
						if (ext != null && ext.isExternal()) {
							fn.strings.add("@import:" + ext.getName());
							continue;
						}
					}
					Symbol sym = getSymbolAt(to);
					if (sym != null && sym.isExternal()) {
						fn.strings.add("@import:" + sym.getName());
						continue;
					}
					if (isFloatLoad) {
						int sz = ins.toString().toLowerCase().contains("qword") ? 8 : 4;
						String fl = floatAt(to, sz);
						if (fl != null) {
							fn.floats.add(fl);
							continue;
						}
					}
					fn.data.add(to.getOffset());
				}
				for (int i = 0; i < ins.getNumOperands(); i++) {
					for (Object o : ins.getOpObjects(i)) {
						if (o instanceof Scalar) {
							long v = ((Scalar) o).getSignedValue();
							if (Math.abs(v) <= 4) continue;
							if (v >= out.imageBase && v < out.imageBase + 0x10000000L) continue;
							String rep = ins.getDefaultOperandRepresentation(i).toUpperCase();
							if (rep.contains("[")) {
								if (rep.contains("ESP") || rep.contains("EBP")) continue;
								if (mnem.equals("CALL")) fn.indirectCallOffsets.add(v);
								else fn.disps.add(v);
								continue;
							}
							if (mnem.startsWith("ADD") || mnem.startsWith("SUB")) {
								String r0 = ins.getDefaultOperandRepresentation(0);
								if (r0.equals("ESP") || r0.equals("esp")) continue;
							}
							fn.consts.add(Long.toString(v));
						}
					}
				}
			}
			out.functions.add(fn);
		}

		SymbolTable st = currentProgram.getSymbolTable();
		AddressIterator eps = st.getExternalEntryPointIterator();
		while (eps.hasNext()) {
			Address a = eps.next();
			Symbol s = st.getPrimarySymbol(a);
			if (s != null) out.exports.put(s.getName(), a.getOffset());
		}

		for (MemoryBlock b : currentProgram.getMemory().getBlocks()) {
			if (b.isExecute() || !b.isInitialized()) continue;
			Address a = b.getStart();
			Address end = b.getEnd();
			List<Long> run = new ArrayList<>();
			long runStart = -1;
			while (a.add(3).compareTo(end) <= 0) {
				long v;
				try {
					v = getInt(a) & 0xffffffffL;
				}
				catch (Exception e) {
					break;
				}
				Address va = null;
				try {
					va = a.getNewAddress(v);
				}
				catch (Exception e) {
				}
				boolean isFn = va != null && fm.getFunctionAt(va) != null && isText(va);
				boolean labelHere = !run.isEmpty() && st.hasSymbol(a) && refs.hasReferencesTo(a);
				if (isFn && !labelHere) {
					if (run.isEmpty()) runStart = a.getOffset();
					run.add(v);
				}
				else {
					if (run.size() >= 3) {
						out.vtables.add(run);
						out.vtableAddrs.add(runStart);
					}
					run = new ArrayList<>();
					if (isFn) {
						runStart = a.getOffset();
						run.add(v);
					}
				}
				a = a.add(4);
			}
			if (run.size() >= 3) {
				out.vtables.add(run);
				out.vtableAddrs.add(runStart);
			}
		}

		Gson g = new GsonBuilder().create();
		try (FileWriter w = new FileWriter(outPath)) {
			g.toJson(out, w);
		}
		println("wrote " + out.functions.size() + " functions to " + outPath);
	}
}
