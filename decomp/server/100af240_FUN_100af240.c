
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100af240(undefined4 param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  (*DAT_10121e54)(param_1);
  pfVar1 = (float *)(param_2 + 0x40);
  fVar4 = *(float *)(param_2 + 0x44) * _DAT_100df2b0;
  fVar5 = *(float *)(param_2 + 0x48) * _DAT_100df2b0;
  *pfVar1 = *(float *)(param_2 + 0x40) * _DAT_100df2b0;
  fVar2 = *(float *)(param_2 + 0x2c);
  *(float *)(param_2 + 0x44) = fVar4;
  *(float *)(param_2 + 0x48) = fVar5;
  *(float *)(param_2 + 0x2c) = *pfVar1;
  *pfVar1 = fVar2;
  uVar3 = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_2 + 0x34) = uVar3;
  uVar3 = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_2 + 0x38) = uVar3;
  return;
}

