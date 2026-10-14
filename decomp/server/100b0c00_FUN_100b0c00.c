
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_100b0c00(undefined4 *param_1,float param_2,float param_3)

{
  float fVar1;
  int iVar2;
  undefined4 local_c;
  undefined4 local_8;
  float local_4;
  
  local_c = *param_1;
  local_8 = param_1[1];
  local_4 = param_2;
  iVar2 = FUN_100b01e0(&local_c);
  if (iVar2 != -3) {
    return (float10)param_2;
  }
  local_4 = param_3;
  iVar2 = FUN_100b01e0(&local_c);
  if (iVar2 == -3) {
    return (float10)param_3;
  }
  fVar1 = param_3 - param_2;
  if ((float)_DAT_100dd628 < fVar1) {
    do {
      local_4 = fVar1 * (float)_DAT_100dd648 + param_2;
      iVar2 = FUN_100b01e0(&local_c);
      if (iVar2 == -3) {
        param_2 = local_4;
      }
      else {
        param_3 = local_4;
      }
      fVar1 = param_3 - param_2;
    } while ((float)_DAT_100dd628 < fVar1);
  }
  return (float10)local_4;
}

