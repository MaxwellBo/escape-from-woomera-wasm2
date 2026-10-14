
void __fastcall FUN_10076860(int *param_1)

{
  int iVar1;
  
  if (param_1[0x5c] == 2) {
    *(undefined4 *)(param_1[1] + 0x1c8) = *(undefined4 *)(param_1[1] + 0x1d4);
    iVar1 = (**(code **)(*param_1 + 0xd8))();
    if (iVar1 == 0) {
      FUN_10019680((int)param_1);
      FUN_100638f0((int)param_1,DAT_10121dd8,DAT_10121ddc,DAT_10121de0);
      param_1[0x5c] = 0;
      return;
    }
    param_1[0x1d] = (int)CFuncTrain::Next;
    (**(code **)(*param_1 + 8))(0x3dcccccd);
  }
  return;
}

