
/* WARNING: Removing unreachable block (ram,0x100b6e5f) */
/* WARNING: Removing unreachable block (ram,0x100b6e83) */

void __thiscall FUN_100b6e50(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x198);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(iVar1 + 0x7c) + 0xe0))(param_2);
    return;
  }
  return;
}

