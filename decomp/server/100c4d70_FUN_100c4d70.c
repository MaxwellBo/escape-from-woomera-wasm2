
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100c4d70(float param_1)

{
  float10 fVar1;
  
  fVar1 = FUN_100c8190(1);
  fVar1 = fVar1 + (float10)param_1;
  if (fVar1 < (float10)_DAT_100dd5f8) {
    FUN_100c8180(1,_DAT_100dd5f8);
    return;
  }
  if ((float10)_DAT_100dd61c < fVar1) {
    fVar1 = (float10)_DAT_100dd61c;
  }
  FUN_100c8180(1,(float)fVar1);
  return;
}

