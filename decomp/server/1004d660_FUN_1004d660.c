
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1004d660(int *param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  undefined4 auStack_c [3];
  
  (**(code **)(*param_1 + 0x178))();
  FUN_10081540((void *)param_1[0x37],auStack_c);
  fVar2 = FUN_100ae400();
  if (((float10)(float)param_1[0x40] <= fVar2) && (param_1[0x43] != 0)) {
    fVar2 = FUN_100ae4b0(*(int *)(param_1[0x37] + 0x308),0.0,0x3f800000);
    if ((float10)_DAT_100e0eb8 < fVar2) {
      if ((float10)_DAT_100ddad8 < fVar2) {
        uVar1 = 1;
        fVar2 = FUN_100ae400();
        fVar2 = fVar2 + (float10)_DAT_100e0ed8;
      }
      else {
        uVar1 = 0;
        fVar2 = FUN_100ae400();
        fVar2 = fVar2 + (float10)_DAT_100e9100;
      }
    }
    else {
      uVar1 = 2;
      fVar2 = FUN_100ae400();
      fVar2 = fVar2 + (float10)_DAT_100e9108;
    }
    param_1[0x40] = (int)(float)fVar2;
    (**(code **)(*param_1 + 0x17c))(uVar1,1,0);
  }
  return;
}

