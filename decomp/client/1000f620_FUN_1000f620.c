
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000f620(int param_1)

{
  int iVar1;
  CBasePlayerItem *extraout_ECX;
  CBasePlayerItem *this;
  undefined2 extraout_var;
  float10 fVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  float fStack_60;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  int iStack_38;
  int iStack_34;
  float fStack_28;
  
  if (*(int *)(*(int *)(param_1 + 0xdc) + 0x534 + (int)*(CBasePlayerItem **)(param_1 + 0x104) * 4)
      != 0) {
    CBasePlayerItem::AttemptToMaterialize(*(CBasePlayerItem **)(param_1 + 0x104));
    iVar1 = *(int *)(*(int *)(param_1 + 0xdc) + 4);
    fStack_60 = *(float *)(iVar1 + 0x10);
    if ((*(uint *)(iVar1 + 0x1a4) & 0x4000) != 0) {
      fStack_60 = fStack_60 - _DAT_1005acb4;
    }
    piVar7 = &iStack_38;
    uVar6 = 0;
    uVar5 = 0;
    pfVar3 = &fStack_44;
    fStack_50 = *(float *)(DAT_1007f7f8 + 0x28) * _DAT_1005acb0 + *(float *)(iVar1 + 8);
    fStack_4c = *(float *)(iVar1 + 0xc) + *(float *)(DAT_1007f7f8 + 0x2c) * _DAT_1005acb0;
    fStack_48 = fStack_60 + *(float *)(DAT_1007f7f8 + 0x30) * _DAT_1005acb0;
    pfVar4 = &fStack_50;
    fStack_44 = *(float *)(DAT_1007f7f8 + 0x28) * _DAT_1005acac + *(float *)(iVar1 + 8);
    fStack_40 = *(float *)(iVar1 + 0xc) + *(float *)(DAT_1007f7f8 + 0x2c) * _DAT_1005acac;
    fStack_3c = fStack_60 + *(float *)(DAT_1007f7f8 + 0x30) * _DAT_1005acac;
    FUN_1000a860();
    (*DAT_1007f0bc)(1,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xdc) + 4) + 0x208),
                    CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0x124)),0,&DAT_1007f110,
                    &DAT_1007f110,0,0,0,0,0,0,pfVar3,pfVar4,uVar5,uVar6,piVar7);
    if (((iStack_38 == 0) && (iStack_34 == 0)) && ((float)_DAT_10059cf0 < fStack_28)) {
      CBasePlayerAmmo::DefaultTouch(*(CBasePlayerAmmo **)(param_1 + 0xdc),(CBaseEntity *)0x5);
      fVar2 = (float10)(*DAT_1007f03c)(0,0x3f800000);
      this = extraout_ECX;
      if (fVar2 <= (float10)_DAT_100599f0) {
        this = *(CBasePlayerItem **)(*(int *)(param_1 + 4) + 0x208);
      }
      CBasePlayerItem::AttemptToMaterialize(this);
      *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x314) = 200;
      *(int *)(*(int *)(param_1 + 0xdc) + 0x534 + *(int *)(param_1 + 0x104) * 4) =
           *(int *)(*(int *)(param_1 + 0xdc) + 0x534 + *(int *)(param_1 + 0x104) * 4) + -1;
      *(undefined4 *)(param_1 + 0x120) = 1;
      fVar2 = FUN_10018f40();
      *(float *)(param_1 + 0xf8) = (float)(fVar2 + (float10)_DAT_1005ac70);
      fVar2 = FUN_10018f40();
      *(float *)(param_1 + 0x100) = (float)(fVar2 + (float10)_DAT_10059a10);
    }
  }
  return;
}

