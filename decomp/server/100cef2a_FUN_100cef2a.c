
void __cdecl FUN_100cef2a(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_101204c8 == param_1) {
    PTR_LOOP_101204c8 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_1011e4a8) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_10136204,0,param_1);
    return;
  }
  DAT_1011e4b8 = 0xffffffff;
  return;
}

