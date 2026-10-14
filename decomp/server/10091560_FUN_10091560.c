
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10091560(int *param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float in_stack_ffffff98;
  float fVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_stack_ffffffb0;
  float in_stack_ffffffb4;
  undefined4 in_stack_ffffffb8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  int iVar12;
  float fVar13;
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
  if (param_1[0x43] < 1) {
    (**(code **)(*param_1 + 0x18c))();
    if (param_1[0x43] != 0) {
      return;
    }
    (**(code **)(*param_1 + 0x174))();
    return;
  }
  *(undefined4 *)(param_1[0x37] + 0x314) = 1000;
  *(undefined4 *)(param_1[0x37] + 0x31c) = 0x100;
  param_1[0x43] = param_1[0x43] + -1;
  *(uint *)(*(int *)(param_1[0x37] + 4) + 0x118) =
       *(uint *)(*(int *)(param_1[0x37] + 4) + 0x118) | 2;
  (**(code **)(*(int *)param_1[0x37] + 0x214))();
  FUN_10081540((void *)param_1[0x37],(undefined4 *)&stack0xffffffd8);
  iVar1 = (**(code **)(*DAT_10121db8 + 0x18))();
  iVar2 = *(int *)(param_1[0x37] + 0x308);
  fVar13 = *(float *)(param_1[0x37] + 4);
  iVar12 = 0;
  uVar11 = 0;
  fVar10 = 5.60519e-45;
  fVar9 = 2048.0;
  if (iVar1 == 0) {
    fVar8 = 0.08716;
    fVar7 = 0.08716;
    fVar6 = 0.08716;
    FUN_10001d60(&stack0xffffffb0,0x3db280f1,0x3db280f1,0x3db280f1);
    puVar5 = (undefined4 *)&stack0xffffffd8;
    fVar4 = 2.7036036e-29;
    FUN_10003850(&stack0xffffffa4,puVar5);
    FUN_10003850(&stack0xffffff98,auStack_1c);
    iVar1 = 6;
  }
  else {
    fVar8 = 0.0;
    fVar7 = 0.04362;
    fVar6 = 0.08716;
    FUN_10001d60(&stack0xffffffb0,0x3db280f1,0x3d32aae3,0);
    puVar5 = (undefined4 *)&stack0xffffffd8;
    fVar4 = 2.7035846e-29;
    FUN_10003850(&stack0xffffffa4,puVar5);
    FUN_10003850(&stack0xffffff98,auStack_1c);
    iVar1 = 4;
  }
  iVar2 = FUN_10020cd0((void *)param_1[0x37],afStack_10,iVar1,in_stack_ffffff98,fVar4,(float)puVar5,
                       fVar6,fVar7,fVar8,in_stack_ffffffb0,in_stack_ffffffb4,in_stack_ffffffb8,fVar9
                       ,fVar10,uVar11,iVar12,fVar13,iVar2);
  uStack_8 = *(undefined4 *)(iVar2 + 8);
  (*DAT_10121ff4)();
  if (param_1[0x43] == 0) {
    if (*(int *)(param_1[0x37] + param_1[0x41] * 4 + 0x534) < 1) {
      FUN_1007e210((void *)param_1[0x37],(byte *)s__HEV_AMO0_1010665c,0,0);
    }
    if (param_1[0x43] == 0) goto LAB_1009177c;
  }
  param_1[0x3c] = (int)(*DAT_10122044 + (float)_DAT_100dd648);
LAB_1009177c:
  fVar3 = FUN_100ae400();
  param_1[0x3e] = (int)(float)(fVar3 + (float10)_DAT_100e1860);
  fVar3 = FUN_100ae400();
  param_1[0x3f] = (int)(float)(fVar3 + (float10)_DAT_100e1860);
  if (param_1[0x43] == 0) {
    fVar3 = FUN_100ae400();
    fVar3 = fVar3 + (float10)_DAT_100e1860;
  }
  else {
    fVar3 = FUN_100ae400();
    fVar3 = fVar3 + (float10)_DAT_100e08f0;
  }
  param_1[0x40] = (int)(float)fVar3;
  param_1[0x3d] = 0;
  return;
}

