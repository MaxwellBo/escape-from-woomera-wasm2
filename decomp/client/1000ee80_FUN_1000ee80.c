
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000ee80(int *param_1)

{
  int *piVar1;
  int iVar2;
  CBasePlayerItem *extraout_ECX;
  CBasePlayerItem *extraout_ECX_00;
  CBasePlayerItem *this;
  float10 fVar3;
  
  if ((0 < *(int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4)) && (param_1[0x43] != 8)) {
    fVar3 = FUN_10018f40();
    if ((float10)(float)param_1[0x3e] <= fVar3) {
      if (param_1[0x3d] == 0) {
        (**(code **)(*param_1 + 0x17c))(5,1,0);
        param_1[0x3d] = 1;
        fVar3 = FUN_10018f40();
        *(float *)(param_1[0x37] + 700) = (float)(fVar3 + (float10)_DAT_1005d2d0);
        fVar3 = FUN_10018f40();
        param_1[0x40] = (int)(float)(fVar3 + (float10)_DAT_1005d2d0);
        fVar3 = FUN_10018f40();
        param_1[0x3e] = (int)(float)(fVar3 + (float10)_DAT_10059a10);
        fVar3 = FUN_10018f40();
        param_1[0x3f] = (int)(float)(fVar3 + (float10)_DAT_10059a10);
        return;
      }
      if (param_1[0x3d] == 1) {
        fVar3 = FUN_10018f40();
        if ((float10)(float)param_1[0x40] <= fVar3) {
          param_1[0x3d] = 2;
          iVar2 = (*DAT_1007f038)(0,1);
          if (iVar2 == 0) {
            (*DAT_1007f038)(0,0x1f);
            this = extraout_ECX_00;
          }
          else {
            (*DAT_1007f038)(0,0x1f);
            this = extraout_ECX;
          }
          CBasePlayerItem::AttemptToMaterialize(this);
          (**(code **)(*param_1 + 0x17c))(3,1,0);
          fVar3 = FUN_10018f40();
          param_1[0x49] = (int)(float)(fVar3 + (float10)_DAT_100599f0);
          fVar3 = FUN_10018f40();
          param_1[0x40] = (int)(float)(fVar3 + (float10)_DAT_100599f0);
          return;
        }
      }
      else {
        piVar1 = (int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4);
        param_1[0x43] = param_1[0x43] + 1;
        *piVar1 = *piVar1 + -1;
        param_1[0x3d] = 1;
      }
    }
  }
  return;
}

