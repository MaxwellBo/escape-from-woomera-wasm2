
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100089e0(int *param_1)

{
  float10 fVar1;
  
  if (((float)param_1[0x29] == _DAT_10059a18) &&
     (0 < *(int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4))) {
    param_1[0x29] = *DAT_1007f7f8;
    param_1[0x2a] = 0;
    (**(code **)(*param_1 + 0x17c))(2,1,0);
    fVar1 = FUN_10018f40();
    param_1[0x40] = (int)(float)(fVar1 + (float10)_DAT_100599f0);
  }
  return;
}

