
void __thiscall FUN_100b1880(void *this,byte *param_1,int *param_2)

{
  if (param_2[0x73] != 0) {
    FUN_100b18e0(this,*(int *)(DAT_10122044 + 0x98) + param_2[0x73],param_1,(int)param_2,0x1011a820,
                 0x56);
    return;
  }
  FUN_100b18e0(this,*(int *)(DAT_10122044 + 0x98) + *param_2,param_1,(int)param_2,0x1011a820,0x56);
  return;
}

