
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10034e70(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xdc) + 4);
  (*DAT_10121ff4)(6,*(undefined4 *)(iVar1 + 0x208),
                  CONCAT22((short)((uint)(iVar1 + 0x50) >> 0x10),*(undefined2 *)(param_1 + 0x130)),0
                  ,iVar1 + 8,iVar1 + 0x50,0,0,*(int *)(param_1 + 0xb4) != 0,0,0,0);
  fVar2 = FUN_100ae400();
  *(float *)(param_1 + 0x100) = (float)(fVar2 + (float10)_DAT_100e4138);
  fVar3 = FUN_100ae400();
  fVar2 = (float10)_DAT_100dd648;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(float *)(param_1 + 0xfc) = (float)(fVar3 + fVar2);
  *(float *)(param_1 + 0xf8) = (float)(fVar3 + fVar2);
  FUN_10034d30(param_1);
  return;
}

