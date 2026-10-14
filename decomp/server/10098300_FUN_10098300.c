
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10098300(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  float fVar4;
  
  fVar3 = FUN_100ae400();
  if ((float10)(float)param_1[0x40] <= fVar3) {
    if (param_1[0x48] != 0) {
      param_1[0x48] = 0;
      iVar1 = (**(code **)(*param_1 + 0x150))();
      if (*(int *)(param_1[0x37] + 0x534 + iVar1 * 4) == 0) {
        (**(code **)(*param_1 + 0x194))();
        return;
      }
      (**(code **)(*param_1 + 0x17c))(4,1,0);
      fVar3 = FUN_100ae4b0(*(int *)(param_1[0x37] + 0x308),10.0,0x41700000);
      fVar4 = (float)fVar3;
      fVar3 = FUN_100ae400();
      param_1[0x40] = (int)(float)(fVar3 + (float10)fVar4);
      return;
    }
    fVar3 = FUN_100ae4b0(*(int *)(param_1[0x37] + 0x308),0.0,0x3f800000);
    if ((float10)_DAT_100e1860 < fVar3) {
      if ((float10)_DAT_100e9610 < fVar3) {
        uVar2 = 2;
        fVar3 = FUN_100ae400();
        fVar3 = fVar3 + (float10)_DAT_100e08f0;
      }
      else {
        uVar2 = 1;
        fVar3 = FUN_100ae400();
        fVar3 = fVar3 + (float10)_DAT_100f2020;
      }
    }
    else {
      uVar2 = 0;
      fVar3 = FUN_100ae400();
      fVar3 = fVar3 + (float10)_DAT_100e9100;
    }
    param_1[0x40] = (int)(float)fVar3;
    (**(code **)(*param_1 + 0x17c))(uVar2,1,0);
  }
  return;
}

