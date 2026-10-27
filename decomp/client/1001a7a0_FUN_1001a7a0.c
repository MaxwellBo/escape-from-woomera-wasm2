
void __cdecl FUN_1001a7a0(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = 0.0;
  local_8 = 0.0;
  local_4 = 28.0;
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = FUN_1001a760(iVar1);
  if (iVar3 != 0) {
    bVar2 = FUN_1001a780(iVar1);
    if (CONCAT31(extraout_var,bVar2) == 0) {
      if (*(int *)(param_1 + 0x2c) == 1) {
        local_4 = 12.0;
      }
    }
    else {
      (**(code **)(DAT_100a5140 + 0x18))(&local_c);
    }
  }
  *param_2 = local_c + *param_3;
  param_2[1] = local_8 + param_3[1];
  param_2[2] = local_4 + param_3[2];
  return;
}

