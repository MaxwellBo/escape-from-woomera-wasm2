
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10044380(float param_1)

{
  float10 fVar1;
  
  fVar1 = FUN_10047660(1);
  fVar1 = fVar1 - (float10)param_1;
  if (fVar1 < (float10)_DAT_10059a18) {
    FUN_10047650(1,_DAT_10059a18);
    return;
  }
  if ((float10)_DAT_1005ace0 < fVar1) {
    fVar1 = (float10)_DAT_1005ace0;
  }
  FUN_10047650(1,(float)fVar1);
  return;
}

