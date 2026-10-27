
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10049520(int param_1,float param_2,float param_3)

{
  int iVar1;
  
  if ((*(uint *)(*(int *)(param_1 + 4) + 0x1a4) & 0x200) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x19c);
    if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x224) & 0x28) != 0)) {
      return 1;
    }
    if ((param_3 <= _DAT_100ddaec) && ((float)_DAT_100e8690 <= param_2)) {
      return 1;
    }
  }
  return 0;
}

