
void __cdecl FUN_100b01f0(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_100b0180(param_3);
  if (iVar1 != 0) {
    if ((DAT_10121de8 == 1) && (param_3 == 0xf7)) {
      param_3 = 0;
    }
    (*DAT_10121ec0)(4,0x17,param_1,0);
    (*DAT_10121ec8)(0x65);
    (*DAT_10121edc)(*param_1);
    (*DAT_10121edc)(param_1[1]);
    (*DAT_10121edc)(param_1[2]);
    (*DAT_10121edc)(*param_2);
    (*DAT_10121edc)(param_2[1]);
    (*DAT_10121edc)(param_2[2]);
    (*DAT_10121ec8)(param_3);
    if (0xfe < param_4) {
      param_4 = 0xff;
    }
    (*DAT_10121ec8)(param_4);
    (*DAT_10121ec4)();
  }
  return;
}

