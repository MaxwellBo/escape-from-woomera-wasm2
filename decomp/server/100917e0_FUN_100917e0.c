
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100917e0(int *param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float in_stack_ffffff98;
  float fVar5;
  undefined4 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float in_stack_ffffffb0;
  float in_stack_ffffffb4;
  undefined4 in_stack_ffffffb8;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  int iVar13;
  float fVar14;
  undefined4 auStack_1c [3];
  float afStack_10 [2];
  undefined4 uStack_8;
  
  iVar2 = *(int *)(param_1[0x37] + 4);
  if ((*(int *)(iVar2 + 0x1c0) == 3) && (-0x11 < *(int *)(iVar2 + 0x1c4))) {
    (**(code **)(*param_1 + 0x174))();
    fVar3 = FUN_100ae400();
    param_1[0x3e] = (int)(float)(fVar3 + (float10)_DAT_100e5730);
    return;
  }
  if (param_1[0x43] < 2) {
    (**(code **)(*param_1 + 0x18c))();
    (**(code **)(*param_1 + 0x174))();
    return;
  }
  *(undefined4 *)(param_1[0x37] + 0x314) = 1000;
  *(undefined4 *)(param_1[0x37] + 0x31c) = 0x100;
  param_1[0x43] = param_1[0x43] + -2;
  *(uint *)(*(int *)(param_1[0x37] + 4) + 0x118) =
       *(uint *)(*(int *)(param_1[0x37] + 4) + 0x118) | 2;
  FUN_1007c580((void *)param_1[0x37],5);
  (**(code **)(*(int *)param_1[0x37] + 0x214))();
  FUN_10081540((void *)param_1[0x37],(undefined4 *)&stack0xffffffd8);
  iVar1 = (**(code **)(*DAT_10121db8 + 0x18))();
  iVar2 = *(int *)(param_1[0x37] + 0x308);
  fVar14 = *(float *)(param_1[0x37] + 4);
  iVar13 = 0;
  uVar12 = 0;
  fVar11 = 5.60519e-45;
  fVar10 = 2048.0;
  if (iVar1 == 0) {
    fVar9 = 0.08716;
    fVar8 = 0.08716;
    fVar7 = 0.08716;
    FUN_10001d60(&stack0xffffffb0,0x3db280f1,0x3db280f1,0x3db280f1);
    puVar6 = (undefined4 *)&stack0xffffffd8;
    fVar5 = 2.7037962e-29;
    FUN_10003850(&stack0xffffffa4,puVar6);
    FUN_10003850(&stack0xffffff98,auStack_1c);
    iVar1 = 0xc;
  }
  else {
    fVar9 = 0.0;
    fVar8 = 0.04362;
    fVar7 = 0.17365;
    FUN_10001d60(&stack0xffffffb0,0x3e31d14e,0x3d32aae3,0);
    puVar6 = (undefined4 *)&stack0xffffffd8;
    fVar5 = 2.7037772e-29;
    FUN_10003850(&stack0xffffffa4,puVar6);
    FUN_10003850(&stack0xffffff98,auStack_1c);
    iVar1 = 8;
  }
  iVar2 = FUN_10020cd0((void *)param_1[0x37],afStack_10,iVar1,in_stack_ffffff98,fVar5,(float)puVar6,
                       fVar7,fVar8,fVar9,in_stack_ffffffb0,in_stack_ffffffb4,in_stack_ffffffb8,
                       fVar10,fVar11,uVar12,iVar13,fVar14,iVar2);
  uStack_8 = *(undefined4 *)(iVar2 + 8);
  (*DAT_10121ff4)();
  if (param_1[0x43] == 0) {
    if (*(int *)(param_1[0x37] + param_1[0x41] * 4 + 0x534) < 1) {
      FUN_1007e210((void *)param_1[0x37],(byte *)s__HEV_AMO0_1010665c,0,0);
    }
    if (param_1[0x43] == 0) goto LAB_100919fc;
  }
  param_1[0x3c] = (int)(*DAT_10122044 + (float)_DAT_100f14a0);
LAB_100919fc:
  fVar3 = FUN_100ae400();
  param_1[0x3e] = (int)(float)(fVar3 + (float10)_DAT_100dd650);
  fVar3 = FUN_100ae400();
  param_1[0x3f] = (int)(float)(fVar3 + (float10)_DAT_100dd650);
  if (param_1[0x43] != 0) {
    fVar4 = FUN_100ae400();
    fVar3 = (float10)_DAT_100de9b0;
    param_1[0x3d] = 0;
    param_1[0x40] = (int)(float)(fVar4 + fVar3);
    return;
  }
  param_1[0x40] = 0x3fc00000;
  param_1[0x3d] = 0;
  return;
}

