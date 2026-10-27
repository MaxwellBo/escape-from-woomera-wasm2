
void __fastcall FUN_1008da00(int param_1)

{
  int iStack_4;
  
  iStack_4 = 0x5a;
  switch(*(undefined4 *)(param_1 + 0x1cc)) {
  case 1:
  case 0xf:
  case 0x10:
    iStack_4 = 0x78;
    break;
  case 3:
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xb0) = 0x43340000;
    return;
  case 4:
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xb0) = 0x43160000;
    return;
  }
  *(float *)(*(int *)(param_1 + 4) + 0xb0) = (float)iStack_4;
  return;
}

