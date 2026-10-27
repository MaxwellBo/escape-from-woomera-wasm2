
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1008c1f0(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  FUN_1008c2c0((int)param_1);
  (**(code **)(*param_1 + 0x178))();
  fVar2 = FUN_100ae400();
  if ((float10)(float)param_1[0x40] <= fVar2) {
    if (*(int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4) != 0) {
      fVar2 = FUN_100ae4b0(*(int *)(param_1[0x37] + 0x308),0.0,0x3f800000);
      if ((fVar2 <= (float10)_DAT_100e1860) || (param_1[0x49] != 0)) {
        iVar1 = (-(uint)(param_1[0x43] != 0) & 0xfffffff8) + 8;
        fVar2 = FUN_100ae400();
        fVar2 = fVar2 + (float10)_DAT_100de9b0;
      }
      else {
        iVar1 = (-(uint)(param_1[0x43] != 0) & 0xfffffff8) + 9;
        fVar2 = FUN_100ae400();
        fVar2 = fVar2 + (float10)_DAT_100de538;
      }
      param_1[0x40] = (int)(float)fVar2;
      (**(code **)(*param_1 + 0x17c))(iVar1,1,0);
      return;
    }
    fVar2 = FUN_100ae400();
    param_1[0x40] = (int)(float)(fVar2 + (float10)_DAT_100dd618);
  }
  return;
}

