
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10098000(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  void *extraout_ECX;
  void *this;
  undefined2 extraout_var;
  float10 fVar4;
  undefined4 uVar5;
  char *pcVar6;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  int iStack_38;
  int iStack_34;
  float fStack_28;
  undefined4 auStack_24 [9];
  
  if (*(int *)(*(int *)(param_1 + 0xdc) + 0x534 + *(int *)(param_1 + 0x104) * 4) != 0) {
    FUN_100af200(*(int *)(*(int *)(param_1 + 0xdc) + 4) + 0x74);
    iVar3 = *(int *)(*(int *)(param_1 + 0xdc) + 4);
    fVar1 = *(float *)(iVar3 + 8);
    fStack_54 = *(float *)(iVar3 + 0x10);
    if ((*(uint *)(iVar3 + 0x1a4) & 0x4000) != 0) {
      fStack_54 = fStack_54 - _DAT_100f2018;
      fStack_50 = fVar1;
    }
    fStack_4c = *(float *)(DAT_10122044 + 0x2c) * _DAT_100ddb10;
    fStack_48 = *(float *)(DAT_10122044 + 0x30) * _DAT_100ddb10;
    fStack_44 = *(float *)(DAT_10122044 + 0x28) * _DAT_100ddb10 + fVar1;
    fStack_40 = *(float *)(iVar3 + 0xc) + fStack_4c;
    fStack_3c = fStack_54 + fStack_48;
    FUN_10001d60(&fStack_50,*(float *)(DAT_10122044 + 0x28) * _DAT_100ddacc + fVar1,
                 *(float *)(iVar3 + 0xc) + *(float *)(DAT_10122044 + 0x2c) * _DAT_100ddacc,
                 fStack_54 + *(float *)(DAT_10122044 + 0x30) * _DAT_100ddacc);
    FUN_100afc60(&fStack_50,&fStack_44,0,0,&iStack_38);
    (*DAT_10121ff4)(1,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xdc) + 4) + 0x208),
                    CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0x124)),0,&DAT_10121dd8,
                    &DAT_10121dd8,0,0,0,0,0,0);
    if (((iStack_38 == 0) && (iStack_34 == 0)) && ((float)_DAT_100dd5f0 < fStack_28)) {
      FUN_1007c580(*(void **)(param_1 + 0xdc),5);
      iVar3 = *(int *)(*(int *)(param_1 + 0xdc) + 4);
      iVar3 = FUN_1001a1f0(0x10117550,auStack_24,(undefined4 *)(iVar3 + 0x74),
                           *(undefined4 *)(iVar3 + 0x208));
      iVar3 = *(int *)(iVar3 + 4);
      fStack_40 = *(float *)(DAT_10122044 + 0x2c) * _DAT_100de484;
      fStack_3c = *(float *)(DAT_10122044 + 0x30) * _DAT_100de484;
      iVar2 = *(int *)(*(int *)(param_1 + 0xdc) + 4);
      fStack_50 = *(float *)(DAT_10122044 + 0x28) * _DAT_100de484 + *(float *)(iVar2 + 0x20);
      fStack_4c = fStack_40 + *(float *)(iVar2 + 0x24);
      fStack_48 = fStack_3c + *(float *)(iVar2 + 0x28);
      *(float *)(iVar3 + 0x20) = fStack_50;
      *(float *)(iVar3 + 0x24) = fStack_4c;
      *(float *)(iVar3 + 0x28) = fStack_48;
      fVar4 = (float10)(*DAT_10121f74)(0,0x3f800000);
      if ((float10)_DAT_100dd648 < fVar4) {
        this = *(void **)(param_1 + 4);
        pcVar6 = s_squeek_sqk_hunt3_wav_101174b0;
        uVar5 = *(undefined4 *)((int)this + 0x208);
      }
      else {
        pcVar6 = s_squeek_sqk_hunt2_wav_101174c8;
        uVar5 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
        this = extraout_ECX;
      }
      FUN_10094b20(this,uVar5,2,pcVar6,0x3f800000,0x3f4ccccd,0,0x69);
      *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x314) = 200;
      *(int *)(*(int *)(param_1 + 0xdc) + 0x534 + *(int *)(param_1 + 0x104) * 4) =
           *(int *)(*(int *)(param_1 + 0xdc) + 0x534 + *(int *)(param_1 + 0x104) * 4) + -1;
      *(undefined4 *)(param_1 + 0x120) = 1;
      fVar4 = FUN_100ae400();
      *(float *)(param_1 + 0xf8) = (float)(fVar4 + (float10)_DAT_100e0eb8);
      fVar4 = FUN_100ae400();
      *(float *)(param_1 + 0x100) = (float)(fVar4 + (float10)_DAT_100dd628);
    }
  }
  return;
}

