
void __cdecl FUN_10050dd2(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_1007e3e8 == param_1) {
    PTR_LOOP_1007e3e8 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_1007c3c8) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_100bd04c,0,param_1);
    return;
  }
  DAT_1007c3d8 = 0xffffffff;
  return;
}

