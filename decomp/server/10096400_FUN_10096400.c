
undefined4 __thiscall FUN_10096400(void *this,int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint *puVar3;
  
  iVar2 = 0;
  puVar3 = (uint *)((int)this + 0x310);
  do {
    bVar1 = FUN_10019450(puVar3);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      FUN_10019420((void *)((int)this + iVar2 * 8 + 0x310),param_1);
      FUN_10019420((void *)(param_1 + 0x308),(int)this);
      return 1;
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 2;
  } while (iVar2 < 4);
  return 0;
}

