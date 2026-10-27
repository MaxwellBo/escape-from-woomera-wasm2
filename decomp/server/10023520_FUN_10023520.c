
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10023520(int param_1,undefined4 param_2,float *param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (*(int *)(param_1 + 0x1d0) != *(int *)(param_1 + 0x284)) {
    *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x284);
  }
  fVar2 = *(float *)(param_1 + 0xcc);
  pfVar1 = (float *)(param_1 + 0x378);
  iVar3 = *(int *)(param_1 + 4);
  fVar5 = fVar2 * param_3[1] * _DAT_100e1140;
  fVar4 = fVar2 * param_3[2] * _DAT_100e1140;
  fVar6 = *(float *)(param_1 + 0x37c) * _DAT_100e1138;
  fVar7 = *(float *)(param_1 + 0x380) * _DAT_100e1138;
  *pfVar1 = *pfVar1 * _DAT_100e1138 + fVar2 * *param_3 * _DAT_100e1140;
  *(float *)(param_1 + 0x37c) = fVar6 + fVar5;
  *(float *)(param_1 + 0x380) = fVar7 + fVar4;
  fStack_4 = *(float *)(param_1 + 0x380) + *(float *)(iVar3 + 0x10);
  fStack_8 = *(float *)(param_1 + 0x37c) + *(float *)(iVar3 + 0xc);
  fStack_c = *(float *)(iVar3 + 8) + *pfVar1;
  FUN_100ae940(*(undefined4 *)(iVar3 + 0x208),&fStack_c,
               SQRT(*pfVar1 * *pfVar1 +
                    *(float *)(param_1 + 0x380) * *(float *)(param_1 + 0x380) +
                    *(float *)(param_1 + 0x37c) * *(float *)(param_1 + 0x37c)) * param_4,1);
  return;
}

