
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10007df0(int *param_1)

{
  int *piVar1;
  CBasePlayerItem *this;
  bool bVar2;
  CBasePlayerItem *this_00;
  undefined2 extraout_var;
  CBasePlayerItem *this_01;
  CBasePlayerItem *this_02;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  
  this = *(CBasePlayerItem **)(param_1[0x37] + 4);
  if ((*(int *)(this + 0x1c0) == 3) && (-0x11 < *(int *)(this + 0x1c4))) {
    if (param_1[0x2c] == 0) {
      (**(code **)(*param_1 + 0x174))();
    }
    else {
      (*DAT_1007f038)(0,0x3f);
      CBasePlayerItem::AttemptToMaterialize(this_00);
      (**(code **)(*param_1 + 0x17c))(0,1,0);
      param_1[0x2c] = 0;
    }
    fVar4 = FUN_10018f40();
    fVar5 = (float10)_DAT_100599f0;
    param_1[0x3e] = (int)(float)(fVar4 + fVar5);
    param_1[0x3f] = (int)(float)(fVar4 + fVar5);
    return;
  }
  if (param_1[0x2c] == 0) {
    piVar1 = (int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4);
    if (*piVar1 < 1) {
      CBasePlayerItem::AttemptToMaterialize(this);
      fVar5 = FUN_10018f40();
      *(float *)(param_1[0x37] + 700) = (float)(fVar5 + (float10)_DAT_100599f0);
      return;
    }
    param_1[0x4c] = 0;
    *piVar1 = *piVar1 + -1;
    fVar5 = FUN_10018f40();
    *(float *)(param_1[0x37] + 0x698) = (float)fVar5;
    *(undefined4 *)(param_1[0x37] + 0x314) = 0x100;
    (**(code **)(*param_1 + 0x17c))(3,1,0);
    param_1[0x2c] = 1;
    fVar5 = FUN_10018f40();
    param_1[0x40] = (int)(float)(fVar5 + (float10)_DAT_100599f0);
    *(float *)(param_1[0x37] + 0x68c) = *DAT_1007f7f8;
    fVar5 = FUN_10007ab0();
    fVar13 = (float)fVar5;
    fVar5 = FUN_10018f40();
    *(float *)(param_1[0x37] + 0x690) = (float)(fVar5 + (float10)fVar13);
    (*DAT_1007f0bc)(1,*(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208),
                    CONCAT22(extraout_var,*(undefined2 *)((int)param_1 + 0x136)),0,&DAT_1007f110,
                    &DAT_1007f110,0,0,0x6e,0,0,0);
    param_1[0x4b] = 0x80;
    return;
  }
  if (param_1[0x2c] == 1) {
    fVar5 = FUN_10018f40();
    if ((float10)(float)param_1[0x40] < fVar5) {
      (**(code **)(*param_1 + 0x17c))(4,1,0);
      param_1[0x2c] = 2;
      return;
    }
  }
  else {
    iVar3 = param_1[0x37];
    fVar5 = FUN_10018f40();
    if (((float10)*(float *)(iVar3 + 0x698) <= fVar5) && (*(int *)(iVar3 + 0x698) != 0x447a0000)) {
      bVar2 = FUN_1000a1d0();
      piVar1 = (int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4);
      if (bVar2) {
        *piVar1 = *piVar1 + -1;
        fVar5 = FUN_10018f40();
        fVar5 = fVar5 + (float10)_DAT_10059ea8;
      }
      else {
        *piVar1 = *piVar1 + -1;
        fVar5 = FUN_10018f40();
        fVar5 = fVar5 + (float10)_DAT_1005ac70;
      }
      *(float *)(param_1[0x37] + 0x698) = (float)fVar5;
    }
    if (*(int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4) < 1) {
      FUN_10008280(param_1);
      param_1[0x2c] = 0;
      fVar5 = FUN_10018f40();
      param_1[0x40] = (int)(float)(fVar5 + (float10)_DAT_10059a10);
      fVar5 = FUN_10018f40();
      *(float *)(param_1[0x37] + 700) = (float)(fVar5 + (float10)_DAT_10059eb0);
      return;
    }
    iVar3 = param_1[0x37];
    fVar5 = FUN_10018f40();
    if ((float10)*(float *)(iVar3 + 0x690) <= fVar5) {
      *(undefined4 *)(iVar3 + 0x698) = 0x447a0000;
    }
    FUN_10007ab0();
    lVar6 = __ftol();
    iVar3 = (int)lVar6;
    if (0xfa < iVar3) {
      iVar3 = 0xfa;
    }
    if (param_1[0x4b] == 0) {
      (*DAT_1007efc4)(1,s_sound_state__d_10076a74,0);
    }
    (*DAT_1007f0bc)(1,*(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208),
                    *(undefined2 *)((int)param_1 + 0x136),0,&DAT_1007f110,&DAT_1007f110,0,0,iVar3,0,
                    param_1[0x4b] == 0x80,0);
    param_1[0x4b] = 0x80;
    *(undefined4 *)(param_1[0x37] + 0x314) = 0x100;
    if (*(float *)(param_1[0x37] + 0x68c) < *DAT_1007f7f8 - _DAT_1005ac98) {
      uVar7 = *(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208);
      iVar3 = (*DAT_1007f038)(0,0x3f);
      iVar3 = iVar3 + 0x50;
      uVar12 = 0;
      uVar11 = 0x3f4ccccd;
      uVar10 = 0x3f800000;
      pcVar9 = s_weapons_electro4_wav_10076a2c;
      uVar8 = 1;
      CBasePlayerItem::AttemptToMaterialize(this_01);
      (*DAT_1007f038)(0,0x3f,uVar7,uVar8,pcVar9,uVar10,uVar11,uVar12,iVar3);
      CBasePlayerItem::AttemptToMaterialize(this_02);
      param_1[0x2c] = 0;
      fVar5 = FUN_10018f40();
      param_1[0x40] = (int)(float)(fVar5 + (float10)_DAT_10059a10);
      fVar5 = FUN_10018f40();
      *(float *)(param_1[0x37] + 700) = (float)(fVar5 + (float10)_DAT_10059a10);
      (**(code **)(*param_1 + 0x17c))(0,1,0);
    }
  }
  return;
}

