
char * __cdecl FUN_10056886(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  
  if ((param_3 == 10) && ((int)param_1 < 0)) {
    iVar1 = 1;
    param_3 = 10;
  }
  else {
    iVar1 = 0;
  }
  FUN_100568b3(param_1,param_2,param_3,iVar1);
  return param_2;
}

