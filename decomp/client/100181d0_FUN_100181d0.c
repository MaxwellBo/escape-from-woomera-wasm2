
undefined4 __thiscall
FUN_100181d0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  
  FUN_10026030(param_3,param_2);
  pcVar1 = FUN_10026180();
  iVar2 = FUN_1001c090(&DAT_100a3a40,pcVar1);
  *(int *)((int)this + 0x14) = iVar2;
  return 1;
}

