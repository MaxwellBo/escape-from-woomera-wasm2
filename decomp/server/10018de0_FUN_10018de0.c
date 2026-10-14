
void FUN_10018de0(int param_1)

{
  int *piVar1;
  
  if ((param_1 != 0) && (piVar1 = *(int **)(param_1 + 0x7c), piVar1 != (int *)0x0)) {
    if ((((int *)piVar1[1])[0x69] & 0x80000000U) != 0) {
      (*DAT_10121efc)(4,s_Dormant_entity__s_is_thinking___10105024,
                      *(int *)(DAT_10122044 + 0x98) + *(int *)piVar1[1]);
    }
    (**(code **)(*piVar1 + 0xdc))();
  }
  return;
}

