
void __cdecl V_CalcRefdef(float *param_1)

{
                    /* 0x41760  511  V_CalcRefdef */
  if (param_1[0x11] != 0.0) {
    FUN_10040160(param_1);
    return;
  }
  if (param_1[0x13] != 0.0) {
    FUN_10040fb0(param_1);
    return;
  }
  if (param_1[0x12] == 0.0) {
    FUN_10040260(param_1);
  }
  return;
}

