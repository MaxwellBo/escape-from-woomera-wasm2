
void __fastcall FUN_100b7420(int *param_1)

{
  float10 fVar1;
  
  FUN_10007fc0((int)param_1,0.0);
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  FUN_10008240(param_1);
  if ((param_1[0x37] == 0x1e) && (param_1[0x35] != 0)) {
    FUN_100b6750(param_1,1);
    fVar1 = (float10)(*DAT_10121f74)(0x3f19999a,0x3fb33333);
    *(float *)(param_1[1] + 0x138) = (float)fVar1;
  }
  return;
}

