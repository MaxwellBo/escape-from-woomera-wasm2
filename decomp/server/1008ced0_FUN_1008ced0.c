
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1008ced0(int *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float10 fVar10;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar5 = param_1[0x37];
  if (*(int *)(iVar5 + 0x534 + param_1[0x41] * 4) != 0) {
    iVar9 = *(int *)(iVar5 + 4);
    local_c = *(undefined4 *)(iVar9 + 8);
    local_8 = *(undefined4 *)(iVar9 + 0xc);
    local_4 = *(undefined4 *)(iVar9 + 0x10);
    fVar6 = *(float *)(DAT_10122044 + 0x28) * _DAT_100f049c;
    fVar7 = *(float *)(DAT_10122044 + 0x2c) * _DAT_100f049c;
    fVar8 = *(float *)(DAT_10122044 + 0x30) * _DAT_100f049c;
    iVar9 = *(int *)(iVar5 + 4);
    fVar2 = *(float *)(iVar9 + 0x20);
    fVar3 = *(float *)(iVar9 + 0x24);
    fVar4 = *(float *)(iVar9 + 0x28);
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    iVar9 = FUN_1001a1f0(0x10115578,&local_c,&local_18,*(undefined4 *)(*(int *)(iVar5 + 4) + 0x208))
    ;
    iVar5 = *(int *)(iVar9 + 4);
    *(float *)(iVar5 + 0x20) = fVar6 + fVar2;
    *(float *)(iVar5 + 0x24) = fVar7 + fVar3;
    *(float *)(iVar5 + 0x28) = fVar8 + fVar4;
    *(undefined4 *)(*(int *)(iVar9 + 4) + 0x60) = 0x43c80000;
    *(int *)(*(int *)(param_1[0x37] + 4) + 0xbc) =
         (int)s_models_v_satchel_radio_mdl_101155bc - *(int *)(DAT_10122044 + 0x98);
    *(int *)(*(int *)(param_1[0x37] + 4) + 0xc0) =
         (int)s_models_p_satchel_radio_mdl_10115588 - *(int *)(DAT_10122044 + 0x98);
    (**(code **)(*param_1 + 0x17c))(2,1,0);
    FUN_1007c580((void *)param_1[0x37],5);
    param_1[0x2b] = 1;
    piVar1 = (int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4);
    *piVar1 = *piVar1 + -1;
    fVar10 = FUN_100ae400();
    param_1[0x3e] = (int)(float)(fVar10 + (float10)_DAT_100dd628);
    fVar10 = FUN_100ae400();
    param_1[0x3f] = (int)(float)(fVar10 + (float10)_DAT_100dd648);
  }
  return;
}

