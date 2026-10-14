
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100818d0(void *this,float *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  float *pfVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  int iStack_50;
  float fStack_4c;
  int *piStack_48;
  undefined4 auStack_44 [3];
  undefined1 auStack_38 [16];
  float fStack_28;
  int *piStack_8;
  
  piVar7 = (int *)(*DAT_10121f28)(1);
  if (*(float *)(DAT_10121db0 + 0xc) == _DAT_100dd5f8) {
    *(undefined4 *)((int)this + 0x640) = 0;
    *param_1 = DAT_10121dd8;
    param_1[1] = DAT_10121ddc;
    param_1[2] = DAT_10121de0;
    return;
  }
  iVar11 = *(int *)((int)this + 4);
  fStack_78 = *(float *)(iVar11 + 0x74) + *(float *)(iVar11 + 0x68) + *(float *)((int)this + 0x634);
  fStack_74 = *(float *)(iVar11 + 0x78) + *(float *)(iVar11 + 0x6c) + *(float *)((int)this + 0x638);
  fStack_70 = *(float *)(iVar11 + 0x7c) + *(float *)(iVar11 + 0x70) + *(float *)((int)this + 0x63c);
  FUN_100af200(&fStack_78);
  fStack_6c = *(float *)(DAT_10122044 + 0x28);
  fStack_68 = *(float *)(DAT_10122044 + 0x2c);
  fStack_54 = param_4;
  fStack_64 = *(float *)(DAT_10122044 + 0x30);
  *(undefined4 *)((int)this + 0x640) = 0;
  fStack_78 = fStack_6c * param_3 + *param_2;
  piStack_48 = (int *)0x0;
  fStack_74 = fStack_68 * param_3 + param_2[1];
  fStack_70 = fStack_64 * param_3 + param_2[2];
  FUN_100afc60(param_2,&fStack_78,0,*(undefined4 *)(*(int *)((int)this + 4) + 0x208),auStack_38);
  if ((piStack_8 != (int *)0x0) && ((float)piStack_8[0x7b] != _DAT_100dd5f8)) {
    iVar11 = *(int *)(*(int *)((int)this + 4) + 0x1c0);
    if (iVar11 != 3) {
      if (piStack_8[0x90] == 3) goto LAB_10081aa9;
      if (iVar11 != 3) goto LAB_10081a69;
    }
    if (piStack_8[0x90] != 0) {
LAB_10081a69:
      if (piStack_8[0x7b] == 0x40000000) {
        *(undefined4 *)((int)this + 0x640) = 1;
      }
      *param_1 = *(float *)((int)this + 0x634);
      param_1[1] = *(float *)((int)this + 0x638);
      param_1[2] = *(float *)((int)this + 0x63c);
      return;
    }
  }
LAB_10081aa9:
  iStack_50 = 1;
  iVar11 = DAT_10122044;
  if (1 < *(int *)(DAT_10122044 + 0x94)) {
    do {
      if (((((*piVar7 == 0) && (piVar7[0x7b] == 0x40000000)) &&
           (piVar7 != *(int **)(*(int *)((int)this + 4) + 0x208))) &&
          (((iVar8 = (**(code **)(*DAT_10121db8 + 0x44))(this,piVar7), iVar11 = DAT_10122044,
            iVar8 != 0 &&
            ((piVar9 = piVar7, piVar7 != (int *)0x0 ||
             (piVar9 = (int *)(*DAT_10121f1c)(0), iVar11 = DAT_10122044, piVar9 != (int *)0x0)))) &&
           (piVar9 = (int *)piVar9[0x1f], iVar11 = DAT_10122044, piVar9 != (int *)0x0)))) &&
         (iVar8 = (**(code **)(*piVar9 + 0xb8))(), iVar11 = DAT_10122044, iVar8 != 0)) {
        iVar8 = *(int *)(*(int *)((int)this + 4) + 0x1c0);
        if (iVar8 == 3) {
LAB_10081b55:
          if (*(int *)(piVar9[1] + 0x1c0) != 0) {
LAB_10081b66:
            pfVar10 = (float *)(**(code **)(*piVar9 + 0x104))(auStack_44,param_2);
            fStack_78 = *pfVar10;
            fStack_74 = pfVar10[1];
            fVar12 = fStack_78 - *param_2;
            fStack_70 = pfVar10[2];
            fVar13 = fStack_74 - param_2[1];
            fVar14 = fStack_70 - param_2[2];
            fVar1 = SQRT(fVar12 * fVar12 + fVar13 * fVar13 + fVar14 * fVar14);
            if (fVar1 == _DAT_100dd5f8) {
              fVar14 = 1.0;
              fVar13 = 0.0;
              fVar12 = 0.0;
            }
            else {
              fVar1 = _DAT_100dd618 / fVar1;
              fVar14 = fVar14 * fVar1;
              fVar13 = fVar13 * fVar1;
              fVar12 = fVar12 * fVar1;
            }
            FUN_10001d60(&fStack_60,fVar12,fVar13,fVar14);
            iVar11 = DAT_10122044;
            if ((((_DAT_100dd5f8 <=
                   fStack_60 * *(float *)(DAT_10122044 + 0x28) +
                   fStack_58 * *(float *)(DAT_10122044 + 0x30) +
                   fStack_5c * *(float *)(DAT_10122044 + 0x2c)) &&
                 (fStack_4c = ((SQRT((fStack_78 - *param_2) * (fStack_78 - *param_2) +
                                     (fStack_74 - param_2[1]) * (fStack_74 - param_2[1]) +
                                     (fStack_70 - param_2[2]) * (fStack_70 - param_2[2])) / param_3)
                               * (float)_DAT_100dd608 + (float)_DAT_100dd628) *
                              (ABS(fStack_60 * *(float *)(DAT_10122044 + 0x40) +
                                   fStack_58 * *(float *)(DAT_10122044 + 0x48) +
                                   fStack_5c * *(float *)(DAT_10122044 + 0x44)) +
                              ABS(fStack_60 * *(float *)(DAT_10122044 + 0x34) +
                                  fStack_58 * *(float *)(DAT_10122044 + 0x3c) +
                                  fStack_5c * *(float *)(DAT_10122044 + 0x38)) *
                              (float)_DAT_100dd648), fStack_4c <= fStack_54)) &&
                ((FUN_100afc60(param_2,&fStack_78,0,*(undefined4 *)(*(int *)((int)this + 4) + 0x208)
                               ,auStack_38), fStack_28 == (float)_DAT_100dd628 ||
                 (iVar11 = DAT_10122044, piStack_8 == piVar7)))) &&
               (((iVar11 = (**(code **)(*(int *)this + 0x130))(piVar9), -1 < iVar11 ||
                 (iVar11 = (**(code **)(*piVar9 + 0xcc))(), iVar11 != 0)) ||
                (iVar8 = (**(code **)(*DAT_10121db8 + 0x1c))(), iVar11 = DAT_10122044, iVar8 != 0)))
               ) {
              fStack_54 = fStack_4c;
              fStack_6c = fStack_60;
              fStack_68 = fStack_5c;
              fStack_64 = fStack_58;
              iVar11 = DAT_10122044;
              piStack_48 = piVar7;
            }
          }
        }
        else if (*(int *)(piVar9[1] + 0x1c0) != 3) {
          if (iVar8 == 3) goto LAB_10081b55;
          goto LAB_10081b66;
        }
      }
      piVar9 = piStack_48;
      iStack_50 = iStack_50 + 1;
      piVar7 = piVar7 + 0xc9;
    } while (iStack_50 < *(int *)(iVar11 + 0x94));
    if (piStack_48 != (int *)0x0) {
      pfVar10 = (float *)FUN_100ae830(auStack_44,&fStack_6c);
      fVar4 = *pfVar10;
      fVar5 = pfVar10[1];
      fVar6 = pfVar10[2];
      iVar11 = *(int *)((int)this + 4);
      fVar13 = *(float *)(iVar11 + 0x74);
      fVar12 = *(float *)(iVar11 + 0x78);
      fVar1 = *(float *)(iVar11 + 0x7c);
      fVar14 = *(float *)(iVar11 + 0x68);
      fVar2 = *(float *)(iVar11 + 0x6c);
      fVar3 = *(float *)(iVar11 + 0x70);
      if (piVar9[0x7b] == 0x40000000) {
        *(undefined4 *)((int)this + 0x640) = 1;
      }
      *param_1 = (-fVar4 - fVar13) - fVar14;
      param_1[2] = (fVar6 - fVar1) - fVar3;
      param_1[1] = (fVar5 - fVar12) - fVar2;
      return;
    }
  }
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  return;
}

