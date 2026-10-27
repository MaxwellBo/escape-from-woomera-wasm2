
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10013140(int *param_1,int *param_2)

{
  int iVar1;
  void *extraout_ECX;
  void *this;
  longlong lVar2;
  undefined4 uVar3;
  char *pcVar4;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [20];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  (*DAT_10121f74)(0x42b40000,0x42dc0000);
  lVar2 = __ftol();
  FUN_10094b20(*(void **)(param_1[1] + 0x208),*(void **)(param_1[1] + 0x208),2,
               s_bullchicken_bc_acid1_wav_101038d4,0x3f800000,0x3f4ccccd,0,(int)lVar2);
  iVar1 = (*DAT_10121f70)(0,1);
  if (iVar1 == 0) {
    this = (void *)param_1[1];
    uVar3 = *(undefined4 *)((int)this + 0x208);
    pcVar4 = s_bullchicken_bc_spithit1_wav_101038b8;
  }
  else {
    if (iVar1 != 1) goto LAB_100131dc;
    uVar3 = *(undefined4 *)(param_1[1] + 0x208);
    pcVar4 = s_bullchicken_bc_spithit2_wav_1010389c;
    this = extraout_ECX;
  }
  FUN_10094b20(this,uVar3,1,pcVar4,0x3f800000,0x3f4ccccd,0,(int)lVar2);
LAB_100131dc:
  iVar1 = param_1[1];
  if (*(float *)(param_2[1] + 0x16c) == _DAT_100dd5f8) {
    fStack_3c = *(float *)(iVar1 + 0x28) * _DAT_100dd63c + *(float *)(iVar1 + 0x10);
    fStack_40 = *(float *)(iVar1 + 0x24) * _DAT_100dd63c + *(float *)(iVar1 + 0xc);
    fStack_44 = *(float *)(iVar1 + 0x20) * _DAT_100dd63c + *(float *)(iVar1 + 8);
    FUN_100afc60((float *)(iVar1 + 8),&fStack_44,0,*(undefined4 *)(iVar1 + 0x208),auStack_38);
    iVar1 = (*DAT_10121f70)(0,1);
    FUN_100b0450((int)auStack_38,iVar1 + 0x21);
    (*DAT_10121ec0)(4,0x17,&uStack_24,0);
    (*DAT_10121ec8)(0x6e);
    (*DAT_10121edc)(uStack_24);
    (*DAT_10121edc)(uStack_20);
    (*DAT_10121edc)(uStack_1c);
    (*DAT_10121edc)(uStack_14);
    (*DAT_10121edc)(uStack_10);
    (*DAT_10121edc)(uStack_c);
    (*DAT_10121ed0)(DAT_10121ccc);
    (*DAT_10121ec8)(5);
    (*DAT_10121ec8)(0x1e);
    (*DAT_10121ec8)(0x50);
    (*DAT_10121ec4)();
  }
  else {
    (**(code **)(*param_2 + 0x60))(iVar1,iVar1,DAT_10126a80,0);
  }
  param_1[0x1d] = (int)CBaseEntity::SUB_Remove;
  (**(code **)(*param_1 + 8))(0);
  return;
}

