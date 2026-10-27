
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10025550(int *param_1)

{
  float10 fVar1;
  float fVar2;
  undefined4 auStack_c [3];
  
  FUN_10081540((void *)param_1[0x37],auStack_c);
  (**(code **)(*param_1 + 0x178))();
  fVar1 = FUN_100ae400();
  if ((float10)(float)param_1[0x40] < fVar1) {
    fVar1 = FUN_100ae4b0(*(int *)(param_1[0x37] + 0x308),0.0,0x3f800000);
    if (fVar1 <= (float10)_DAT_100e1860) {
      if (param_1[0x43] == 0) {
        (**(code **)(*param_1 + 0x17c))(1,1,0);
      }
      else {
        (**(code **)(*param_1 + 0x17c))(0,1,0);
      }
      fVar1 = FUN_100ae4b0(*(int *)(param_1[0x37] + 0x308),10.0,0x41700000);
      fVar2 = (float)fVar1;
      fVar1 = FUN_100ae400();
      param_1[0x40] = (int)(float)(fVar1 + (float10)fVar2);
      return;
    }
    if (param_1[0x43] != 0) {
      (**(code **)(*param_1 + 0x17c))(2,1,0);
      fVar1 = FUN_100ae400();
      param_1[0x40] = (int)(float)(fVar1 + (float10)_DAT_100de538);
      return;
    }
    (**(code **)(*param_1 + 0x17c))(3,1,0);
    fVar1 = FUN_100ae400();
    param_1[0x40] = (int)(float)(fVar1 + (float10)_DAT_100e1868);
  }
  return;
}

