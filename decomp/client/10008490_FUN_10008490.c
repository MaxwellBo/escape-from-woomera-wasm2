
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10008490(int *param_1)

{
  int iVar1;
  CBasePlayerItem *this;
  float10 fVar2;
  float10 fVar3;
  
  (**(code **)(*param_1 + 0x178))();
  if ((*(float *)(param_1[0x37] + 0x694) == _DAT_10059a18) ||
     (*DAT_1007f7f8 <= *(float *)(param_1[0x37] + 0x694))) goto LAB_100085b1;
  iVar1 = (*DAT_1007f038)(0,3);
  if (iVar1 == 0) {
    fVar2 = (float10)(*DAT_1007f03c)(0x3f333333,0x3f4ccccd);
    this = (CBasePlayerItem *)(float)fVar2;
LAB_10008595:
    CBasePlayerItem::AttemptToMaterialize(this);
  }
  else {
    if (iVar1 == 1) {
      fVar2 = (float10)(*DAT_1007f03c)(0x3f333333,0x3f4ccccd);
      this = (CBasePlayerItem *)(float)fVar2;
      goto LAB_10008595;
    }
    if (iVar1 == 2) {
      fVar2 = (float10)(*DAT_1007f03c)(0x3f333333,0x3f4ccccd);
      this = (CBasePlayerItem *)(float)fVar2;
      goto LAB_10008595;
    }
  }
  *(undefined4 *)(param_1[0x37] + 0x694) = 0;
LAB_100085b1:
  fVar2 = FUN_10018f40();
  if ((float10)(float)param_1[0x40] <= fVar2) {
    if (param_1[0x2c] != 0) {
      FUN_10008280(param_1);
      param_1[0x2c] = 0;
      fVar2 = FUN_10018f40();
      param_1[0x40] = (int)(float)(fVar2 + (float10)_DAT_10059ec0);
      return;
    }
    fVar2 = (float10)(*DAT_1007f03c)(0,0x3f800000);
    if (fVar2 <= (float10)_DAT_100599f0) {
      fVar2 = FUN_10018fb0(*(int *)(param_1[0x37] + 0x308),10.0,0x41700000);
      fVar3 = FUN_10018f40();
      param_1[0x40] = (int)(float)(fVar3 + (float10)(float)fVar2);
      return;
    }
    if (fVar2 <= (float10)_DAT_10059a00) {
      fVar2 = FUN_10018fb0(*(int *)(param_1[0x37] + 0x308),10.0,0x41700000);
      fVar3 = FUN_10018f40();
      param_1[0x40] = (int)(float)(fVar3 + (float10)(float)fVar2);
      return;
    }
    fVar2 = FUN_10018f40();
    param_1[0x40] = (int)(float)(fVar2 + (float10)_DAT_10059eb8);
  }
  return;
}

