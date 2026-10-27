
undefined4 __thiscall
FUN_1003e620(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  void *extraout_ECX;
  void *this_00;
  void *extraout_ECX_00;
  byte *pbVar4;
  int iVar5;
  
  FUN_10026030(param_3,param_2);
  pbVar1 = FUN_10026180();
  iVar5 = 1;
  if (0 < *(int *)(*(int *)((int)this + 0xaac) + 0x26848)) {
    pbVar4 = &DAT_100b4ff0;
    this_00 = extraout_ECX;
    do {
      uVar2 = FUN_10056910(this_00,pbVar1,pbVar4);
      if (uVar2 == 0) break;
      iVar5 = iVar5 + 1;
      pbVar4 = pbVar4 + 0x28;
      this_00 = extraout_ECX_00;
    } while (iVar5 <= *(int *)(*(int *)((int)this + 0xaac) + 0x26848));
  }
  if (iVar5 <= *(int *)(*(int *)((int)this + 0xaac) + 0x26848)) {
    iVar5 = iVar5 * 0x28;
    *(undefined4 *)(iVar5 + 0x100b4fe8) = 1;
    iVar3 = FUN_100260d0();
    *(short *)(&DAT_100b4fd8 + iVar5) = (short)iVar3;
    iVar3 = FUN_100260d0();
    *(short *)(&DAT_100b4fda + iVar5) = (short)iVar3;
  }
  return 1;
}

