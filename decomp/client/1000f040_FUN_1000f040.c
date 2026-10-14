
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000f040(int *param_1)

{
  CBasePlayerItem *this;
  CBasePlayerItem *this_00;
  undefined4 uVar1;
  float10 fVar2;
  undefined4 auStack_c [3];
  
  (**(code **)(*param_1 + 0x178))();
  FUN_10009030(auStack_c);
  if (((float)param_1[0x3c] != _DAT_10059a18) && ((float)param_1[0x3c] < *DAT_1007f7f8)) {
    (*DAT_1007f038)(0,0x1f);
    CBasePlayerItem::AttemptToMaterialize(this);
    param_1[0x3c] = 0;
  }
  fVar2 = FUN_10018f40();
  if ((float10)(float)param_1[0x40] < fVar2) {
    if (param_1[0x43] == 0) {
      if (param_1[0x3d] != 0) goto LAB_1000f12e;
      if (*(int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4) != 0) {
        (**(code **)(*param_1 + 0x18c))();
        return;
      }
    }
    if (param_1[0x3d] != 0) {
LAB_1000f12e:
      if ((param_1[0x43] != 8) && (*(int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4) != 0)) {
        (**(code **)(*param_1 + 0x18c))();
        return;
      }
      (**(code **)(*param_1 + 0x17c))(4,1,0);
      (*DAT_1007f038)(0,0x1f);
      CBasePlayerItem::AttemptToMaterialize(this_00);
      param_1[0x3d] = 0;
      fVar2 = FUN_10018f40();
      param_1[0x40] = (int)(float)(fVar2 + (float10)_DAT_1005d898);
      return;
    }
    fVar2 = FUN_10018fb0(*(int *)(param_1[0x37] + 0x308),0.0,0x3f800000);
    if ((float10)_DAT_1005dc20 < fVar2) {
      if ((float10)_DAT_1005dc10 < fVar2) {
        uVar1 = 8;
      }
      else {
        uVar1 = 0;
      }
      fVar2 = FUN_10018f40();
      fVar2 = fVar2 + (float10)_DAT_1005dc18;
    }
    else {
      uVar1 = 9;
      fVar2 = FUN_10018f40();
      fVar2 = fVar2 + (float10)_DAT_10059a08;
    }
    param_1[0x40] = (int)(float)fVar2;
    (**(code **)(*param_1 + 0x17c))(uVar1,1,0);
  }
  return;
}

