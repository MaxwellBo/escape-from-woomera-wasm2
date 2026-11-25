// Creates a function at every hex address listed in the file given as the
// first script argument, so the export covers the same functions as decomp/.
// @category EFW

import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.cmd.function.CreateFunctionCmd;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;

import java.nio.file.Files;
import java.nio.file.Paths;

public class SeedFunctions extends GhidraScript {
	@Override
	public void run() throws Exception {
		int made = 0;
		for (String line : Files.readAllLines(Paths.get(getScriptArgs()[0]))) {
			line = line.trim();
			if (line.isEmpty()) continue;
			Address a = toAddr(Long.parseLong(line, 16));
			if (getFunctionAt(a) != null) continue;
			if (getInstructionAt(a) == null) new DisassembleCommand(a, null, true).applyTo(currentProgram, monitor);
			if (new CreateFunctionCmd(a).applyTo(currentProgram, monitor)) made++;
		}
		println("seeded " + made + " functions");
	}
}
