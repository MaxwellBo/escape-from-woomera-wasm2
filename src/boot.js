import { Xash3D } from "xash3d-fwgs";

const statusEl = document.getElementById("status");
const canvas = document.getElementById("canvas");

function setStatus(text) {
  statusEl.textContent = text;
}

function ensureDir(FS, dir) {
  const parts = dir.split("/").filter(Boolean);
  let cur = "";
  for (const part of parts) {
    cur += "/" + part;
    try {
      FS.mkdir(cur);
    } catch {
      // already present
    }
  }
}

function writeFile(FS, path, bytes) {
  const slash = path.lastIndexOf("/");
  if (slash > 0) ensureDir(FS, path.slice(0, slash));
  FS.writeFile(path, bytes);
}

async function mountGame(FS) {
  const response = await fetch("/manifest.json");
  if (!response.ok) throw new Error("manifest " + response.status);
  const files = await response.json();
  setStatus("Loading " + files.length + " game files…");
  let done = 0;
  const queue = files.slice();
  async function worker() {
    while (queue.length) {
      const path = queue.shift();
      const file = await fetch("/" + path);
      if (!file.ok) throw new Error(path + " " + file.status);
      writeFile(FS, "/" + path, new Uint8Array(await file.arrayBuffer()));
      done += 1;
      if (done % 25 === 0 || done === files.length) {
        setStatus("Loading game files " + done + "/" + files.length + "…");
      }
    }
  }
  const workers = [];
  for (let i = 0; i < 6; i++) workers.push(worker());
  await Promise.all(workers);
}

const logs = [];
const params = new URLSearchParams(location.search);
const testMode = params.get("test") === "1";

const engine = new Xash3D({
  canvas,
  renderer: "gl4es",
  arguments: [
    "-game", "efw",
    "-dll", "dlls/hl_emscripten_wasm32.wasm",
    "-clientlib", "cl_dlls/client_emscripten_wasm32.wasm",
    "-menulib", "cl_dlls/menu_emscripten_wasm32.wasm",
    "+developer", "1",
  ],
  module: {
    print: (line) => {
      logs.push(String(line));
      if (logs.length > 400) logs.shift();
      console.log(line);
    },
    printErr: (line) => {
      logs.push(String(line));
      if (logs.length > 400) logs.shift();
      console.error(line);
    },
  },
});

window.__efw = { engine, logs, ready: false };

try {
  await engine.init();
  await mountGame(engine.em.FS);
  setStatus("Starting the map…");
  engine.main();
  window.__efw.ready = true;
  canvas.focus();
  // The menu comes up before a command-line +map is applied. Start the prototype.
  setTimeout(() => {
    engine.Cmd_ExecuteString("map efw_prototype_level1");
  }, 400);
  setStatus("Click the view. WASD walks. E talks or uses.");
} catch (error) {
  console.error(error);
  setStatus("Failed to start: " + error.message);
  window.__efw.error = String(error);
}

if (testMode) {
  window.__efw.test = true;
}
