
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10089c70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*DAT_10121db8 + 0x18))();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0xdc);
  if (*(float *)(*(int *)(iVar1 + 4) + 0x214) == _DAT_100dd5f8) {
    uVar2 = 0x42200000;
    if (*(int *)(*(int *)(iVar1 + 4) + 0x214) == 0x42200000) goto LAB_10089ce2;
    *(undefined4 *)(param_1 + 0x124) = 1;
    *(undefined4 *)(iVar1 + 0x508) = 0x28;
  }
  else {
    uVar2 = 0;
    *(undefined4 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(iVar1 + 0x508) = 0;
  }
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xdc) + 4) + 0x214) = uVar2;
LAB_10089ce2:
  *(undefined4 *)(param_1 + 0xfc) = 0x3f000000;
  return;
}

