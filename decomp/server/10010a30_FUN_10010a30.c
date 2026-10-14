
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10010a30(int param_1,int *param_2)

{
  int iVar1;
  void *extraout_ECX;
  void *this;
  float fVar2;
  longlong lVar3;
  void *this_00;
  float fVar4;
  char *pcVar5;
  float fVar6;
  char *pcVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  char acStack_38 [20];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  (*DAT_10121f74)();
  lVar3 = __ftol();
  this_00 = *(void **)(*(int *)(param_1 + 4) + 0x208);
  pcVar5 = s_bullchicken_bc_acid1_wav_101038d4;
  fVar4 = 2.8026e-45;
  FUN_10094b20(this_00,this_00,2,s_bullchicken_bc_acid1_wav_101038d4,0x3f800000,0x3f4ccccd,0,
               (int)lVar3);
  iVar1 = (*DAT_10121f70)(0,1);
  if (iVar1 == 0) {
    this = *(void **)(param_1 + 4);
    pcVar5 = *(char **)((int)this + 0x208);
    pcVar7 = s_bullchicken_bc_spithit1_wav_101038b8;
  }
  else {
    if (iVar1 != 1) goto LAB_10010acc;
    pcVar5 = *(char **)(*(int *)(param_1 + 4) + 0x208);
    pcVar7 = s_bullchicken_bc_spithit2_wav_1010389c;
    this = extraout_ECX;
  }
  fVar4 = 2.5449073e-29;
  FUN_10094b20(this,pcVar5,1,pcVar7,0x3f800000,0x3f4ccccd,0,(int)lVar3);
LAB_10010acc:
  iVar1 = (**(code **)(*param_2 + 0xbc))();
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 4);
    uStack_24 = *(undefined4 *)(iVar1 + 8);
    uStack_20 = *(undefined4 *)(iVar1 + 0xc);
    uStack_1c = *(undefined4 *)(iVar1 + 0x10);
    fStack_48 = SQRT(*(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x28) +
                     *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
                     *(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20));
    if (fStack_48 == _DAT_100dd5f8) {
      fStack_4c = 0.0;
      fStack_48 = 1.0;
      fStack_44 = _DAT_100dd5f8;
    }
    else {
      fStack_48 = _DAT_100dd618 / fStack_48;
      fStack_44 = fStack_48 * *(float *)(iVar1 + 0x20);
      fStack_4c = fStack_48 * *(float *)(iVar1 + 0x24);
      fStack_48 = fStack_48 * *(float *)(iVar1 + 0x28);
    }
    fStack_44 = fStack_44 * _DAT_100df2b0;
    fStack_40 = fStack_4c * _DAT_100df2b0;
    fStack_3c = fStack_48 * _DAT_100df2b0;
    fStack_14 = fStack_44;
    fStack_10 = fStack_40;
    fStack_c = fStack_3c;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    fStack_3c = *(float *)(iVar1 + 0x28) * _DAT_100dd63c + *(float *)(iVar1 + 0x10);
    fStack_40 = *(float *)(iVar1 + 0x24) * _DAT_100dd63c + *(float *)(iVar1 + 0xc);
    fStack_44 = *(float *)(iVar1 + 0x20) * _DAT_100dd63c + *(float *)(iVar1 + 8);
    FUN_100afc60((float *)(iVar1 + 8),&fStack_44,0,*(undefined4 *)(iVar1 + 0x208),acStack_38);
    pcVar5 = acStack_38;
    fVar4 = 2.544945e-29;
    FUN_100b0450((int)pcVar5,0x29);
  }
  FUN_100106a0(&uStack_24,&fStack_14,DAT_10121cc4,0x18);
  fVar6 = *(float *)(param_1 + 4);
  fVar2 = 0.0;
  if (*(int *)((int)fVar6 + 0x198) != 0) {
    fVar2 = (float)(*(int *)((int)fVar6 + 0x198) + 0x80);
  }
  uVar10 = 0x100000;
  iVar1 = 0;
  fVar8 = DAT_10126a6c;
  fVar9 = DAT_10126a70;
  FUN_10003850(&stack0xffffff84,(undefined4 *)((int)fVar6 + 8));
  FUN_1001fb30((float)this_00,fVar4,(float)pcVar5,fVar6,fVar2,fVar8,fVar9,iVar1,uVar10);
  FUN_100b0ef0(param_1);
  return;
}

