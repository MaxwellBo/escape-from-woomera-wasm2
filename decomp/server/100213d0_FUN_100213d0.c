
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100213d0(int *param_1,int param_2,float param_3,int param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [16];
  float fStack_28;
  
  iVar5 = (**(code **)(*param_1 + 0xb8))();
  if (iVar5 == 0) {
    iVar5 = param_1[1];
    if (*(float *)(iVar5 + 0x1b0) <= _DAT_100dd5f8) {
      return;
    }
    *(float *)(iVar5 + 0x1b0) = *(float *)(iVar5 + 0x1b0) - _DAT_100dd618;
  }
  if (0 < param_2) {
    fVar4 = -param_3;
    do {
      fVar1 = *param_5;
      fVar2 = param_5[1];
      fVar3 = param_5[2];
      fVar6 = (float10)(*DAT_10121f74)(fVar4,param_3);
      fVar7 = (float10)(*DAT_10121f74)(fVar4,param_3);
      fVar8 = (float10)(*DAT_10121f74)(fVar4,param_3);
      fStack_44 = (float)(fVar6 + (float10)fVar1) * _DAT_100de460 + *(float *)(param_4 + 0x14);
      fStack_40 = (float)(fVar7 + (float10)fVar2) * _DAT_100de460 + *(float *)(param_4 + 0x18);
      fStack_3c = (float)((fVar8 + (float10)fVar3) * (float10)_DAT_100de460 +
                         (float10)*(float *)(param_4 + 0x1c));
      FUN_100afc60((float *)(param_4 + 0x14),&fStack_44,1,*(undefined4 *)(param_1[1] + 0x208),
                   auStack_38);
      if (fStack_28 != (float)_DAT_100dd628) {
        iVar5 = (**(code **)(*param_1 + 0x6c))();
        FUN_100b0400((int)auStack_38,iVar5);
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

