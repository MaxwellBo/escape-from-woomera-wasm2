
undefined4 __thiscall FUN_1003d640(void *param_1,void *param_2,byte *param_3,int param_4)

{
  int iVar1;
  
  if (param_3 != (byte *)0x0) {
    iVar1 = FUN_10080dd0(param_1,param_3);
    if (-1 < iVar1) {
      iVar1 = FUN_10080db0(param_2,iVar1);
      if (iVar1 < param_4) {
        return 1;
      }
    }
  }
  return 0;
}

