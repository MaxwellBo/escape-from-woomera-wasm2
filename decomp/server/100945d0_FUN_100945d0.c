
uint __cdecl FUN_100945d0(undefined4 param_1,byte *param_2)

{
  uint uVar1;
  char local_40 [64];
  
  if (DAT_10131048 == 0) {
    return 0xffffffff;
  }
  local_40[0] = '\0';
  uVar1 = FUN_10094520(param_2);
  if ((int)uVar1 < 0) {
    (*DAT_10121efc)(1,s_No_such_sentence_group__s_10116fb0,param_2);
    return 0xffffffff;
  }
  uVar1 = FUN_100943e0(uVar1,local_40);
  return uVar1;
}

