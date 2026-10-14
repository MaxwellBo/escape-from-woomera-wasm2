
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10048a81(int *param_1,int param_2)

{
  uint *puVar1;
  void *this;
  float fVar2;
  char cVar3;
  bool bVar4;
  undefined4 in_EAX;
  undefined3 uVar8;
  undefined3 extraout_var;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *unaff_EBX;
  float fVar9;
  float fVar10;
  float10 fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fStack_34;
  float fStack_28;
  undefined4 uStack_18;
  undefined4 uStack_14;
  float fStack_10;
  undefined4 uStack_c;
  
  uVar8 = (undefined3)((uint)in_EAX >> 8);
  uStack_c = 0xffffff8a;
  cVar3 = *(char *)(CONCAT31(uVar8,(char)in_EAX + ' ') + param_2) + '\x10';
  *(char *)unaff_EBX = (char)*unaff_EBX + cVar3;
  *param_1 = *param_1 + CONCAT31(uVar8,cVar3);
  if (*unaff_EBX == 2) {
    *(uint *)(param_1[1] + 0x1a4) = *(uint *)(param_1[1] + 0x1a4) & 0xfffffdff;
    iVar5 = param_1[1];
    fStack_10 = *(float *)(iVar5 + 0x10) + _DAT_100dd618;
    uStack_14 = *(undefined4 *)(iVar5 + 0xc);
    uStack_18 = *(undefined4 *)(iVar5 + 8);
    FUN_100afe10((int)param_1,&uStack_18);
    FUN_100af200(param_1[1] + 0x50);
    puVar1 = (uint *)(param_1 + 0x58);
    bVar4 = FUN_10019450(puVar1);
    if (CONCAT31(extraout_var,bVar4) == 0) {
      fVar10 = DAT_10122044[10] * _DAT_100e843c;
      fVar9 = DAT_10122044[0xb] * _DAT_100e843c;
      fStack_28 = DAT_10122044[0xf] * _DAT_100e843c;
    }
    else {
      fStack_34 = *(float *)(DAT_10121dac + 0xc);
      if (fStack_34 <= _DAT_100dd618) {
        fStack_34 = 1.0;
      }
      iVar5 = FUN_10019460(puVar1);
      iVar5 = *(int *)(iVar5 + 4);
      iVar6 = FUN_10019460(puVar1);
      fVar10 = (*(float *)(iVar5 + 0x17c) + *(float *)(*(int *)(iVar6 + 4) + 0x10)) -
               *(float *)(param_1[1] + 0x10);
      if (fVar10 < _DAT_100dd634) {
        fVar10 = _DAT_100dd634;
      }
      fStack_28 = SQRT(fVar10 * fStack_34 + fVar10 * fStack_34);
      iVar5 = FUN_10019460(puVar1);
      iVar5 = *(int *)(iVar5 + 4);
      iVar6 = FUN_10019460(puVar1);
      fVar9 = (float)_DAT_100dd628 / (fStack_28 / fStack_34);
      fVar10 = ((*(float *)(iVar5 + 8) + *(float *)(*(int *)(iVar6 + 4) + 0x174)) -
               *(float *)(param_1[1] + 8)) * fVar9;
      fVar9 = ((*(float *)(*(int *)(iVar6 + 4) + 0x178) + *(float *)(iVar5 + 0xc)) -
              *(float *)(param_1[1] + 0xc)) * fVar9;
      fVar2 = SQRT(fStack_28 * fStack_28 + fVar10 * fVar10 + fVar9 * fVar9);
      if (_DAT_100e8448 < fVar2) {
        fVar2 = (float)_DAT_100e8440 / fVar2;
        fVar10 = fVar10 * fVar2;
        fVar9 = fVar9 * fVar2;
        fStack_28 = fVar2 * fStack_28;
      }
    }
    iVar5 = (*DAT_10121f70)(0,2);
    if (iVar5 != 0) {
      this = *(void **)(param_1[1] + 0x208);
      uVar7 = (**(code **)(*param_1 + 0x230))();
      uVar13 = 0;
      uVar12 = 0x40000000;
      fVar11 = (float10)(**(code **)(*param_1 + 0x234))();
      FUN_10094b20(this,this,2,(&PTR_s_headcrab_hc_attack1_wav_1010dd20)[iVar5],(float)fVar11,uVar12
                   ,uVar13,uVar7);
    }
    iVar5 = param_1[1];
    *(float *)(iVar5 + 0x20) = fVar10;
    *(float *)(iVar5 + 0x24) = fVar9;
    *(float *)(iVar5 + 0x28) = fStack_28;
    param_1[0xaf] = (int)(*DAT_10122044 + _DAT_100de4ac);
    return;
  }
  FUN_10060620(param_1,unaff_EBX);
  return;
}

