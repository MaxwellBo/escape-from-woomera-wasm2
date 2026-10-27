
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10063e70(int *param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float in_stack_ffffff94;
  float fVar5;
  undefined4 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float in_stack_ffffffac;
  float in_stack_ffffffb0;
  undefined4 in_stack_ffffffb4;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  int iVar13;
  float fVar14;
  undefined4 auStack_28 [3];
  undefined4 auStack_1c [3];
  float afStack_10 [2];
  undefined4 uStack_8;
  
  iVar2 = *(int *)(param_1[0x37] + 4);
  if ((*(int *)(iVar2 + 0x1c0) == 3) && (-0x11 < *(int *)(iVar2 + 0x1c4))) {
    (**(code **)(*param_1 + 0x174))();
    param_1[0x3e] = 0x3e19999a;
    return;
  }
  if (param_1[0x43] < 1) {
    (**(code **)(*param_1 + 0x174))();
    param_1[0x3e] = 0x3e19999a;
    return;
  }
  *(undefined4 *)(param_1[0x37] + 0x314) = 600;
  *(undefined4 *)(param_1[0x37] + 0x31c) = 0x100;
  param_1[0x43] = param_1[0x43] + -1;
  *(uint *)(*(int *)(param_1[0x37] + 4) + 0x118) =
       *(uint *)(*(int *)(param_1[0x37] + 4) + 0x118) | 2;
  FUN_1007c580((void *)param_1[0x37],5);
  (**(code **)(*(int *)param_1[0x37] + 0x214))();
  FUN_10081540((void *)param_1[0x37],auStack_28);
  iVar1 = (**(code **)(*DAT_10121db8 + 0x18))();
  iVar2 = *(int *)(param_1[0x37] + 0x308);
  fVar14 = *(float *)(param_1[0x37] + 4);
  iVar13 = 0;
  uVar12 = 2;
  fVar11 = 2.8026e-45;
  fVar10 = 8192.0;
  if (iVar1 == 0) {
    fVar9 = 0.05234;
    fVar8 = 0.05234;
    fVar7 = 0.05234;
    FUN_10001d60(&stack0xffffffac,0x3d566278,0x3d566278,0x3d566278);
    puVar6 = auStack_28;
    fVar5 = 2.647582e-29;
    FUN_10003850(&stack0xffffffa0,puVar6);
    FUN_10003850(&stack0xffffff94,auStack_1c);
  }
  else {
    fVar9 = 0.02618;
    fVar8 = 0.02618;
    fVar7 = 0.02618;
    FUN_10001d60(&stack0xffffffac,0x3cd67770,0x3cd67770,0x3cd67770);
    puVar6 = auStack_28;
    fVar5 = 2.647601e-29;
    FUN_10003850(&stack0xffffffa0,puVar6);
    FUN_10003850(&stack0xffffff94,auStack_1c);
  }
  iVar2 = FUN_10020cd0((void *)param_1[0x37],afStack_10,1,in_stack_ffffff94,fVar5,(float)puVar6,
                       fVar7,fVar8,fVar9,in_stack_ffffffac,in_stack_ffffffb0,in_stack_ffffffb4,
                       fVar10,fVar11,uVar12,iVar13,fVar14,iVar2);
  uStack_8 = *(undefined4 *)(iVar2 + 8);
  (*DAT_10121ff4)();
  if ((param_1[0x43] == 0) && (*(int *)(param_1[0x37] + param_1[0x41] * 4 + 0x534) < 1)) {
    FUN_1007e210((void *)param_1[0x37],(byte *)s__HEV_AMO0_1010665c,0,0);
  }
  fVar3 = FUN_100ae400();
  param_1[0x3e] = (int)(float)(fVar3 + (float10)_DAT_100dfb80);
  fVar3 = FUN_100ae400();
  if ((float10)(float)param_1[0x3e] < fVar3) {
    fVar3 = FUN_100ae400();
    param_1[0x3e] = (int)(float)(fVar3 + (float10)_DAT_100dfb80);
  }
  fVar3 = FUN_100ae4b0(*(int *)(param_1[0x37] + 0x308),10.0,0x41700000);
  fVar4 = FUN_100ae400();
  param_1[0x40] = (int)(float)(fVar4 + (float10)(float)fVar3);
  return;
}

