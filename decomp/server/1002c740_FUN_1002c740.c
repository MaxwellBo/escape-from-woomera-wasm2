
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1002c740(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (_DAT_100dd5f8 < *(float *)(param_1 + 0xbc)) {
    iVar1 = *(int *)(param_1 + 4);
    fVar2 = (float10)FUN_100c8a0a(param_1);
    *(float *)(iVar1 + 0x130) = (float)fVar2;
  }
  return;
}

