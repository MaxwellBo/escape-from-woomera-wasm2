
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100afff0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (*_DAT_10121ea0)(param_2,param_3,&uStack_c);
  *param_1 = uStack_c;
  param_1[1] = uStack_8;
  param_1[2] = uStack_4;
  return;
}

