
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_10054cd4(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 1) {
    if ((param_3 & 3) == 0) {
      iVar1 = (&DAT_1007e768)[param_4];
    }
    else {
      iVar1 = *(int *)(&DAT_1007e79c + param_4 * 4);
    }
    iVar2 = (int)(param_3 * 0x16d + -0x63db + iVar1 + 1 + ((int)(param_3 - 1) >> 2)) % 7;
    if (param_6 < iVar2) {
      iVar1 = iVar1 + 1 + (param_5 * 7 - iVar2) + param_6;
    }
    else {
      iVar1 = iVar1 + -6 + (param_5 * 7 - iVar2) + param_6;
    }
    if (param_5 == 5) {
      if ((param_3 & 3) == 0) {
        iVar2 = *(int *)(&DAT_1007e76c + param_4 * 4);
      }
      else {
        iVar2 = *(int *)(&DAT_1007e7a0 + param_4 * 4);
      }
      if (iVar2 < iVar1) {
        iVar1 = iVar1 + -7;
      }
    }
  }
  else {
    if ((param_3 & 3) == 0) {
      iVar1 = (&DAT_1007e768)[param_4];
    }
    else {
      iVar1 = *(int *)(&DAT_1007e79c + param_4 * 4);
    }
    iVar1 = iVar1 + param_7;
  }
  if (param_1 == 1) {
    DAT_1007e750 = param_3;
    DAT_1007e758 = ((param_8 * 0x3c + param_9) * 0x3c + param_10) * 1000 + param_11;
    DAT_1007e754 = iVar1;
  }
  else {
    DAT_1007e768 = ((param_8 * 0x3c + param_9) * 0x3c + _DAT_1007e6c0 + param_10) * 1000 + param_11;
    if (DAT_1007e768 < 0) {
      DAT_1007e768 = DAT_1007e768 + 86400000;
      DAT_1007e764 = iVar1 + -1;
    }
    else {
      DAT_1007e764 = iVar1;
      if (86399999 < DAT_1007e768) {
        DAT_1007e768 = DAT_1007e768 + -86400000;
        DAT_1007e764 = iVar1 + 1;
      }
    }
    DAT_1007e760 = param_3;
  }
  return;
}

