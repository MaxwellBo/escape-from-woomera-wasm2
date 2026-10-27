
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1004f590(int *param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  
  (**(code **)(*param_1 + 0x18c))();
  fVar2 = FUN_100ae400();
  if ((float10)(float)param_1[0x40] <= fVar2) {
    fVar2 = FUN_100ae4b0(*(int *)(param_1[0x37] + 0x308),0.0,0x3f800000);
    if ((float10)_DAT_100e1860 < fVar2) {
      if ((float10)_DAT_100e9610 < fVar2) {
        uVar1 = 2;
        fVar2 = FUN_100ae400();
        fVar2 = fVar2 + (float10)_DAT_100e9608;
      }
      else {
        uVar1 = 1;
        fVar2 = FUN_100ae400();
        fVar2 = fVar2 + (float10)_DAT_100e0ed8;
      }
    }
    else {
      uVar1 = 0;
      fVar2 = FUN_100ae400();
      fVar2 = fVar2 + (float10)_DAT_100e9100;
    }
    param_1[0x40] = (int)(float)fVar2;
    (**(code **)(*param_1 + 0x17c))(uVar1,1,0);
  }
  return;
}

