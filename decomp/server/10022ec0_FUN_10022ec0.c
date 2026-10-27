
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10022ec0(int *param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  uint *puVar6;
  undefined4 uVar7;
  float unaff_ESI;
  int *piVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  float fStack_54;
  undefined4 uStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_2c;
  float fStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  iVar4 = FUN_1005d2d0((int)param_1);
  if (iVar4 != 0) {
    (*DAT_10121efc)();
    param_1[0x57] = param_1[0x57] | 0x40000000;
    return;
  }
  if ((float)param_1[0x72] <= *DAT_10122044) {
    uVar7 = 0;
    if ((float)param_1[0x33] == _DAT_100dd5f8) {
      param_1[0x33] = 0x42c80000;
    }
    fStack_54 = param_2 * (float)param_1[0x33];
    do {
      iVar4 = param_1[0x9c];
      iVar1 = param_1[1];
      fStack_48 = (float)param_1[iVar4 * 4 + 0x7b] - *(float *)(iVar1 + 8);
      fStack_2c = (float)param_1[iVar4 * 4 + 0x7c] - *(float *)(iVar1 + 0xc);
      fStack_40 = (float)param_1[iVar4 * 4 + 0x7d] - *(float *)(iVar1 + 0x10);
      fVar2 = SQRT(fStack_48 * fStack_48 + fStack_2c * fStack_2c + fStack_40 * fStack_40);
      if (fVar2 == _DAT_100dd5f8) {
        fStack_48 = 0.0;
        fStack_44 = 0.0;
        fStack_40 = 1.0;
      }
      else {
        fVar2 = _DAT_100dd618 / fVar2;
        fStack_48 = fVar2 * fStack_48;
        fStack_44 = fStack_2c * fVar2;
        fStack_40 = fStack_40 * fVar2;
      }
      fStack_3c = fStack_48;
      fStack_38 = fStack_44;
      fStack_34 = fStack_40;
      fVar2 = (float)param_1[iVar4 * 4 + 0x7b] - *(float *)(iVar1 + 8);
      fVar3 = (float)param_1[iVar4 * 4 + 0x7c] - *(float *)(iVar1 + 0xc);
      fVar5 = (float)param_1[iVar4 * 4 + 0x7d] - *(float *)(iVar1 + 0x10);
      fVar2 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar5 * fVar5);
      param_2 = fVar2;
      if (_DAT_100de484 <= fVar2) {
        param_2 = 200.0;
      }
      if ((param_1[iVar4 * 4 + 0x7e] & 0xfffffe7fU) == 2) {
        puVar6 = (uint *)(param_1 + 0x58);
LAB_1002306a:
        uVar7 = FUN_10019410(puVar6);
      }
      else if ((param_1[iVar4 * 4 + 0x7e] & 0xfffffe7fU) == 1) {
        puVar6 = (uint *)(param_1 + 0x5a);
        goto LAB_1002306a;
      }
      fStack_24 = fStack_3c * param_2;
      iVar4 = param_1[1];
      uStack_4c = 0;
      fStack_20 = fStack_38 * param_2;
      puVar11 = &uStack_4c;
      fStack_10 = fStack_34 * param_2 + *(float *)(iVar4 + 0x10);
      fStack_14 = fStack_20 + *(float *)(iVar4 + 0xc);
      fStack_18 = fStack_24 + *(float *)(iVar4 + 8);
      iVar4 = (**(code **)(*param_1 + 0x150))();
      if (iVar4 != 2) {
        (**(code **)(*param_1 + 0x164))();
        fVar5 = DAT_10122044[0x1d];
        if (((((fVar5 == 0.0) && (fVar5 = (float)(*DAT_10121f1c)(), fVar5 == 0.0)) ||
             (piVar8 = *(int **)((int)fVar5 + 0x7c), piVar8 == (int *)0x0)) ||
            ((FUN_10018e30(*(int *)(param_1[1] + 0x208),*(int *)(piVar8[1] + 0x208)),
             (float)param_1[0x9d] <= _DAT_100dd5f8 ||
             (iVar4 = (**(code **)(*piVar8 + 0x98))(), iVar4 == 0)))) ||
           ((iVar4 = (**(code **)(*piVar8 + 0xcc))(), iVar4 != 0 ||
            (*DAT_10122044 - (float)param_1[0x72] <= (float)_DAT_100de538)))) {
          piVar8 = param_1 + param_1[0x9c] * 4 + 0x7b;
          fVar5 = unaff_ESI;
          uVar9 = uVar7;
          iVar4 = (**(code **)(*param_1 + 0x1b4))(param_1[1] + 8);
          if (iVar4 == 0) {
            (*DAT_10121efc)();
            (**(code **)(*param_1 + 0x164))();
            if ((float)param_1[0x9d] <= _DAT_100dd5f8) {
              param_1[0x57] = param_1[0x57] | 0x40000000;
              (*DAT_10121efc)();
              return;
            }
            FUN_1005d300(param_1);
            param_1[0x72] = (int)((float)param_1[0x9d] * (float)_DAT_100dd648 + *DAT_10122044);
            return;
          }
          uVar10 = 8;
          FUN_10003850(&stack0xffffff80,&uStack_1c);
          FUN_1005e890(param_1,piVar8,fVar5,uVar9,uVar10);
          FUN_1005d5a0(param_1,uVar7);
        }
        else if (unaff_ESI < (float)param_1[0x33]) {
          param_1[0x72] = (int)((float)param_1[0x9d] + *DAT_10122044);
          return;
        }
      }
      if ((float)puVar11 <= fStack_c) {
        (**(code **)(*param_1 + 0x158))();
        iVar4 = (**(code **)(*param_1 + 0x15c))();
        if (iVar4 != 0) {
          FUN_1005e570(param_1,fVar2);
        }
        fStack_54 = 0.0;
      }
      else {
        (**(code **)(*param_1 + 0x158))();
        FUN_1005e570(param_1,fVar2);
        fStack_54 = fStack_54 - param_2;
      }
      if (param_1[0x9b] == 0) {
        (**(code **)(*param_1 + 0x164))();
        FUN_1005d290((int)param_1);
      }
    } while ((_DAT_100dd5f8 < fStack_54) && (_DAT_100dd5f8 < param_2));
    if (_DAT_100ddaf4 <= fVar2) {
      if ((float)param_1[0x33] < _DAT_100de4a8) {
        param_1[0x33] = (int)((float)param_1[0x33] + _DAT_100dd63c);
      }
    }
    else {
      puVar6 = (uint *)(param_1 + 0x58);
      if (param_1[0x9b] != 2) {
        puVar6 = (uint *)(param_1 + 0x5a);
      }
      uVar7 = FUN_10019410(puVar6);
      FUN_1005d5a0(param_1,uVar7);
      FUN_1005d300(param_1);
      if (_DAT_100dd61c < (float)param_1[0x33]) {
        param_1[0x33] = (int)((float)param_1[0x33] - _DAT_100e113c);
        return;
      }
    }
  }
  return;
}

