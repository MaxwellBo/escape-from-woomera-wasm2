
void __fastcall FUN_10004ee0(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + 1;
  bVar1 = FUN_10004e50(param_1);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) | 0x80000000;
  }
  return;
}

