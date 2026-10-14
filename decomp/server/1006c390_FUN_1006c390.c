
void __cdecl FUN_1006c390(uint *param_1,uint *param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = param_3 * 2 - param_4;
  if (param_3 < (int)param_4) {
    *param_1 = ((int)uVar1 < 0) - 1 & uVar1;
    *param_2 = param_4;
    return;
  }
  if (0xff < (int)uVar1) {
    uVar1 = 0xff;
  }
  *param_2 = uVar1;
  *param_1 = param_4;
  return;
}

