
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100b68a0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  float10 fVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  (**(code **)(*param_1 + 0x2c))();
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_models_light_mdl_1011c1bc);
  uStack_18 = 0x42a00000;
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  uStack_14 = 0x42a00000;
  *(undefined4 *)(param_1[1] + 0x10c) = 1;
  uStack_10 = 0x42000000;
  uStack_c = 0xc2a00000;
  fStack_8 = -80.0;
  uStack_4 = 0;
  FUN_100afdc0(param_1[1],&uStack_c,&uStack_18);
  FUN_100b6750(param_1,1);
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  fVar5 = (float10)(*DAT_10121f74)(0,0x437f0000);
  *(float *)(param_1[1] + 0x130) = (float)fVar5;
  iVar1 = param_1[1];
  fStack_8 = (*(float *)(iVar1 + 0xf0) + *(float *)(iVar1 + 0xe4)) * (float)_DAT_100dd648 +
             *(float *)(iVar1 + 0x10);
  uStack_c = *(undefined4 *)(iVar1 + 0xc);
  uStack_10 = *(undefined4 *)(iVar1 + 8);
  piVar3 = FUN_1002ca80(0x1011a3cc,&uStack_10,0);
  param_1[0x38] = (int)piVar3;
  uVar4 = *(undefined4 *)(param_1[1] + 0x15c);
  lVar6 = __ftol();
  lVar7 = __ftol();
  lVar8 = __ftol();
  lVar9 = __ftol();
  *(undefined4 *)(piVar3[1] + 0x148) = 3;
  *(float *)(piVar3[1] + 0x150) = (float)(int)lVar9;
  *(float *)(piVar3[1] + 0x154) = (float)(int)lVar8;
  *(float *)(piVar3[1] + 0x158) = (float)(int)lVar7;
  *(float *)(piVar3[1] + 0x14c) = (float)(int)lVar6;
  *(undefined4 *)(piVar3[1] + 0x15c) = uVar4;
  iVar1 = param_1[0x38];
  iVar2 = *(int *)(param_1[1] + 0x208);
  if (iVar2 != 0) {
    uVar4 = (*DAT_10121f24)(iVar2);
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0x110) = uVar4;
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0x114) = 1;
    *(int *)(*(int *)(iVar1 + 4) + 0x194) = iVar2;
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0x108) = 0xc;
  }
  return;
}

