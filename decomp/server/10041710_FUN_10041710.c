
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10041710(void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  float in_stack_ffffffa4;
  float fVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_30;
  float local_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  float local_18;
  float local_14;
  float local_10 [4];
  
  iVar2 = *(int *)(*(int *)((int)param_1 + 0xdc) + 4);
  local_28 = *(float *)(iVar2 + 0x70) + *(float *)(iVar2 + 0x7c);
  local_2c = *(float *)(iVar2 + 0x6c) + *(float *)(iVar2 + 0x78);
  local_30 = *(float *)(iVar2 + 0x68) + *(float *)(iVar2 + 0x74);
  FUN_100af200(&local_30);
  local_18 = DAT_10122044[10];
  local_14 = DAT_10122044[0xb];
  local_10[0] = DAT_10122044[0xc];
  (**(code **)(**(int **)((int)param_1 + 0xdc) + 0x214))();
  fVar9 = *DAT_10122044;
  fVar7 = *(float *)(*(int *)((int)param_1 + 0xdc) + 0x68c);
  fVar3 = FUN_10040e50();
  if ((float10)(fVar9 - fVar7) <= fVar3) {
    fVar9 = *DAT_10122044;
    fVar7 = *(float *)(*(int *)((int)param_1 + 0xdc) + 0x68c);
    fVar3 = FUN_10040e50();
    fVar9 = (float)(((float10)(fVar9 - fVar7) / fVar3) * (float10)_DAT_100de484);
  }
  else {
    fVar9 = 200.0;
  }
  if (*(int *)((int)param_1 + 0x130) != 0) {
    fVar9 = DAT_10126b3c;
  }
  if (*(int *)((int)param_1 + 0xb0) != 3) {
    iVar2 = *(int *)(*(int *)((int)param_1 + 0xdc) + 4);
    uVar1 = *(undefined4 *)(iVar2 + 0x28);
    if (*(int *)((int)param_1 + 0x130) == 0) {
      fStack_24 = fVar9 * DAT_10122044[0xb] * _DAT_100dd5d8;
      fStack_20 = fVar9 * DAT_10122044[0xc] * _DAT_100dd5d8;
      local_30 = *(float *)(iVar2 + 0x24) - fStack_24;
      local_2c = *(float *)(iVar2 + 0x28) - fStack_20;
      *(float *)(iVar2 + 0x20) = *(float *)(iVar2 + 0x20) - fVar9 * DAT_10122044[10] * _DAT_100dd5d8
      ;
      *(float *)(iVar2 + 0x24) = local_30;
      *(float *)(iVar2 + 0x28) = local_2c;
    }
    iVar2 = (**(code **)(*DAT_10121db8 + 0x18))();
    if (iVar2 == 0) {
      *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0xdc) + 4) + 0x28) = uVar1;
    }
    FUN_1007c580(*(void **)((int)param_1 + 0xdc),5);
  }
  fVar8 = 0.3;
  fVar7 = *(float *)(*(int *)((int)param_1 + 0xdc) + 0x308);
  fVar6 = 2.6051525e-29;
  fVar3 = FUN_100ae4b0((int)fVar7,0.3,0x3f4ccccd);
  puVar5 = &uStack_1c;
  *(float *)(*(int *)((int)param_1 + 0xdc) + 0x694) = (float)(fVar3 + (float10)*DAT_10122044);
  fVar4 = 2.6051654e-29;
  FUN_10003850(&stack0xffffffb0,puVar5);
  FUN_10003850(&stack0xffffffa4,local_10);
  FUN_10041920(param_1,in_stack_ffffffa4,fVar4,(float)puVar5,fVar6,fVar7,fVar8,fVar9);
  return;
}

