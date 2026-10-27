const LUMPS = {
  entities: 0,
  textures: 2,
  vertices: 3,
  texinfo: 6,
  faces: 7,
  edges: 12,
  surfedges: 13,
  models: 14,
};

const SKIP_DRAW = new Set(["clip", "null", "hint", "skip", "origin", "aaatrigger", "bevel"]);

function lump(view, index) {
  const offset = view.getInt32(4 + index * 8, true);
  const length = view.getInt32(4 + index * 8 + 4, true);
  return { offset, length };
}

function readName(bytes, offset, length) {
  let end = offset;
  const stop = Math.min(bytes.length, offset + length);
  while (end < stop && bytes[end] !== 0) end += 1;
  return new TextDecoder("latin1").decode(bytes.subarray(offset, end));
}

function isSky(name) {
  const lower = name.toLowerCase();
  return lower.startsWith("sky") || /^-?\d*out_/.test(lower) || lower.includes("sky");
}

function decodeMiptex(bytes, offset) {
  const view = new DataView(bytes.buffer, bytes.byteOffset, bytes.byteLength);
  const name = readName(bytes, offset, 16);
  const width = view.getUint32(offset + 16, true);
  const height = view.getUint32(offset + 20, true);
  const pixelOffset = view.getUint32(offset + 24, true);
  if (!width || !height || width > 4096 || height > 4096) return null;
  const pixelStart = offset + pixelOffset;
  const mipBytes = width * height + (width * height) / 4 + (width * height) / 16 + (width * height) / 64;
  const paletteAt = pixelStart + mipBytes;
  if (paletteAt + 2 + 768 > bytes.length) return { name, width, height, rgba: solidColor(name, width, height) };
  const count = view.getUint16(paletteAt, true);
  const palette = paletteAt + 2;
  const rgba = new Uint8ClampedArray(width * height * 4);
  const alpha = name.startsWith("{");
  for (let i = 0; i < width * height; i += 1) {
    const index = bytes[pixelStart + i];
    const transparent = alpha && (index === 255 || (count >= 256 && index === count - 1));
    rgba[i * 4] = bytes[palette + index * 3];
    rgba[i * 4 + 1] = bytes[palette + index * 3 + 1];
    rgba[i * 4 + 2] = bytes[palette + index * 3 + 2];
    rgba[i * 4 + 3] = transparent ? 0 : 255;
  }
  return { name, width, height, rgba };
}

function solidColor(name, width = 16, height = 16) {
  let hash = 0;
  for (let i = 0; i < name.length; i += 1) hash = (hash * 33 + name.charCodeAt(i)) >>> 0;
  const rgba = new Uint8ClampedArray(width * height * 4);
  const r = 80 + (hash & 63);
  const g = 70 + ((hash >> 6) & 63);
  const b = 50 + ((hash >> 12) & 47);
  for (let i = 0; i < width * height; i += 1) {
    rgba[i * 4] = r;
    rgba[i * 4 + 1] = g;
    rgba[i * 4 + 2] = b;
    rgba[i * 4 + 3] = 255;
  }
  return rgba;
}

function asBytes(input) {
  if (input instanceof ArrayBuffer) return new Uint8Array(input);
  if (ArrayBuffer.isView(input)) {
    return new Uint8Array(input.buffer, input.byteOffset, input.byteLength);
  }
  throw new Error("Expected binary map data");
}

export function parseWad(buffer) {
  const bytes = asBytes(buffer);
  const view = new DataView(bytes.buffer, bytes.byteOffset, bytes.byteLength);
  const magic = readName(bytes, 0, 4);
  if (magic !== "WAD3") throw new Error(`Unexpected WAD magic ${magic}`);
  const count = view.getInt32(4, true);
  const directory = view.getInt32(8, true);
  const textures = new Map();
  for (let i = 0; i < count; i += 1) {
    const entry = directory + i * 32;
    const filepos = view.getInt32(entry, true);
    const type = bytes[entry + 12];
    const name = readName(bytes, entry + 16, 16);
    if (type !== 0x43) continue;
    const decoded = decodeMiptex(bytes, filepos);
    if (decoded) textures.set(name.toLowerCase(), decoded);
  }
  return textures;
}

function parseEntities(text) {
  const entities = [];
  const pattern = /\{([^{}]*)\}/g;
  let match = pattern.exec(text);
  while (match) {
    const entity = {};
    const keys = match[1].matchAll(/"([^"]+)"\s+"([^"]*)"/g);
    for (const key of keys) entity[key[1]] = key[2];
    if (entity.classname) entities.push(entity);
    match = pattern.exec(text);
  }
  return entities;
}

export function parseMap(buffer, wadTextures) {
  const bytes = asBytes(buffer);
  const view = new DataView(bytes.buffer, bytes.byteOffset, bytes.byteLength);
  const version = view.getInt32(0, true);
  if (version !== 30) throw new Error(`Expected GoldSrc BSP version 30, got ${version}`);

  const textureLump = lump(view, LUMPS.textures);
  const textureCount = view.getInt32(textureLump.offset, true);
  const textureNames = [];
  for (let i = 0; i < textureCount; i += 1) {
    const rel = view.getInt32(textureLump.offset + 4 + i * 4, true);
    if (rel < 0) {
      textureNames.push("");
      continue;
    }
    textureNames.push(readName(bytes, textureLump.offset + rel, 16));
  }

  const vertexLump = lump(view, LUMPS.vertices);
  const vertexCount = vertexLump.length / 12;
  const vertices = new Float32Array(vertexCount * 3);
  for (let i = 0; i < vertexCount; i += 1) {
    vertices[i * 3] = view.getFloat32(vertexLump.offset + i * 12, true);
    vertices[i * 3 + 1] = view.getFloat32(vertexLump.offset + i * 12 + 4, true);
    vertices[i * 3 + 2] = view.getFloat32(vertexLump.offset + i * 12 + 8, true);
  }

  const edgeLump = lump(view, LUMPS.edges);
  const edgeCount = edgeLump.length / 4;
  const edges = new Uint16Array(edgeCount * 2);
  for (let i = 0; i < edgeCount; i += 1) {
    edges[i * 2] = view.getUint16(edgeLump.offset + i * 4, true);
    edges[i * 2 + 1] = view.getUint16(edgeLump.offset + i * 4 + 2, true);
  }

  const surfLump = lump(view, LUMPS.surfedges);
  const surfCount = surfLump.length / 4;
  const surfedges = new Int32Array(surfCount);
  for (let i = 0; i < surfCount; i += 1) surfedges[i] = view.getInt32(surfLump.offset + i * 4, true);

  const texLump = lump(view, LUMPS.texinfo);
  const texCount = texLump.length / 40;
  const texinfo = [];
  for (let i = 0; i < texCount; i += 1) {
    const at = texLump.offset + i * 40;
    const vecs = [];
    for (let v = 0; v < 8; v += 1) vecs.push(view.getFloat32(at + v * 4, true));
    texinfo.push({
      vecs,
      miptex: view.getInt32(at + 32, true),
      flags: view.getInt32(at + 36, true),
    });
  }

  const faceLump = lump(view, LUMPS.faces);
  const faceCount = faceLump.length / 20;
  const buckets = new Map();
  const collisionPositions = [];
  const collisionIndices = [];

  function addCollision(polygon) {
    const base = collisionPositions.length / 3;
    for (const vertex of polygon) collisionPositions.push(vertex[0], vertex[1], vertex[2]);
    for (let i = 1; i < polygon.length - 1; i += 1) {
      collisionIndices.push(base, base + i, base + i + 1);
    }
  }

  for (let faceIndex = 0; faceIndex < faceCount; faceIndex += 1) {
    const at = faceLump.offset + faceIndex * 20;
    const firstEdge = view.getInt32(at + 4, true);
    const edgeNum = view.getInt16(at + 8, true);
    const texIndex = view.getInt16(at + 10, true);
    const info = texinfo[texIndex];
    const textureName = textureNames[info?.miptex] || "";
    const lower = textureName.toLowerCase();
    const sky = isSky(lower);
    const tool = SKIP_DRAW.has(lower) || lower.startsWith("aaatrigger");
    if (sky || lower === "hint" || lower === "skip" || lower === "origin" || lower === "null") continue;

    const polygon = [];
    for (let e = 0; e < edgeNum; e += 1) {
      const surf = surfedges[firstEdge + e];
      const edge = Math.abs(surf);
      const vertexIndex = surf >= 0 ? edges[edge * 2] : edges[edge * 2 + 1];
      polygon.push([vertices[vertexIndex * 3], vertices[vertexIndex * 3 + 1], vertices[vertexIndex * 3 + 2]]);
    }
    if (polygon.length < 3) continue;
    if (lower === "clip" || lower === "bevel") {
      addCollision(polygon);
      continue;
    }
    if (tool) continue;

    addCollision(polygon);
    const source = wadTextures.get(lower);
    const width = source?.width || 16;
    const height = source?.height || 16;
    const key = lower || `missing-${info.miptex}`;
    let bucket = buckets.get(key);
    if (!bucket) {
      bucket = {
        name: textureName || key,
        width,
        height,
        rgba: source?.rgba || solidColor(textureName || key),
        alpha: textureName.startsWith("{"),
        positions: [],
        uvs: [],
        indices: [],
      };
      buckets.set(key, bucket);
    }
    const base = bucket.positions.length / 3;
    const sVec = info.vecs.slice(0, 4);
    const tVec = info.vecs.slice(4, 8);
    for (const vertex of polygon) {
      bucket.positions.push(vertex[0], vertex[1], vertex[2]);
      const s = vertex[0] * sVec[0] + vertex[1] * sVec[1] + vertex[2] * sVec[2] + sVec[3];
      const t = vertex[0] * tVec[0] + vertex[1] * tVec[1] + vertex[2] * tVec[2] + tVec[3];
      bucket.uvs.push(s / width, t / height);
    }
    for (let i = 1; i < polygon.length - 1; i += 1) bucket.indices.push(base, base + i, base + i + 1);
  }

  const modelLump = lump(view, LUMPS.models);
  const modelCount = modelLump.length / 64;
  const models = [];
  for (let i = 0; i < modelCount; i += 1) {
    const at = modelLump.offset + i * 64;
    models.push({
      mins: [view.getFloat32(at, true), view.getFloat32(at + 4, true), view.getFloat32(at + 8, true)],
      maxs: [view.getFloat32(at + 12, true), view.getFloat32(at + 16, true), view.getFloat32(at + 20, true)],
    });
  }

  const entityLump = lump(view, LUMPS.entities);
  const entityText = readName(bytes, entityLump.offset, entityLump.length);
  const entities = parseEntities(entityText);
  for (const entity of entities) {
    if (!entity.model || !entity.model.startsWith("*")) continue;
    const model = models[Number(entity.model.slice(1))];
    if (!model) continue;
    entity.mins = model.mins;
    entity.maxs = model.maxs;
  }

  const spawnEntity = entities.find((entity) => entity.classname === "info_player_start");
  const origin = (spawnEntity?.origin || "0 0 0").split(" ").map(Number);
  const angles = (spawnEntity?.angles || "0 0 0").split(" ").map(Number);

  return {
    surfaces: [...buckets.values()],
    collisionPositions: Float32Array.from(collisionPositions),
    collisionIndices: Uint32Array.from(collisionIndices),
    entities,
    models,
    spawn: { x: origin[0], y: origin[1], z: origin[2], yaw: (angles[1] * Math.PI) / 180 },
  };
}

export function pointInBox(point, mins, maxs, padding = 0) {
  return (
    point[0] >= mins[0] - padding &&
    point[0] <= maxs[0] + padding &&
    point[1] >= mins[1] - padding &&
    point[1] <= maxs[1] + padding &&
    point[2] >= mins[2] - padding &&
    point[2] <= maxs[2] + padding
  );
}
