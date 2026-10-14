
void FUN_10083960(float *param_1,float *param_2,float *param_3,undefined4 param_4,undefined4 param_5
                 )

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  undefined1 auStack_60 [4];
  float afStack_5c [23];
  
  uVar4 = 0;
  pfVar3 = afStack_5c;
  do {
    if ((uVar4 & 1) == 0) {
      fVar5 = *param_2;
    }
    else {
      fVar5 = *param_1;
    }
    if ((uVar4 & 2) == 0) {
      fVar6 = param_2[1];
    }
    else {
      fVar6 = param_1[1];
    }
    if ((uVar4 & 4) == 0) {
      fVar1 = param_2[2];
    }
    else {
      fVar1 = param_1[2];
    }
    uVar4 = uVar4 + 1;
    fVar2 = param_3[1];
    pfVar3[-1] = fVar5 + *param_3;
    fVar5 = param_3[2];
    *pfVar3 = fVar6 + fVar2;
    pfVar3[1] = fVar1 + fVar5;
    pfVar3 = pfVar3 + 3;
  } while ((int)uVar4 < 8);
  piVar7 = (int *)0x101151e0;
  do {
    FUN_10083640(auStack_60 + piVar7[-1] * 0xc,auStack_60 + piVar7[-2] * 0xc,
                 auStack_60 + *piVar7 * 0xc,auStack_60 + piVar7[1] * 0xc,param_4,param_5);
    piVar7 = piVar7 + 4;
  } while ((int)piVar7 < 0x10115240);
  return;
}

