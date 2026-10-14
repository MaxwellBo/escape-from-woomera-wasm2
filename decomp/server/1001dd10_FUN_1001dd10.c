
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1001dd10(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  undefined4 *this;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar2 = (*DAT_10121e5c)();
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 + 0x80;
  }
  iVar3 = *(int *)(iVar2 + 0x208);
  if ((iVar3 == 0) || (this = *(undefined4 **)(iVar3 + 0x7c), this == (undefined4 *)0x0)) {
    this = (undefined4 *)(*DAT_10121f04)(iVar3,200);
    if (this == (undefined4 *)0x0) {
      this = (undefined4 *)0x0;
    }
    else {
      FUN_10002f30(this);
      *this = &PTR_FUN_100e0d98;
    }
    this[1] = iVar2;
  }
  FUN_1001f200(this,param_2);
  *(undefined4 *)(this[1] + 0x114) = 0;
  if (param_1 == 0) goto LAB_1001e0db;
  iVar2 = this[1];
  fVar10 = *(float *)(param_1 + 0x178);
  fVar9 = *(float *)(param_1 + 0xc);
  fVar1 = *(float *)(param_1 + 0x17c);
  fVar11 = *(float *)(param_1 + 0x10);
  *(float *)(iVar2 + 8) = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 8);
  *(float *)(iVar2 + 0xc) = fVar10 + fVar9;
  *(float *)(iVar2 + 0x10) = fVar1 + fVar11;
  iVar2 = (*DAT_10121e4c)(*(undefined4 *)(this[1] + 0x208));
  iVar3 = (*DAT_10121f70)(0,100);
  if ((iVar3 < 6) && (iVar2 != 0)) {
    fStack_8 = *(float *)(iVar2 + 0x1f8) + *(float *)(iVar2 + 0x8c);
    iVar3 = this[1];
    fStack_4 = *(float *)(iVar2 + 0x1fc) + *(float *)(iVar2 + 0x90);
    fVar9 = (*(float *)(iVar2 + 500) + *(float *)(iVar2 + 0x88)) - *(float *)(iVar3 + 8);
    fVar10 = fStack_8 - *(float *)(iVar3 + 0xc);
    fVar11 = fStack_4 - *(float *)(iVar3 + 0x10);
    fVar1 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11);
    if (fVar1 == _DAT_100dd5f8) {
      fVar11 = 1.0;
      fVar10 = 0.0;
      fVar9 = 0.0;
    }
    else {
      fVar1 = _DAT_100dd618 / fVar1;
      fVar11 = fVar11 * fVar1;
      fVar10 = fVar10 * fVar1;
      fVar9 = fVar9 * fVar1;
    }
    FUN_10001d60(&fStack_c,fVar9,fVar10,fVar11);
    iVar2 = this[1];
    fVar10 = fStack_8 * _DAT_100ddae4;
    fVar9 = fStack_4 * _DAT_100ddae4;
    *(float *)(iVar2 + 0x20) = fStack_c * _DAT_100ddae4;
    *(float *)(iVar2 + 0x24) = fVar10;
    *(float *)(iVar2 + 0x28) = fVar9;
    *(float *)(this[1] + 0x28) = *(float *)(this[1] + 0x28) + _DAT_100dd61c;
  }
  else {
    fVar8 = (float10)(*DAT_10121f74)(0x43480000,0x43960000);
    fVar6 = (float10)(*DAT_10121f74)(0xc2c80000,0x42c80000);
    fVar7 = (float10)(*DAT_10121f74)(0xc2c80000,0x42c80000);
    iVar2 = this[1];
    *(float *)(iVar2 + 0x20) = (float)fVar7;
    *(float *)(iVar2 + 0x24) = (float)fVar6;
    *(float *)(iVar2 + 0x28) = (float)fVar8;
  }
  fVar8 = (float10)(*DAT_10121f74)(0x42c80000,0x43480000);
  *(float *)(this[1] + 0x5c) = (float)fVar8;
  fVar8 = (float10)(*DAT_10121f74)(0x42c80000,0x43960000);
  *(float *)(this[1] + 0x60) = (float)fVar8;
  iVar2 = *(int *)(param_1 + 0x208);
  if (iVar2 == 0) {
    iVar2 = (*DAT_10121f1c)(0);
    if (iVar2 != 0) goto LAB_1001dfa9;
    piVar4 = (int *)0x0;
  }
  else {
LAB_1001dfa9:
    piVar4 = *(int **)(iVar2 + 0x7c);
  }
  uVar5 = (**(code **)(*piVar4 + 0x6c))();
  this[0x2e] = uVar5;
  if (_DAT_100de4d0 < *(float *)(param_1 + 0x160)) {
    iVar2 = this[1];
    FUN_10001d60(&fStack_c,*(float *)(iVar2 + 0x20) * _DAT_100e0d94,
                 *(float *)(iVar2 + 0x24) * _DAT_100e0d94,*(float *)(iVar2 + 0x28) * _DAT_100e0d94);
    iVar2 = this[1];
    *(float *)(iVar2 + 0x20) = fStack_c;
    *(float *)(iVar2 + 0x24) = fStack_8;
    *(float *)(iVar2 + 0x28) = fStack_4;
    FUN_1001d830((int)this);
    return;
  }
  iVar2 = this[1];
  if (_DAT_100e0d90 < *(float *)(param_1 + 0x160)) {
    FUN_10001d60(&fStack_c,*(float *)(iVar2 + 0x20) + *(float *)(iVar2 + 0x20),
                 *(float *)(iVar2 + 0x24) + *(float *)(iVar2 + 0x24),
                 *(float *)(iVar2 + 0x28) + *(float *)(iVar2 + 0x28));
    iVar2 = this[1];
    *(float *)(iVar2 + 0x20) = fStack_c;
    *(float *)(iVar2 + 0x24) = fStack_8;
    *(float *)(iVar2 + 0x28) = fStack_4;
    FUN_1001d830((int)this);
    return;
  }
  FUN_10001d60(&fStack_c,*(float *)(iVar2 + 0x20) * _DAT_100de4fc,
               *(float *)(iVar2 + 0x24) * _DAT_100de4fc,*(float *)(iVar2 + 0x28) * _DAT_100de4fc);
  iVar2 = this[1];
  *(float *)(iVar2 + 0x20) = fStack_c;
  *(float *)(iVar2 + 0x24) = fStack_8;
  *(float *)(iVar2 + 0x28) = fStack_4;
LAB_1001e0db:
  FUN_1001d830((int)this);
  return;
}

