
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1008c1a0(int param_1)

{
  uint uVar1;
  float10 fVar2;
  
  uVar1 = (uint)(*(int *)(param_1 + 0x124) == 0);
  *(uint *)(param_1 + 0x124) = uVar1;
  if ((uVar1 == 0) && (*(int **)(param_1 + 0x120) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x120) + 0x68))(0,0);
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  fVar2 = FUN_100ae400();
  *(float *)(param_1 + 0xfc) = (float)(fVar2 + (float10)_DAT_100dd608);
  return;
}

