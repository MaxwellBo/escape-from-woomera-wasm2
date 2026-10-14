
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_1005e270(int param_1,float *param_2,float *param_3,int param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  float fStack_24;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  pfVar4 = param_3;
  fStack_18 = *param_3 - *param_2;
  iVar5 = *(int *)(param_1 + 4);
  fStack_14 = param_3[1] - param_2[1];
  uStack_c = *(undefined4 *)(iVar5 + 8);
  fStack_10 = param_3[2] - param_2[2];
  uStack_8 = *(undefined4 *)(iVar5 + 0xc);
  uStack_4 = *(undefined4 *)(iVar5 + 0x10);
  fVar7 = (float10)FUN_100afde0(&fStack_18);
  fVar1 = SQRT((*param_3 - *param_2) * (*param_3 - *param_2) +
               (param_3[1] - param_2[1]) * (param_3[1] - param_2[1]));
  FUN_100afe10(param_1,param_2);
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a4) & 3) == 0) {
    (*DAT_10121e70)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
  }
  param_3 = (float *)0x0;
  if (_DAT_100dd5f8 < fVar1) {
    fVar2 = fVar1 - _DAT_100dd618;
    do {
      fVar3 = (float)param_3 + _DAT_100dd634;
      fStack_24 = 16.0;
      if (fVar2 <= fVar3) {
        fStack_24 = (fVar1 - (float)param_3) - _DAT_100dd618;
      }
      iVar5 = (*DAT_10121e74)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),(float)fVar7,fStack_24,
                              2);
      if (iVar5 == 0) {
        if (param_5 != (float *)0x0) {
          *param_5 = (float)param_3;
        }
        if ((param_4 == 0) ||
           (*(int *)(*(int *)(param_4 + 4) + 0x208) != *(int *)(DAT_10122044 + 0x74))) {
          uVar6 = 0;
          goto LAB_1005e3e0;
        }
        break;
      }
      param_3 = (float *)fVar3;
    } while (fVar3 < fVar1);
  }
  uVar6 = 2;
  if (((*(byte *)(*(int *)(param_1 + 4) + 0x1a4) & 3) == 0) &&
     (((param_4 == 0 || ((*(uint *)(*(int *)(param_4 + 4) + 0x1a4) & 0x200) != 0)) &&
      ((float)_DAT_100e4128 < ABS(pfVar4[2] - *(float *)(*(int *)(param_1 + 4) + 0x10)))))) {
    uVar6 = 1;
  }
LAB_1005e3e0:
  FUN_100afe10(param_1,&uStack_c);
  return uVar6;
}

