
undefined4 __cdecl HUD_AddEntity(int param_1,int *param_2)

{
  int iVar1;
  
                    /* 0x19950  477  HUD_AddEntity */
  iVar1 = (*DAT_100a5150)();
  if (iVar1 != 0) {
    FUN_10021bb0(&DAT_100a4118,param_1,param_2);
    if (((DAT_100a412c == 4) || (DAT_100a4130 == 2)) && (*param_2 == DAT_100a4a68)) {
      return 0;
    }
  }
  return 1;
}

