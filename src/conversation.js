/**
 * Conversation script model recovered from EscapeFromWoomera.dll.
 *
 * At startup the server lists `<gamedir>\Conversations\*.txt`, parses each
 * file, then marks the topics ESCAPE, GREET, and GOODBYE enabled.
 *
 * A line is ignored when it is blank or starts with `#`. A question or answer
 * may carry space-separated flags in angle brackets. An answer may end with a
 * bracket list of script commands.
 */

export const STARTUP_TOPICS = ["ESCAPE", "GREET", "GOODBYE"];

const QUESTION = /^Q(?:<([^>]*)>)?:\s*(.*)$/;
const ANSWER = /^A(?:<([^>]*)>)?:\s*(.*)$/;
const COMMAND = /([A-Za-z_][A-Za-z0-9_]*)(?:\(([^)]*)\))?/g;

export function parseFlags(spec) {
  if (!spec) return [];
  return spec.split(/\s+/).filter(Boolean);
}

export function parseCommands(block) {
  const commands = [];
  for (const match of block.matchAll(COMMAND)) {
    const name = match[1];
    const rawArgs = match[2];
    const args =
      rawArgs === undefined
        ? []
        : rawArgs
            .split(",")
            .map((part) => part.trim())
            .filter(Boolean);
    commands.push({ name, args });
  }
  return commands;
}

function splitAnswer(rest) {
  const match = rest.match(/^(.*?)\s*\[([^\]]*)\]\s*$/);
  if (!match) return { text: rest.trim(), commands: [] };
  return { text: match[1].trim(), commands: parseCommands(match[2]) };
}

export function parseConversation(source) {
  const entries = [];
  let current = null;

  for (const rawLine of source.split(/\r?\n/)) {
    const line = rawLine.trim();
    if (!line || line.startsWith("#")) continue;

    const question = line.match(QUESTION);
    if (question) {
      const flags = parseFlags(question[1]);
      current = {
        topic: flags[0] ?? null,
        flags: flags.slice(flags[0] ? 1 : 0),
        question: question[2].trim(),
        answers: [],
      };
      entries.push(current);
      continue;
    }

    const answer = line.match(ANSWER);
    if (answer) {
      if (!current) {
        current = { topic: null, flags: [], question: "", answers: [] };
        entries.push(current);
      }
      const { text, commands } = splitAnswer(answer[2]);
      current.answers.push({
        flags: parseFlags(answer[1]),
        text,
        commands,
      });
    }
  }

  return entries;
}

export function createTopicState(names = STARTUP_TOPICS) {
  return Object.fromEntries(names.map((name) => [name, true]));
}

export function applyTopicCommand(topics, command) {
  const next = { ...topics };
  const topic = command.args[0];
  if (!topic) return next;
  if (command.name === "AddTopic") next[topic] = true;
  if (command.name === "DeleteTopic") next[topic] = false;
  return next;
}
