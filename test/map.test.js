import assert from "node:assert/strict";
import fs from "node:fs";
import test from "node:test";
import { parseMap, parseWad } from "../src/format/goldsrc.js";

test("level 1 builds a collidable camp from the prototype map and wad", () => {
  const wad = parseWad(fs.readFileSync("public/efw/woomera.wad"));
  const map = parseMap(fs.readFileSync("public/efw/maps/efw_prototype_level1.bsp"), wad);
  const triangles = map.surfaces.reduce((sum, surface) => sum + surface.indices.length / 3, 0);
  assert.ok(triangles > 5000, `expected a full map, got ${triangles} triangles`);
  assert.ok(map.collisionIndices.length > 1000);
  assert.equal(map.spawn.x, 1792);
  assert.equal(map.spawn.y, -2136);
  const named = map.entities.filter((entity) => entity.targetname === "Amir");
  assert.equal(named.length, 1);
  const gate = map.entities.find((entity) => entity.target === "efw_compound_gate");
  assert.ok(gate.mins && gate.maxs);
});
