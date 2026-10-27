
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1007b460(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 < 0) {
    return 5;
  }
  if (param_1 == 0) {
    return 1;
  }
  if ((float)param_1 / (float)param_2 < (float)_DAT_100ee928) {
    return 2;
  }
  uVar1 = 3;
  if ((float)_DAT_100ee920 <= (float)param_1 / (float)param_2) {
    uVar1 = 4;
  }
  return uVar1;
}

