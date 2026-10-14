
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10001550(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = param_1[0x37];
  if (*(float *)(*(int *)(iVar1 + 4) + 0x214) == _DAT_10059a18) {
    if (*(int *)(*(int *)(iVar1 + 4) + 0x214) != 0x41a00000) {
      *(undefined4 *)(iVar1 + 0x508) = 0x14;
      *(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x214) = 0x41a00000;
      param_1[0x48] = 1;
    }
  }
  else {
    *(undefined4 *)(iVar1 + 0x508) = 0;
    *(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x214) = 0;
    param_1[0x48] = 0;
  }
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  fVar2 = FUN_10018f40();
  param_1[0x3f] = (int)(float)(fVar2 + (float10)_DAT_10059a10);
  return;
}

