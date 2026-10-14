
undefined4 __thiscall
FUN_1002cd60(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  FUN_10026030(param_3,param_2);
  uVar1 = FUN_10026090();
  if ((0 < (int)uVar1) && ((int)uVar1 < 8)) {
    iVar2 = FUN_100260d0();
    *(int *)((int)this + uVar1 * 4 + 0x214) = iVar2;
    *(undefined4 *)((int)this + 0x234) = 1;
  }
  return 1;
}

