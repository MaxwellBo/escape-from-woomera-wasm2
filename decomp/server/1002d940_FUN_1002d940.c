
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall
FUN_1002d940(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *this;
  undefined4 uVar5;
  float10 fVar6;
  
  fVar6 = (float10)(*DAT_10121eec)(s_violence_hgibs_10106004);
  if (fVar6 == (float10)_DAT_100dd5f8) {
    return (int *)0x0;
  }
  iVar4 = (*DAT_10121e5c)();
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar4 + 0x80;
  }
  iVar3 = *(int *)(iVar4 + 0x208);
  if ((iVar3 == 0) || (this = *(int **)(iVar3 + 0x7c), this == (int *)0x0)) {
    this = (int *)(*DAT_10121f04)(iVar3,200);
    if (this == (int *)0x0) {
      this = (int *)0x0;
    }
    else {
      *this = (int)&PTR_FUN_100e0d98;
    }
    this[1] = iVar4;
  }
  iVar4 = this[1];
  *(undefined4 *)(iVar4 + 8) = param_2;
  *(undefined4 *)(iVar4 + 0xc) = param_3;
  *(undefined4 *)(iVar4 + 0x10) = param_4;
  iVar4 = this[1];
  *(undefined4 *)(iVar4 + 0x20) = param_5;
  *(undefined4 *)(iVar4 + 0x24) = param_6;
  *(undefined4 *)(iVar4 + 0x28) = param_7;
  if (*(int *)(param_1 + 0xf4) == 0xc3) {
    FUN_1001f200(this,s_models_agibs_mdl_10105fe0);
    this[0x2e] = 0xc3;
  }
  else if (*(int *)(param_1 + 0xf4) == 0) {
    FUN_1001f200(this,s_models_hgibs_mdl_10105fb4);
    this[0x2e] = 0xf7;
  }
  else {
    FUN_1001f200(this,s_models_hgibs_mdl_10105fb4);
    this[0x2e] = *(int *)(param_1 + 0xf4);
  }
  if (*(int *)(*(int *)(param_1 + 4) + 0x114) < 2) {
    (*DAT_10121efc)(2,s_GibShooter_Body_is_<__1__101082c0);
  }
  uVar5 = (*DAT_10121f70)(1,*(int *)(*(int *)(param_1 + 4) + 0x114) + -1);
  *(undefined4 *)(this[1] + 0x114) = uVar5;
  fVar1 = (float)this[0x15];
  fVar2 = *DAT_10122044;
  fVar6 = (float10)(*DAT_10121f74)(0x3f733333,0x3f866666);
  fVar6 = fVar6 * (float10)*(float *)(param_1 + 0xdc);
  this[0x31] = (int)(float)fVar6;
  if (fVar6 < (float10)(fVar1 - fVar2)) {
    (**(code **)(*this + 8))((float)fVar6);
    this[0x31] = 0;
  }
  fVar6 = (float10)(*DAT_10121f74)(0x42c80000,0x43480000);
  *(float *)(this[1] + 0x5c) = (float)fVar6;
  fVar6 = (float10)(*DAT_10121f74)(0x42c80000,0x43960000);
  *(float *)(this[1] + 0x60) = (float)fVar6;
  return this;
}

