
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10076810(int *param_1)

{
  FUN_10074380((int)param_1);
  if ((param_1[0x5c] == 2) && (*(int *)(param_1[1] + 0x1e8) != 0)) {
    if ((float)param_1[0x5d] == _DAT_100dd5f8) {
      param_1[0x5d] = param_1[0x15];
    }
    (**(code **)(*param_1 + 8))(0x3dcccccd);
    param_1[0x1d] = (int)CFuncTrain::SoundSetup;
  }
  return;
}

