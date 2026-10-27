
undefined4 __thiscall FUN_100b4bd0(void *this,int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    (*DAT_10121efc)(1,s_NULL_String_in_PackAmmo__1011bac0);
  }
  else {
    iVar1 = FUN_100b2ad0(param_1);
    if ((iVar1 != -1) && (0 < param_2)) {
      FUN_100b4c30(this,param_2,(byte *)(*(int *)(DAT_10122044 + 0x98) + param_1),iVar1,(int *)0x0);
      return 1;
    }
  }
  return 0;
}

