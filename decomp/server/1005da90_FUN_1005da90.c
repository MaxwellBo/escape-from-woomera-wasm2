
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_1005da90(int param_1,float param_2,float param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  if ((param_3 <= _DAT_100ddb10) && ((float)_DAT_100df298 <= param_2)) {
    bVar1 = FUN_10019450((uint *)(param_1 + 0x160));
    if (CONCAT31(extraout_var,bVar1) != 0) {
      iVar2 = FUN_10019460((uint *)(param_1 + 0x160));
      if ((*(uint *)(*(int *)(iVar2 + 4) + 0x1a4) & 0x200) != 0) {
        return 1;
      }
    }
  }
  return 0;
}

