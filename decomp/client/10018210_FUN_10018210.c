
undefined4 __thiscall
FUN_10018210(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  
  FUN_10026030(param_3,param_2);
  uVar1 = FUN_10026090();
  if ((-1 < (int)uVar1) && ((int)uVar1 < 4)) {
    uVar2 = FUN_10026090();
    *(uint *)((int)this + uVar1 * 4 + 0x18) = uVar2;
    uVar1 = *(uint *)((int)this + 0x10);
    iVar5 = 0;
    *(uint *)((int)this + 0x10) = uVar1 | 1;
    puVar3 = (uint *)((int)this + 0x18);
    iVar4 = 4;
    do {
      uVar2 = *puVar3;
      puVar3 = puVar3 + 1;
      iVar5 = iVar5 + (uVar2 & ((int)uVar2 < 0) - 1);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (iVar5 == 0) {
      *(uint *)((int)this + 0x10) = uVar1 & 0xfffffffe;
      return 1;
    }
    *(undefined4 *)((int)this + 0x28) = 0x43480000;
  }
  return 1;
}

