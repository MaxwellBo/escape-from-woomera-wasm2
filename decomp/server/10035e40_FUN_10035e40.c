
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10035e40(int *param_1,float param_2,float *param_3,float param_4)

{
  float *pfVar1;
  int iVar2;
  float unaff_EDI;
  float10 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (*(int *)(param_1[1] + 0x108) != 5) {
    func_0x1005f700(param_2);
    return;
  }
  if ((float)_DAT_100dd628 < *DAT_10122044 - (float)param_1[0xc6]) {
    if (param_1[0x74] != param_1[0xa1]) {
      param_1[0x74] = param_1[0xa1];
      param_1[0xc5] = 0x43480000;
      param_1[0x33] = 0x43480000;
    }
  }
  fVar6 = (float)param_1[199];
  pfVar1 = (float *)(param_1 + 0xc2);
  fStack_18 = fVar6 * *pfVar1;
  fStack_14 = fVar6 * (float)param_1[0xc3];
  fStack_24 = fStack_18 + *param_3;
  fStack_20 = fStack_14 + param_3[1];
  fVar6 = fVar6 * (float)param_1[0xc4] + param_3[2];
  fVar5 = SQRT(fStack_24 * fStack_24 + fStack_20 * fStack_20 + fVar6 * fVar6);
  if (fVar5 == _DAT_100dd5f8) {
    fStack_18 = 0.0;
    fStack_14 = 0.0;
    fStack_10 = 1.0;
  }
  else {
    fVar5 = _DAT_100dd618 / fVar5;
    FUN_10001d60(&fStack_18,fStack_24 * fVar5,fStack_20 * fVar5,fVar6 * fVar5);
  }
  param_4 = param_4 * (float)param_1[0x33];
  iVar2 = param_1[1];
  fStack_c = fStack_18 * param_4;
  fStack_8 = fStack_14 * param_4;
  fStack_1c = param_4 * fStack_10 + *(float *)(iVar2 + 0x10);
  fStack_20 = fStack_8 + *(float *)(iVar2 + 0xc);
  fStack_24 = fStack_c + *(float *)(iVar2 + 8);
  if (param_1[0x74] == param_1[0xa1]) {
    fVar3 = FUN_100afe80(20.0,(float)param_1[0xc5],DAT_10122044[1] * _DAT_100ddae4);
    param_1[0xc5] = (int)(float)fVar3;
  }
  else {
    fVar3 = FUN_100afe80(100.0,(float)param_1[0xc5],DAT_10122044[1] * _DAT_100e45b4);
    param_1[0xc5] = (int)(float)fVar3;
    if (fVar3 < (float10)_DAT_100dd61c) {
      param_1[0xc6] = (int)*DAT_10122044;
    }
  }
  fVar6 = 0.0;
  iVar2 = (**(code **)(*param_1 + 0x150))(param_1[1] + 8,&fStack_24);
  if (iVar2 != 0) {
    iVar2 = param_1[1];
    param_2 = param_2 - *(float *)(iVar2 + 8);
    fStack_24 = fVar6 - *(float *)(iVar2 + 0xc);
    fStack_20 = unaff_EDI - *(float *)(iVar2 + 0x10);
    *pfVar1 = param_2;
    param_1[0xc3] = (int)fStack_24;
    param_1[0xc4] = (int)fStack_20;
    fVar6 = SQRT((float)param_1[0xc4] * (float)param_1[0xc4] +
                 (float)param_1[0xc3] * (float)param_1[0xc3] + *pfVar1 * *pfVar1);
    if (fVar6 == _DAT_100dd5f8) {
      fVar5 = 1.0;
      fVar4 = 0.0;
      fVar6 = 0.0;
    }
    else {
      fVar6 = _DAT_100dd618 / fVar6;
      fVar5 = fVar6 * (float)param_1[0xc4];
      fVar4 = fVar6 * (float)param_1[0xc3];
      fVar6 = fVar6 * *pfVar1;
    }
    FUN_10001d60(&stack0xffffffd8,fVar6,fVar4,fVar5);
    *pfVar1 = param_2;
    param_1[0xc3] = (int)fStack_24;
    param_1[0xc4] = (int)fStack_20;
    FUN_100ae940(*(undefined4 *)(param_1[1] + 0x208),(undefined4 *)&stack0xffffffcc,
                 fStack_4 * (float)param_1[0x33],1);
    return;
  }
  iVar2 = (**(code **)(*param_1 + 0x160))();
  param_1[0x74] = iVar2;
  param_1[0xc6] = (int)*DAT_10122044;
  *pfVar1 = DAT_10121dd8;
  param_1[0xc3] = DAT_10121ddc;
  param_1[0xc4] = DAT_10121de0;
  return;
}

