
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10034db0(int *param_1)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  (**(code **)(*param_1 + 0x178))();
  if ((float)param_1[0x40] <= *DAT_10122044) {
    if (param_1[0x2d] != 0) {
      FUN_10034e70((int)param_1);
    }
    fVar2 = (float10)(*DAT_10121f74)(0,0x3f800000);
    fVar1 = (float10)_DAT_100dd648;
    if (fVar1 < fVar2) {
      fVar4 = FUN_100ae400();
      fVar4 = fVar4 + (float10)_DAT_100ddad4;
    }
    else {
      fVar3 = FUN_100ae4b0(*(int *)(param_1[0x37] + 0x308),10.0,0x41700000);
      fVar4 = FUN_100ae400();
      fVar4 = fVar4 + (float10)(float)fVar3;
    }
    param_1[0x40] = (int)(float)fVar4;
    (**(code **)(*param_1 + 0x17c))(fVar1 < fVar2,1,0);
    param_1[0x50] = 1;
  }
  return;
}

