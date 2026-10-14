
void __fastcall FUN_10046090(int *param_1)

{
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  if (param_1[0xc2] != 0) {
    FUN_10007fc0((int)param_1,0.0);
  }
  if ((param_1[0x35] != 0) && (param_1[0x36] == 0)) {
    *(int *)(param_1[1] + 0x134) = *DAT_10122044;
    *(undefined4 *)(param_1[1] + 0x138) = 0x3f800000;
    param_1[0x35] = 0;
    param_1[0x34] = *DAT_10122044;
    *(undefined4 *)(param_1[1] + 0x130) = 0;
    if (param_1[0xc2] == 0) {
      *(undefined4 *)(param_1[1] + 0x138) = 0;
    }
  }
  return;
}

