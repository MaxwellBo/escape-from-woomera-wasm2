
float10 __cdecl FUN_100afe80(float param_1,float param_2,float param_3)

{
  if (param_3 < param_1 - param_2) {
    return (float10)param_2 + (float10)param_3;
  }
  if (param_1 - param_2 < -param_3) {
    return (float10)param_2 - (float10)param_3;
  }
  return (float10)param_1;
}

