// End-to-end playthrough of the prototype: level 1, level 2, level 3 and the
// positive ending. Interacting and closing storyboards are real clicks on the
// canvas (MOUSE1 is bound to efw_spider). Conversation picks and inventory use
// send the commands the HUD buttons send (efw_pick, efw_next,
// efw_UseWithMarker). efw_goto, which needs sv_cheats, stands in for walking.
//
//   npm run dev &   # serves http://127.0.0.1:5173
//   npm run e2e -- [--url URL] [--video DIR] [--headed]
import { chromium } from "playwright";
import fs from "node:fs";
import path from "node:path";

const args = process.argv.slice(2);
const opt = (name, fallback) => {
  const i = args.indexOf(name);
  return i >= 0 ? args[i + 1] : fallback;
};
const url = opt("--url", "http://127.0.0.1:5173/") + "?test=1";
const videoDir = opt("--video", null);
const size = { width: 1024, height: 768 };

const browser = await chromium.launch({
  headless: !args.includes("--headed"),
  args: ["--use-gl=angle", "--use-angle=swiftshader", "--enable-unsafe-swiftshader"],
});
const context = await browser.newContext({
  viewport: size,
  ...(videoDir ? { recordVideo: { dir: videoDir, size } } : {}),
});
const page = await context.newPage();
page.on("pageerror", (e) => console.error("pageerror", e.message));

await page.addInitScript(() => {
  window.addEventListener("DOMContentLoaded", () => {
    const note = document.createElement("div");
    note.id = "e2e-step";
    note.style.cssText =
      "position:fixed;left:12px;bottom:12px;z-index:10;padding:6px 10px;border-radius:6px;" +
      "background:rgba(0,0,0,.7);color:#fff;font:14px/1.3 system-ui,sans-serif;pointer-events:none";
    document.body.appendChild(note);
    const dot = document.createElement("div");
    dot.style.cssText =
      "position:fixed;z-index:11;width:14px;height:14px;margin:-7px 0 0 -7px;border-radius:50%;" +
      "border:2px solid #fff;background:rgba(255,80,40,.8);pointer-events:none;left:-20px;top:-20px;transition:transform .1s";
    document.body.appendChild(dot);
    const at = (e) => {
      dot.style.left = e.clientX + "px";
      dot.style.top = e.clientY + "px";
    };
    window.addEventListener("mousemove", at, true);
    window.addEventListener("mousedown", (e) => (at(e), (dot.style.transform = "scale(1.6)")), true);
    window.addEventListener("mouseup", () => (dot.style.transform = ""), true);
  });
});

const allLogs = [];

// boot.js keeps a bounded array; mirror it into an unbounded one here.
await page.exposeFunction("__efwSink", (line) => allLogs.push(line));
await page.addInitScript(() => {
  const hook = () => {
    if (!window.__efw) return setTimeout(hook, 5);
    const logs = window.__efw.logs;
    const push = logs.push.bind(logs);
    logs.push = (...lines) => {
      for (const l of lines) window.__efwSink(String(l));
      return push(...lines);
    };
  };
  hook();
});

function since(mark) {
  return allLogs.slice(mark);
}

async function waitFor(re, mark, timeout = 15000) {
  const end = Date.now() + timeout;
  while (Date.now() < end) {
    const hit = since(mark).find((l) => re.test(l));
    if (hit) return hit;
    await page.waitForTimeout(100);
  }
  throw new Error(`timed out waiting for ${re}\n--- recent log ---\n${allLogs.slice(-40).join("\n")}`);
}

async function cmd(line) {
  await page.evaluate((c) => window.__efw.engine.Cmd_ExecuteString(c), line);
}

// MOUSE1 on the view: interact, advance a conversation, or close a storyboard.
async function click() {
  const box = await page.locator("#canvas").boundingBox();
  const x = box.x + box.width / 2;
  const y = box.y + box.height / 2;
  await page.mouse.move(x - 40, y - 30);
  await page.mouse.move(x, y, { steps: 6 });
  await page.mouse.down();
  await page.waitForTimeout(80);
  await page.mouse.up();
}

async function step(label) {
  console.log("•", label);
  await page.evaluate((t) => {
    const el = document.getElementById("e2e-step");
    if (el) el.textContent = t;
  }, label);
}

function topics() {
  const out = {};
  let start = -1;
  for (let i = allLogs.length - 1; i >= 0; i--) {
    if (/Narrative state:/.test(allLogs[i])) {
      start = i;
      break;
    }
  }
  if (start < 0) return out;
  for (const l of allLogs.slice(start + 1)) {
    const m = /\]\s*(\d)  (.+)$/.exec(l) || /^(\d)  (.+)$/.exec(l);
    if (!m) break;
    out[m[2].trim()] = m[1] === "1";
  }
  return out;
}

async function expectTopic(name, on = true) {
  const end = Date.now() + 5000;
  while (Date.now() < end) {
    if (!!topics()[name] === on) return;
    await page.waitForTimeout(100);
  }
  throw new Error(`topic ${name} is not ${on ? "on" : "off"}: ${JSON.stringify(topics())}`);
}

async function goto(name) {
  const mark = allLogs.length;
  await cmd(`efw_goto ${name}`);
  await waitFor(new RegExp(`efw_goto ${name} `), mark);
  await page.waitForTimeout(400);
}

async function menu(id, timeout) {
  const mark = allLogs.length;
  return () => waitFor(new RegExp(`efw menu 0x${id.toString(16)}\\b`), mark, timeout);
}

// Close storyboards until `until` is shown (or none remain), with a pause so
// each board is on screen in the recording.
async function board(expectId) {
  await page.waitForTimeout(1500);
  const mark = allLogs.length;
  await click();
  if (expectId) await waitFor(new RegExp(`efw menu 0x${expectId.toString(16)}\\b`), mark);
}

// Talk to `who` and ask about each topic in turn, reading every page.
async function talk(who, asks) {
  for (const topic of asks) {
    await goto(who);
    const mark = allLogs.length;
    await click();
    await waitFor(/efw choice 1 /, mark);
    await page.waitForTimeout(300);
    const choices = since(mark)
      .map((l) => /efw choice (\d+) (\S+)/.exec(l))
      .filter(Boolean)
      .map((m) => ({ n: +m[1], topic: m[2] }));
    const pick = choices.find((c) => c.topic === topic || c.topic.startsWith(topic + " "));
    if (!pick) throw new Error(`${who} offers no ${topic}: ${choices.map((c) => c.topic).join(", ")}`);
    await step(`${who}: ${topic}`);
    await cmd(`efw_pick ${pick.n}`);
    if (topic.startsWith("*")) {
      await page.waitForTimeout(1200);
      continue;
    }
    for (let i = 0; i < 6; i++) {
      await page.waitForTimeout(900);
      await cmd("efw_next");
    }
  }
}

const started = Date.now();
try {
  await step("Booting");
  await page.goto(url);
  await page.waitForFunction(() => window.__efw && window.__efw.ready, null, { timeout: 90000 });
  await waitFor(/client connected/, 0, 90000);
  await waitFor(/efw menu 0x49/, 0, 20000);
  await cmd("sv_cheats 1");

  await step("Intro storyboards");
  await board(0x4a);
  await board(0x4b);
  await board();

  await step("Level 1: learn about the pliers, kitchen and ID tag");
  await talk("Amir", ["ESCAPE"]);
  await expectTopic("PLIERS");
  await talk("Shala", ["PLIERS"]);
  await expectTopic("KITCHEN");
  await talk("Elika", ["ESCAPE"]);
  await talk("Laleh", ["HIDING"]);
  await expectTopic("IDTAG");
  await talk("Gholan", ["IDTAG"]);
  await expectTopic("GotHintAboutHiding");

  await step("Level 1: ID tag on the board, into the main compound");
  await goto("efw_IDTag_Position");
  await click();
  await expectTopic("Player'sIDTagOnFence");
  await goto("efw_2ndcompound_entry");
  await talk("Kitchen_Guard", ["KITCHEN"]);
  await talk("Roster_Officer", ["WORK"]);
  await expectTopic("OnKitchenRoster");

  await step("Level 1: collect the tag, into the kitchen");
  await goto("efw_IDTag_Position");
  await page.waitForTimeout(700);
  await click();
  await expectTopic("Player'sIDTagOnFence", false);
  await goto("efw_kitchen_door");
  await talk("Mouhtaz", ["PLIERS"]);

  await step("Level 1: take the pliers when the electrician looks away");
  for (let tries = 0; ; tries++) {
    await goto("efw_PliersMarker");
    const mark = allLogs.length;
    await click();
    try {
      await waitFor(/efw menu 0x3d\b/, mark, 1500);
      break;
    } catch (e) {
      if (tries > 40) throw e;
      await page.waitForTimeout(1500);
    }
  }
  await board();

  await step("Level 1: hide the pliers in the kitchen bin");
  for (let tries = 0; ; tries++) {
    await goto("efw_kitchen_bin");
    const mark = allLogs.length;
    await click();
    try {
      await waitFor(/efw menu 0x3e\b/, mark, 1500);
      break;
    } catch (e) {
      if (tries > 40) throw e;
      await page.waitForTimeout(1500);
    }
  }
  await expectTopic("PliersInBin");
  await board();

  await step("Level 1: collect the package from the mail office");
  await goto("efw_IDTag_Position");
  await click();
  await expectTopic("Player'sIDTagOnFence");
  await goto("efw_2ndcompound_entry");
  const pkg = await menu(0x47);
  await talk("Mail_Officer", ["OFFICE"]);
  await pkg();
  await board();
  await goto("efw_IDTag_Position");
  await page.waitForTimeout(700);
  await click();
  await expectTopic("Player'sIDTagOnFence", false);

  await step("Level 1: trade with Gholan and Mouhtaz");
  await talk("Gholan", ["*GIVE_PHONE"]);
  await expectTopic("GholanAgreedToPloy");
  await goto("efw_kitchen_door");
  await talk("Mouhtaz", ["*GIVE_POWDER"]);

  await step("Level 1: hide under the building");
  const day = await menu(0x3f);
  await goto("efw_hiding_place");
  await click();
  await day();
  await board(0x4f);
  const l2 = allLogs.length;
  await board();
  await waitFor(/efw_prototype_level2/, l2, 60000);
  await waitFor(/client connected/, l2, 60000);
  await page.waitForTimeout(2000);

  await step("Level 2: open the bin cage with the lever");
  await goto("efw_cage_door");
  await cmd("efw_UseWithMarker weapon_efw_Lever efw_cage_door");
  await page.waitForTimeout(1500);
  const bin = await menu(0x45);
  await goto("efw_approach_bin");
  await bin();
  await board();

  await step("Level 2: hide again");
  const night = await menu(0x43);
  await goto("efw_hiding_place");
  await click();
  await night();
  await board(0x50);
  const l3 = allLogs.length;
  await board();
  await waitFor(/efw_prototype_level3/, l3, 60000);
  await waitFor(/client connected/, l3, 60000);
  await page.waitForTimeout(2000);

  await step("Level 3: bring the pliers to Amir");
  const ending = await menu(0x4c);
  await talk("Amir", ["*GIVE_PLIERS"]);
  await ending();
  await step("Ending: the escape group is one step closer to freedom");
  await page.waitForTimeout(4000);
  await page.screenshot({ path: path.join(videoDir || ".", "ending.png") });
  console.log(`PASS in ${((Date.now() - started) / 1000).toFixed(0)}s`);
} catch (error) {
  console.error("FAIL", error.message);
  await page.screenshot({ path: path.join(videoDir || ".", "failure.png") }).catch(() => {});
  fs.writeFileSync(path.join(videoDir || ".", "playthrough.log"), allLogs.join("\n"));
  process.exitCode = 1;
} finally {
  const video = page.video();
  await context.close();
  if (video) console.log("video", await video.path());
  await browser.close();
}
