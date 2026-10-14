
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10035090(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  iVar3 = param_1[1];
  fVar5 = (float10)(*DAT_10121f74)(0x43480000,0x43960000);
  iVar4 = param_1[1];
  fVar1 = *(float *)(iVar3 + 0x54);
  fVar2 = *(float *)(iVar3 + 0x58);
  *(float *)(iVar4 + 0x20) = (float)(fVar5 * (float10)*(float *)(iVar3 + 0x50));
  *(float *)(iVar4 + 0x24) = (float)(fVar5 * (float10)fVar1);
  *(float *)(iVar4 + 0x28) = (float)(fVar5 * (float10)fVar2);
  iVar3 = param_1[1];
  fVar5 = (float10)(*DAT_10121f74)(0xc2c80000,0x42c80000);
  *(float *)(iVar3 + 0x20) = (float)(fVar5 + (float10)*(float *)(iVar3 + 0x20));
  iVar3 = param_1[1];
  fVar5 = (float10)(*DAT_10121f74)(0xc2c80000,0x42c80000);
  *(float *)(iVar3 + 0x24) = (float)(fVar5 + (float10)*(float *)(iVar3 + 0x24));
  iVar3 = param_1[1];
  if (*(float *)(iVar3 + 0x28) < _DAT_100dd5f8) {
    fVar1 = *(float *)(iVar3 + 0x28) - _DAT_100de484;
  }
  else {
    fVar1 = *(float *)(iVar3 + 0x28) + _DAT_100de484;
  }
  *(float *)(iVar3 + 0x28) = fVar1;
  *(undefined4 *)(param_1[1] + 0x108) = 10;
  *(undefined4 *)(param_1[1] + 0x11c) = 0x3f000000;
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_models_grenade_mdl_10108710);
  FUN_100afdc0(param_1[1],&DAT_10121dd8,&DAT_10121dd8);
  *(uint *)(param_1[1] + 0x118) = *(uint *)(param_1[1] + 0x118) | 0x80;
  fVar5 = (float10)(*DAT_10121f74)(0x3f000000,0x3fc00000);
  *(float *)(param_1[1] + 0x1f8) = (float)fVar5;
  iVar3 = param_1[1];
  *(undefined4 *)(iVar3 + 0x50) = DAT_10121dd8;
  *(undefined4 *)(iVar3 + 0x54) = DAT_10121ddc;
  *(undefined4 *)(iVar3 + 0x58) = DAT_10121de0;
  return;
}

