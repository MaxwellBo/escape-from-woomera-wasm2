
int __cdecl FUN_100c974c(undefined1 *param_1,int param_2,byte *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_1c = param_1;
  local_24 = param_1;
  local_20 = param_2;
  local_18 = 0x42;
  iVar1 = FUN_100caf53((int *)&local_24,param_3,param_4);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_100cae3b(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar1;
}

