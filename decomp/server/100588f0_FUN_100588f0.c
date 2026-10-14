
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_100588f0(undefined1 *param_1,int param_2,byte *param_3)

{
  byte bVar1;
  int *piVar2;
  float10 fVar3;
  
  bVar1 = *param_3;
  if ((((char)bVar1 < '0') || ('9' < (char)bVar1)) && (bVar1 != 0x2d)) {
    piVar2 = (int *)FUN_100af060(0,param_3,param_2);
    if (piVar2 != (int *)0x0) {
      fVar3 = (float10)(**(code **)(*piVar2 + 0x20))(param_2);
      return fVar3;
    }
    (*DAT_10121efc)(4,s_Bad_or_missing_calc_ratio_entity_101104cc,param_3);
    return (float10)_DAT_100dd5f8;
  }
  fVar3 = FUN_100c82a6(param_1,param_3);
  return fVar3;
}

