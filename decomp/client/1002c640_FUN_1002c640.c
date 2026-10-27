
undefined4 __thiscall
FUN_1002c640(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_10026030(param_3,param_2);
  uVar1 = FUN_10026090();
  pbVar2 = FUN_10026180();
  if (uVar1 != 0) {
    uVar1 = FUN_10026090();
    uVar3 = FUN_10026090();
    uVar4 = FUN_10026090();
    FUN_1002c6b0(this,pbVar2,(char)uVar1,(char)uVar3,(char)uVar4);
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
    return 1;
  }
  FUN_1002c7d0(this,pbVar2);
  return 1;
}

