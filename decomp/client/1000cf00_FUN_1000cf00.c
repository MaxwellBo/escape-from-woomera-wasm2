
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000cf00(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  
  bVar2 = FUN_1000a1d0();
  if (!bVar2) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0xdc);
  if (*(float *)(*(int *)(iVar1 + 4) + 0x214) == _DAT_10059a18) {
    uVar3 = 0x42200000;
    if (*(int *)(*(int *)(iVar1 + 4) + 0x214) == 0x42200000) goto LAB_1000cf6c;
    *(undefined4 *)(param_1 + 0x124) = 1;
    *(undefined4 *)(iVar1 + 0x508) = 0x28;
  }
  else {
    uVar3 = 0;
    *(undefined4 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(iVar1 + 0x508) = 0;
  }
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xdc) + 4) + 0x214) = uVar3;
LAB_1000cf6c:
  *(undefined4 *)(param_1 + 0xfc) = 0x3f000000;
  return;
}

