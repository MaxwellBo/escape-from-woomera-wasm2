
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100750a0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  
  if (*(float *)(param_1 + 0x148) == _DAT_100dd5f8) {
    *(undefined4 *)(param_1 + 0x170) = DAT_10121dd8;
    *(undefined4 *)(param_1 + 0x174) = DAT_10121ddc;
    *(undefined4 *)(param_1 + 0x178) = DAT_10121de0;
    *(undefined4 *)(param_1 + 0x164) = DAT_10121dd8;
    *(undefined4 *)(param_1 + 0x168) = DAT_10121ddc;
    *(undefined4 *)(param_1 + 0x16c) = DAT_10121de0;
  }
  else {
    FUN_10099880(*(int *)(param_1 + 4));
    iVar6 = *(int *)(param_1 + 4);
    fVar1 = *(float *)(param_1 + 0x148);
    *(float *)(param_1 + 0x170) = *(float *)(iVar6 + 0x50);
    *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(iVar6 + 0x54);
    *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(iVar6 + 0x58);
    fVar2 = *(float *)(iVar6 + 0x48);
    fVar3 = *(float *)(iVar6 + 0x4c);
    fVar4 = *(float *)(iVar6 + 0x54);
    fVar5 = *(float *)(iVar6 + 0x58);
    *(float *)(param_1 + 0x164) = fVar1 * *(float *)(iVar6 + 0x44) + *(float *)(iVar6 + 0x50);
    *(float *)(param_1 + 0x168) = fVar1 * fVar2 + fVar4;
    *(float *)(param_1 + 0x16c) = fVar1 * fVar3 + fVar5;
  }
  if (*(int *)(*(int *)(param_1 + 4) + 0x1cc) != 0) {
    FUN_100635b0(param_1);
  }
  return;
}

