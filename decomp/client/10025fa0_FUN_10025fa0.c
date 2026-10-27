
undefined4 __thiscall
FUN_10025fa0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  
  FUN_10026030(param_3,param_2);
  pcVar1 = FUN_10026180();
  FUN_10025dd0(this,pcVar1,DAT_100a3a64);
  *(undefined4 *)((int)this + 0x98) = DAT_100a3a64;
  if ((*(uint *)((int)this + 0x10) & 1) == 0) {
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  }
  return 1;
}

