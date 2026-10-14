
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000c070(int *param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  
  (**(code **)(*param_1 + 0x18c))();
  fVar2 = FUN_10018f40();
  if ((float10)(float)param_1[0x40] <= fVar2) {
    fVar2 = FUN_10018fb0(*(int *)(param_1[0x37] + 0x308),0.0,0x3f800000);
    if ((float10)_DAT_10059a00 < fVar2) {
      if ((float10)_DAT_1005d408 < fVar2) {
        uVar1 = 2;
        fVar2 = FUN_10018f40();
        fVar2 = fVar2 + (float10)_DAT_1005d400;
      }
      else {
        uVar1 = 1;
        fVar2 = FUN_10018f40();
        fVar2 = fVar2 + (float10)_DAT_1005ac90;
      }
    }
    else {
      uVar1 = 0;
      fVar2 = FUN_10018f40();
      fVar2 = fVar2 + (float10)_DAT_1005d2c8;
    }
    param_1[0x40] = (int)(float)fVar2;
    (**(code **)(*param_1 + 0x17c))(uVar1,1,0);
  }
  return;
}

