
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000f880(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  float fVar4;
  
  fVar3 = FUN_10018f40();
  if ((float10)(float)param_1[0x40] <= fVar3) {
    if (param_1[0x48] != 0) {
      param_1[0x48] = 0;
      iVar1 = (**(code **)(*param_1 + 0x150))();
      if (*(int *)(param_1[0x37] + 0x534 + iVar1 * 4) == 0) {
        (**(code **)(*param_1 + 0x194))();
        return;
      }
      (**(code **)(*param_1 + 0x17c))(4,1,0);
      fVar3 = FUN_10018fb0(*(int *)(param_1[0x37] + 0x308),10.0,0x41700000);
      fVar4 = (float)fVar3;
      fVar3 = FUN_10018f40();
      param_1[0x40] = (int)(float)(fVar3 + (float10)fVar4);
      return;
    }
    fVar3 = FUN_10018fb0(*(int *)(param_1[0x37] + 0x308),0.0,0x3f800000);
    if ((float10)_DAT_10059a00 < fVar3) {
      if ((float10)_DAT_1005d408 < fVar3) {
        uVar2 = 2;
        fVar3 = FUN_10018f40();
        fVar3 = fVar3 + (float10)_DAT_10059a08;
      }
      else {
        uVar2 = 1;
        fVar3 = FUN_10018f40();
        fVar3 = fVar3 + (float10)_DAT_1005dd48;
      }
    }
    else {
      uVar2 = 0;
      fVar3 = FUN_10018f40();
      fVar3 = fVar3 + (float10)_DAT_1005d2c8;
    }
    param_1[0x40] = (int)(float)fVar3;
    (**(code **)(*param_1 + 0x17c))(uVar2,1,0);
  }
  return;
}

