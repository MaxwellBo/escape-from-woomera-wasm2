
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10048ab0(int *param_1,int *param_2)

{
  uint *puVar1;
  void *this;
  float fVar2;
  bool bVar3;
  undefined3 extraout_var;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float10 fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fStack_28;
  float fStack_1c;
  undefined4 uStack_c;
  undefined4 uStack_8;
  float fStack_4;
  
  if (*param_2 == 2) {
    *(uint *)(param_1[1] + 0x1a4) = *(uint *)(param_1[1] + 0x1a4) & 0xfffffdff;
    iVar4 = param_1[1];
    fStack_4 = *(float *)(iVar4 + 0x10) + _DAT_100dd618;
    uStack_8 = *(undefined4 *)(iVar4 + 0xc);
    uStack_c = *(undefined4 *)(iVar4 + 8);
    FUN_100afe10((int)param_1,&uStack_c);
    FUN_100af200(param_1[1] + 0x50);
    puVar1 = (uint *)(param_1 + 0x58);
    bVar3 = FUN_10019450(puVar1);
    if (CONCAT31(extraout_var,bVar3) == 0) {
      fVar8 = DAT_10122044[10] * _DAT_100e843c;
      fVar7 = DAT_10122044[0xb] * _DAT_100e843c;
      fStack_1c = DAT_10122044[0xf] * _DAT_100e843c;
    }
    else {
      fStack_28 = *(float *)(DAT_10121dac + 0xc);
      if (fStack_28 <= _DAT_100dd618) {
        fStack_28 = 1.0;
      }
      iVar4 = FUN_10019460(puVar1);
      iVar4 = *(int *)(iVar4 + 4);
      iVar5 = FUN_10019460(puVar1);
      fVar8 = (*(float *)(iVar4 + 0x17c) + *(float *)(*(int *)(iVar5 + 4) + 0x10)) -
              *(float *)(param_1[1] + 0x10);
      if (fVar8 < _DAT_100dd634) {
        fVar8 = _DAT_100dd634;
      }
      fStack_1c = SQRT(fVar8 * fStack_28 + fVar8 * fStack_28);
      iVar4 = FUN_10019460(puVar1);
      iVar4 = *(int *)(iVar4 + 4);
      iVar5 = FUN_10019460(puVar1);
      fVar7 = (float)_DAT_100dd628 / (fStack_1c / fStack_28);
      fVar8 = ((*(float *)(iVar4 + 8) + *(float *)(*(int *)(iVar5 + 4) + 0x174)) -
              *(float *)(param_1[1] + 8)) * fVar7;
      fVar7 = ((*(float *)(*(int *)(iVar5 + 4) + 0x178) + *(float *)(iVar4 + 0xc)) -
              *(float *)(param_1[1] + 0xc)) * fVar7;
      fVar2 = SQRT(fStack_1c * fStack_1c + fVar8 * fVar8 + fVar7 * fVar7);
      if (_DAT_100e8448 < fVar2) {
        fVar2 = (float)_DAT_100e8440 / fVar2;
        fVar8 = fVar8 * fVar2;
        fVar7 = fVar7 * fVar2;
        fStack_1c = fVar2 * fStack_1c;
      }
    }
    iVar4 = (*DAT_10121f70)(0,2);
    if (iVar4 != 0) {
      this = *(void **)(param_1[1] + 0x208);
      uVar6 = (**(code **)(*param_1 + 0x230))();
      uVar11 = 0;
      uVar10 = 0x40000000;
      fVar9 = (float10)(**(code **)(*param_1 + 0x234))();
      FUN_10094b20(this,this,2,(&PTR_s_headcrab_hc_attack1_wav_1010dd20)[iVar4],(float)fVar9,uVar10,
                   uVar11,uVar6);
    }
    iVar4 = param_1[1];
    *(float *)(iVar4 + 0x20) = fVar8;
    *(float *)(iVar4 + 0x24) = fVar7;
    *(float *)(iVar4 + 0x28) = fStack_1c;
    param_1[0xaf] = (int)(*DAT_10122044 + _DAT_100de4ac);
    return;
  }
  FUN_10060620(param_1,param_2);
  return;
}

