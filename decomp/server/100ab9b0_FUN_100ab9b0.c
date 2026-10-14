
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100ab9b0(int *param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  
  fVar2 = FUN_100ae400();
  if ((float10)(float)param_1[0x40] <= fVar2) {
    if (0 < *(int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4)) {
      (**(code **)(*param_1 + 0x17c))(6,1,0);
      fVar2 = FUN_100ae4b0(*(int *)(param_1[0x37] + 0x308),0.0,0x3f800000);
      if ((float10)_DAT_100dd5f0 < fVar2) {
        if ((float10)_DAT_100e1860 < fVar2) {
          uVar1 = 4;
          fVar2 = FUN_100ae400();
          fVar2 = fVar2 + (float10)_DAT_100f59d8;
        }
        else {
          uVar1 = 1;
          fVar2 = FUN_100ae400();
          fVar2 = fVar2 + (float10)_DAT_100e4138;
        }
      }
      else {
        uVar1 = 0;
        fVar2 = FUN_100ae400();
        fVar2 = fVar2 + (float10)_DAT_100de538;
      }
      param_1[0x40] = (int)(float)fVar2;
      (**(code **)(*param_1 + 0x17c))(uVar1,1,0);
      return;
    }
    (**(code **)(*param_1 + 0x194))();
  }
  return;
}

