
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_100333d0(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 300) == -1) {
    return *(int *)(DAT_100a5178 + 0x898 + DAT_100b6730 * 4) == -1;
  }
  if (((*(uint *)(DAT_100a5178 + 0x898) & *(uint *)(&DAT_1007a16c + *(int *)(param_1 + 300) * 4)) !=
       0) || ((*(uint *)(DAT_100a5178 + 0x898 + DAT_100b6730 * 4) &
              *(uint *)(&DAT_1007a16c + *(int *)(param_1 + 300) * 4)) != 0)) {
    return true;
  }
  fVar1 = (float10)(*DAT_100a502c)(s_hud_classautokill_10078640);
  if (fVar1 != (float10)_DAT_10059a18) {
    if (*(int *)(DAT_100a5178 + 0x8bc) != 0) {
      if (*(int *)(param_1 + 300) == 10) {
        return true;
      }
      if (*(int *)(DAT_100a5178 + 0x8bc) != 0) {
        return false;
      }
    }
    if (*(int *)(param_1 + 300) == DAT_100b6620) {
      return true;
    }
  }
  return false;
}

