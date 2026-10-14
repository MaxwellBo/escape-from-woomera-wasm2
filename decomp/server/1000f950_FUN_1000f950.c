
void __fastcall FUN_1000f950(int *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_10019450((uint *)(param_1 + 0x5a));
  if (CONCAT31(extraout_var,bVar1) == 0) {
    param_1[0xa8] = param_1[0xa8] | 0x40000000;
  }
  FUN_10019470(param_1);
  return;
}

