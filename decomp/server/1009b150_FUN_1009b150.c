
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1009b150(void *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0xcc))();
  if ((iVar1 != 0) && ((*(byte *)((int)param_1 + 0x2a0) & 1) == 0)) {
    iVar1 = FUN_1009bcc0((int)param_1);
    if ((iVar1 == 0) &&
       (_DAT_100ddaf8 < ABS(*(float *)(param_2[1] + 0x20)) + ABS(*(float *)(param_2[1] + 0x24)))) {
      *(uint *)((int)param_1 + 0x15c) = *(uint *)((int)param_1 + 0x15c) | 0x10000000;
      iVar1 = param_2[1];
      FUN_10060260(param_1,*(float *)(iVar1 + 8),*(float *)(iVar1 + 0xc),*(float *)(iVar1 + 0x10));
    }
  }
  return;
}

