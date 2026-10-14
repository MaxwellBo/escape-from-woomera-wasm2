
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100ab730(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined2 extraout_var;
  float10 fVar3;
  float10 fVar4;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined4 auStack_48 [3];
  undefined1 auStack_3c [16];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  int iStack_c;
  
  if (*(int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4) < 1) {
    return;
  }
  iVar2 = *(int *)(param_1[0x37] + 4);
  fStack_54 = *(float *)(iVar2 + 0x70) + *(float *)(iVar2 + 0x7c);
  fStack_58 = *(float *)(iVar2 + 0x6c) + *(float *)(iVar2 + 0x78);
  fStack_5c = *(float *)(iVar2 + 0x68) + *(float *)(iVar2 + 0x74);
  FUN_100af200(&fStack_5c);
  (**(code **)(*(int *)param_1[0x37] + 0x214))(&fStack_68);
  fStack_50 = *(float *)(DAT_10122044 + 0x2c) * _DAT_100ddaf4;
  fStack_4c = *(float *)(DAT_10122044 + 0x30) * _DAT_100ddaf4;
  fStack_60 = *(float *)(DAT_10122044 + 0x28) * _DAT_100ddaf4 + fStack_6c;
  fStack_5c = fStack_68 + fStack_50;
  fStack_58 = fStack_64 + fStack_4c;
  FUN_100afc60(&fStack_6c,&fStack_60,0,*(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208),
               auStack_3c);
  (*DAT_10121ff4)(1,*(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208),
                  CONCAT22(extraout_var,(short)param_1[0x48]),0,&DAT_10121dd8,&DAT_10121dd8,0,0,0,0,
                  0,0);
  if (((fStack_2c < (float)_DAT_100dd628) &&
      (((iStack_c != 0 || (iStack_c = (*DAT_10121f1c)(0), iStack_c != 0)) &&
       (*(int *)(iStack_c + 0x7c) != 0)))) &&
     ((*(byte *)(*(int *)(*(int *)(iStack_c + 0x7c) + 4) + 0x1a4) & 4) == 0)) {
    FUN_100ae830(auStack_48,&fStack_18);
    fStack_50 = fStack_14 * _DAT_100de45c;
    fStack_4c = fStack_10 * _DAT_100de45c;
    fStack_60 = fStack_18 * _DAT_100de45c + fStack_28;
    fStack_5c = fStack_24 + fStack_50;
    fStack_58 = fStack_20 + fStack_4c;
    FUN_1001a1f0(0x10119ff4,&fStack_60,auStack_48,
                 *(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208));
    piVar1 = (int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4);
    *piVar1 = *piVar1 + -1;
    FUN_1007c580((void *)param_1[0x37],5);
    if (*(int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4) < 1) {
      (**(code **)(*param_1 + 0x194))();
      return;
    }
  }
  fVar3 = FUN_100ae400();
  param_1[0x3e] = (int)(float)(fVar3 + (float10)_DAT_100e0eb8);
  fVar3 = FUN_100ae4b0(*(int *)(param_1[0x37] + 0x308),10.0,0x41700000);
  fVar4 = FUN_100ae400();
  param_1[0x40] = (int)(float)(fVar4 + (float10)(float)fVar3);
  return;
}

