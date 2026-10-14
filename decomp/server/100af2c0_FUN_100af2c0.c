
void __cdecl
FUN_100af2c0(undefined4 param_1,undefined4 *param_2,char *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [32];
  
  local_2c = *param_2;
  local_28 = param_2[1];
  local_24 = param_2[2];
  if ((param_3 == (char *)0x0) || (*param_3 != '!')) {
    (*DAT_10121e80)(param_1,&local_2c,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    iVar1 = FUN_10094a60(local_20,(int)param_3,local_20);
    if (-1 < iVar1) {
      (*DAT_10121e80)(param_1,&local_2c,local_20,param_4,param_5,param_6,param_7);
      return;
    }
  }
  return;
}

