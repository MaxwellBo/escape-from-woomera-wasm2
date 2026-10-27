
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10062ed0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float *pfVar8;
  float fVar9;
  float in_stack_ffffffa0;
  float in_stack_ffffffa4;
  float in_stack_ffffffa8;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (DAT_10122044[1] == _DAT_100dd5f8) {
    return 0;
  }
  uVar4 = param_1[0x17];
  if ((uVar4 & 0x20) != 0) {
    if ((float)param_1[0x15] <= _DAT_100dd5f8) {
      param_1[0x17] = uVar4 & 0xffffffdf;
      return 0;
    }
    iVar5 = param_1[1];
    if (*(int *)(iVar5 + 0x108) == 7) {
      if (*(float *)(iVar5 + 0x100) + DAT_10122044[1] < (float)param_1[0x15]) {
        return 1;
      }
      fVar7 = (float)param_1[0x15] - *(float *)(iVar5 + 0x100);
    }
    else {
      if (*DAT_10122044 + DAT_10122044[1] < (float)param_1[0x15]) {
        return 1;
      }
      fVar7 = (float)param_1[0x15] - *DAT_10122044;
    }
    fVar7 = fVar7 / DAT_10122044[1];
    if (fVar7 != _DAT_100dd5f8) {
      if ((uVar4 & 0x40) != 0) {
        if ((uVar4 & 8) == 0) {
          param_1[0xf] = *(int *)(iVar5 + 0x20);
          param_1[0x10] = *(int *)(iVar5 + 0x24);
          iVar6 = *(int *)(iVar5 + 0x28);
          param_1[0x17] = uVar4 | 8;
          param_1[0x11] = iVar6;
        }
        if ((param_1[0x17] & 0x10U) == 0) {
          param_1[0x12] = *(int *)(iVar5 + 0x5c);
          param_1[0x13] = *(int *)(iVar5 + 0x60);
          iVar6 = *(int *)(iVar5 + 100);
          param_1[0x17] = param_1[0x17] | 0x10;
          param_1[0x14] = iVar6;
        }
        local_c = *(undefined4 *)(iVar5 + 0x20);
        pfVar8 = (float *)(iVar5 + 0x20);
        local_8 = *(undefined4 *)(iVar5 + 0x24);
        local_4 = *(undefined4 *)(iVar5 + 0x28);
        fVar10 = *(float *)(iVar5 + 0x5c);
        fVar12 = *(float *)(iVar5 + 100);
        fVar11 = *(float *)(iVar5 + 0x60);
        if (param_1[4] == 0) {
          *pfVar8 = fVar7 * *pfVar8;
          *(float *)(iVar5 + 0x24) = fVar7 * *(float *)(iVar5 + 0x24);
          *(float *)(iVar5 + 0x28) = fVar7 * *(float *)(iVar5 + 0x28);
          iVar5 = param_1[1];
          pfVar8 = (float *)(iVar5 + 0x5c);
          fVar9 = fVar7 * *(float *)(iVar5 + 100);
          *pfVar8 = fVar7 * *pfVar8;
          *(float *)(iVar5 + 0x60) = fVar7 * *(float *)(iVar5 + 0x60);
        }
        else {
          iVar6 = *(int *)(param_1[4] + 4);
          fVar9 = *(float *)(iVar6 + 0x24);
          fVar1 = *(float *)(iVar6 + 0x28);
          fVar2 = *(float *)(iVar6 + 0x24);
          fVar3 = *(float *)(iVar6 + 0x28);
          *pfVar8 = (*pfVar8 - *(float *)(iVar6 + 0x20)) * fVar7 + *(float *)(iVar6 + 0x20);
          *(float *)(iVar5 + 0x24) = (*(float *)(iVar5 + 0x24) - fVar9) * fVar7 + fVar2;
          *(float *)(iVar5 + 0x28) = (*(float *)(iVar5 + 0x28) - fVar1) * fVar7 + fVar3;
          iVar5 = param_1[1];
          pfVar8 = (float *)(iVar5 + 0x5c);
          iVar6 = *(int *)(param_1[4] + 4);
          fVar1 = *(float *)(iVar6 + 0x60);
          fVar2 = *(float *)(iVar6 + 0x60);
          fVar9 = (*(float *)(iVar5 + 100) - *(float *)(iVar6 + 100)) * fVar7 +
                  *(float *)(iVar6 + 100);
          *pfVar8 = (*pfVar8 - *(float *)(iVar6 + 0x5c)) * fVar7 + *(float *)(iVar6 + 0x5c);
          *(float *)(iVar5 + 0x60) = (*(float *)(iVar5 + 0x60) - fVar1) * fVar7 + fVar2;
        }
        pfVar8[2] = fVar9;
        iVar5 = param_1[1];
        fVar12 = fVar12 - *(float *)(iVar5 + 100);
        fVar11 = fVar11 - *(float *)(iVar5 + 0x60);
        fVar10 = fVar10 - *(float *)(iVar5 + 0x5c);
        FUN_10002250(&local_c,(float *)&stack0xffffffa0,(float *)(param_1[1] + 0x20));
        FUN_10062db0((int)param_1,in_stack_ffffffa0,in_stack_ffffffa4,in_stack_ffffffa8,fVar10,
                     fVar11,fVar12);
        FUN_10063350(param_1);
      }
      FUN_10063370(param_1);
      param_1[0x17] = param_1[0x17] & 0xffffffdf;
    }
    return 1;
  }
  return 0;
}

