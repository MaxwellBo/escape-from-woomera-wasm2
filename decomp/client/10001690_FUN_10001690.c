
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10001690(int *param_1)

{
  float10 fVar1;
  float fVar2;
  undefined4 auStack_c [3];
  
  FUN_10009030(auStack_c);
  (**(code **)(*param_1 + 0x178))();
  fVar1 = FUN_10018f40();
  if ((float10)(float)param_1[0x40] < fVar1) {
    fVar1 = FUN_10018fb0(*(int *)(param_1[0x37] + 0x308),0.0,0x3f800000);
    if (fVar1 <= (float10)_DAT_10059a00) {
      if (param_1[0x43] == 0) {
        (**(code **)(*param_1 + 0x17c))(1,1,0);
      }
      else {
        (**(code **)(*param_1 + 0x17c))(0,1,0);
      }
      fVar1 = FUN_10018fb0(*(int *)(param_1[0x37] + 0x308),10.0,0x41700000);
      fVar2 = (float)fVar1;
      fVar1 = FUN_10018f40();
      param_1[0x40] = (int)(float)(fVar1 + (float10)fVar2);
      return;
    }
    if (param_1[0x43] != 0) {
      (**(code **)(*param_1 + 0x17c))(2,1,0);
      fVar1 = FUN_10018f40();
      param_1[0x40] = (int)(float)(fVar1 + (float10)_DAT_10059a28);
      return;
    }
    (**(code **)(*param_1 + 0x17c))(3,1,0);
    fVar1 = FUN_10018f40();
    param_1[0x40] = (int)(float)(fVar1 + (float10)_DAT_10059a20);
  }
  return;
}

