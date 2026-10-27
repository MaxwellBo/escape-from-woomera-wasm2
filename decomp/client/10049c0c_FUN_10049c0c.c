undefined4 __cdecl FUN_10049c0c(undefined4 param_1)

{
  // The CRT atexit list is allocated by an initializer we do not run. Keep the
  // registrations in a fixed buffer so global constructors can finish.
  static undefined4 storage[512];
  static int count;

  if (count < 512) {
    storage[count] = param_1;
    count = count + 1;
  }
  return param_1;
}
