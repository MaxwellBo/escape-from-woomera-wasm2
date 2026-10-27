
undefined4 __thiscall
FUN_1003e590(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  
  FUN_10026030(param_3,param_2);
  uVar1 = FUN_10026090();
  iVar2 = FUN_100260d0();
  iVar3 = FUN_100260d0();
  iVar4 = FUN_100260d0();
  iVar5 = FUN_100260d0();
  sVar8 = (short)uVar1;
  if ((0 < sVar8) && (sVar8 < 0x41)) {
    iVar6 = (int)sVar8;
    iVar7 = iVar6 * 0x18;
    *(short *)(&DAT_100b6008 + iVar6 * 6) = (short)iVar2;
    *(short *)((int)&DAT_100b6008 + iVar7 + 2) = (short)iVar3;
    *(short *)(&DAT_100b600c + iVar6 * 6) = (short)iVar4;
    *(short *)((int)&DAT_100b600c + iVar7 + 2) = (short)iVar5;
    if ((short)iVar5 < 0) {
      *(undefined2 *)((int)&DAT_100b600c + iVar7 + 2) = 0;
    }
    FUN_1003dc80((int)this);
  }
  return 1;
}

