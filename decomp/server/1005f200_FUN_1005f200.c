
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1005f200(int *param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  uint *puVar6;
  float fVar7;
  float unaff_EDI;
  longlong lVar8;
  int *piVar9;
  uint uVar10;
  float fVar11;
  float fStack_2c;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  iVar3 = FUN_1005d2d0((int)param_1);
  if ((iVar3 != 0) && ((param_1[0x9b] == 0 || (iVar3 = FUN_1005d300(param_1), iVar3 == 0)))) {
    (*DAT_10121efc)();
    goto LAB_1005f5e8;
  }
  if (*DAT_10122044 < (float)param_1[0x72]) {
    return;
  }
  iVar3 = param_1[0x9c];
  iVar2 = param_1[1];
  fVar7 = 0.0;
  fVar4 = (float)param_1[iVar3 * 4 + 0x7b] - *(float *)(iVar2 + 8);
  local_20 = (float)param_1[iVar3 * 4 + 0x7c] - *(float *)(iVar2 + 0xc);
  local_1c = (float)param_1[iVar3 * 4 + 0x7d] - *(float *)(iVar2 + 0x10);
  fVar11 = SQRT(fVar4 * fVar4 + local_20 * local_20 + local_1c * local_1c);
  if (fVar11 == _DAT_100dd5f8) {
    local_24 = 0.0;
    local_20 = 0.0;
    local_1c = 1.0;
  }
  else {
    fVar11 = _DAT_100dd618 / fVar11;
    FUN_10001d60(&local_24,fVar11 * fVar4,local_20 * fVar11,local_1c * fVar11);
  }
  local_18 = local_24;
  local_14 = local_20;
  local_10 = local_1c;
  pfVar1 = (float *)(param_1 + param_1[0x9c] * 4 + 0x7b);
  FUN_10060260(param_1,*pfVar1,pfVar1[1],pfVar1[2]);
  iVar3 = *param_1;
  lVar8 = __ftol();
  fVar4 = (float)lVar8;
  (**(code **)(iVar3 + 0x128))();
  if (_DAT_100de484 <= fStack_2c) {
    fStack_2c = 200.0;
  }
  if ((param_1[param_1[0x9c] * 4 + 0x7e] & 0xfffffe7fU) == 2) {
    puVar6 = (uint *)(param_1 + 0x58);
LAB_1005f3cd:
    fVar7 = (float)FUN_10019410(puVar6);
  }
  else if ((param_1[param_1[0x9c] * 4 + 0x7e] & 0xfffffe7fU) == 1) {
    puVar6 = (uint *)(param_1 + 0x5a);
    goto LAB_1005f3cd;
  }
  if (param_1[0x9b] == 0x40) {
    fVar7 = (float)FUN_10019410((uint *)(param_1 + 0x5a));
  }
  local_20 = local_14 * fStack_2c + *(float *)(param_1[1] + 0x10);
  local_24 = local_18 * fStack_2c + *(float *)(param_1[1] + 0xc);
  fVar11 = fVar7;
  iVar3 = (**(code **)(*param_1 + 0x150))();
  if (iVar3 != 2) {
    (**(code **)(*param_1 + 0x164))();
    fVar5 = DAT_10122044[0x1d];
    if (((((fVar5 == 0.0) && (fVar5 = (float)(*DAT_10121f1c)(), fVar5 == 0.0)) ||
         (piVar9 = *(int **)((int)fVar5 + 0x7c), piVar9 == (int *)0x0)) ||
        ((FUN_10018e30(*(int *)(param_1[1] + 0x208),*(int *)(piVar9[1] + 0x208)),
         (float)param_1[0x9d] <= _DAT_100dd5f8 ||
         (iVar3 = (**(code **)(*piVar9 + 0x98))(), iVar3 == 0)))) ||
       ((iVar3 = (**(code **)(*piVar9 + 0xcc))(), iVar3 != 0 ||
        (*DAT_10122044 - (float)param_1[0x72] <= (float)_DAT_100de538)))) {
      piVar9 = param_1 + param_1[0x9c] * 4 + 0x7b;
      fVar5 = fVar7;
      iVar3 = (**(code **)(*param_1 + 0x1b4))(param_1[1] + 8);
      if (iVar3 == 0) {
        (**(code **)(*param_1 + 0x164))();
        if (((float)param_1[0x9d] <= _DAT_100dd5f8) || ((*(byte *)(param_1 + 0xa8) & 0x20) != 0)) {
          param_1[0x57] = param_1[0x57] | 0x40000000;
          (*DAT_10121efc)();
          return;
        }
        FUN_1005d300(param_1);
        iVar3 = FUN_1005d2d0((int)param_1);
        if (iVar3 == 0) {
          if (*DAT_10122044 - (float)param_1[0x72] < (float)_DAT_100dd608) {
            param_1[0xa8] = param_1[0xa8] | 0x20;
          }
          param_1[0x72] = (int)(*DAT_10122044 + (float)_DAT_100dfb80);
          return;
        }
LAB_1005f5e8:
        param_1[0x57] = param_1[0x57] | 0x40000000;
        return;
      }
      uVar10 = 8;
      FUN_10003850(&stack0xffffffa0,&local_20);
      FUN_1005e890(param_1,piVar9,fVar4,fVar5,uVar10);
      FUN_1005d5a0(param_1,fVar7);
    }
    else if (fVar4 < (float)param_1[0x33]) {
      param_1[0x72] = (int)(*DAT_10122044 + (float)param_1[0x9d]);
      return;
    }
  }
  iVar3 = (**(code **)(*param_1 + 0x15c))();
  if (iVar3 != 0) {
    FUN_1005e570(param_1,unaff_EDI);
  }
  if ((float)param_1[0x72] <= *DAT_10122044) {
    if (fVar11 < local_14 * (float)param_1[0x33]) {
      local_14 = fVar11 / (float)param_1[0x33];
    }
    (**(code **)(*param_1 + 0x158))();
    if (param_1[0x9b] == 0) {
      (**(code **)(*param_1 + 0x164))();
      FUN_1005d290((int)param_1);
    }
    return;
  }
  (**(code **)(*param_1 + 0x164))();
  return;
}

