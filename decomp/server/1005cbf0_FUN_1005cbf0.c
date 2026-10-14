
void __fastcall FUN_1005cbf0(int *param_1)

{
  float fVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  undefined3 extraout_var;
  uint uVar7;
  float10 fVar8;
  undefined1 auStack_c [12];
  
  param_1[0xa2] = -1;
  param_1[0x57] = param_1[0x57] & 0xfff9ffbf;
  param_1[0xa3] = 0;
  uVar3 = (**(code **)(*param_1 + 0x1e0))();
  if (param_1[0x79] != 0) {
    uVar3 = uVar3 & *(uint *)(param_1[0x79] + 0xc);
  }
  fVar4 = (float)FUN_10095f00();
  param_1[0x57] = param_1[0x57] & 0xfff9ffbf;
  fVar8 = (float10)(**(code **)(*param_1 + 0x1ec))();
  while (fVar4 != -NAN) {
    pfVar5 = (float *)FUN_10095f40((int)fVar4);
    if (((pfVar5 != (float *)0x0) && (((uint)pfVar5[3] & uVar3) != 0)) &&
       (pfVar6 = (float *)(**(code **)(*param_1 + 0x100))(auStack_c),
       SQRT((pfVar5[1] - pfVar6[1]) * (pfVar5[1] - pfVar6[1]) +
            (*pfVar5 - *pfVar6) * (*pfVar5 - *pfVar6) +
            (pfVar5[2] - pfVar6[2]) * (pfVar5[2] - pfVar6[2])) <=
       (float)(int)pfVar5[4] * (float)fVar8)) {
      pfVar5[7] = (float)param_1[0xa2];
      bVar2 = FUN_10095b70((int)pfVar5);
      if (CONCAT31(extraout_var,bVar2) == 0) {
        if (((uint)pfVar5[3] & 0x18) == 0) {
          uVar7 = param_1[0x57] | 0x40000;
        }
        else {
          uVar7 = param_1[0x57] | 0x40040;
        }
      }
      else {
        uVar7 = param_1[0x57] | 0x20000;
      }
      param_1[0x57] = uVar7;
      fVar1 = pfVar5[3];
      param_1[0xa2] = (int)fVar4;
      param_1[0xa3] = param_1[0xa3] | (uint)fVar1;
    }
    fVar4 = pfVar5[6];
  }
  return;
}

