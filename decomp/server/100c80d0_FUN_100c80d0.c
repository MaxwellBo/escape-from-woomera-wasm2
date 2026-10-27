void FUN_100c80d0(void)

{
  // Debug print. The body is a 4KB stack probe plus OutputDebugString, and the
  // probe was recovered as an uninitialized register, which traps. The messages
  // are not part of play.
  return;
}
