import assert from "node:assert/strict";
import test from "node:test";
import {
  STARTUP_TOPICS,
  applyTopicCommand,
  createTopicState,
  parseConversation,
} from "../src/conversation.js";

const SAMPLE = `
#Q: ignored comment
Q<GREET FirstTime>: Hello.
A: Reply. [AddTopic(NEXT) AddDiary(2)]
Q<ESCAPE>: Leave.
A<FirstTime>: First answer. [ServerCommand(efw_GetPackage)]
A<!FirstTime>: Later answer. [Goodbye]
`;

test("parses topics, flags, and bracket commands", () => {
  const entries = parseConversation(SAMPLE);
  assert.equal(entries.length, 2);
  assert.deepEqual(entries[0].flags, ["FirstTime"]);
  assert.equal(entries[0].topic, "GREET");
  assert.deepEqual(entries[0].answers[0].commands, [
    { name: "AddTopic", args: ["NEXT"] },
    { name: "AddDiary", args: ["2"] },
  ]);
  assert.deepEqual(entries[1].answers[0].flags, ["FirstTime"]);
  assert.deepEqual(entries[1].answers[1].flags, ["!FirstTime"]);
  assert.equal(entries[1].answers[1].commands[0].name, "Goodbye");
});

test("startup topics can be added and removed", () => {
  let topics = createTopicState();
  assert.deepEqual(Object.keys(topics), STARTUP_TOPICS);
  topics = applyTopicCommand(topics, { name: "AddTopic", args: ["PLIERS"] });
  topics = applyTopicCommand(topics, { name: "DeleteTopic", args: ["ESCAPE"] });
  assert.equal(topics.PLIERS, true);
  assert.equal(topics.ESCAPE, false);
  assert.equal(topics.GREET, true);
});
