
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100490c0(int *param_1)

{
  float10 fVar1;
  
  if (param_1[0x76] == 2) {
    fVar1 = (float10)(*DAT_10121f74)(0,0x40a00000);
    if (fVar1 < (float10)_DAT_100dfb80) {
      (**(code **)(*param_1 + 0x220))();
    }
  }
  return;
}

