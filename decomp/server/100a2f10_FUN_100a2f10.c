
int __thiscall FUN_100a2f10(void *this,int param_1,int param_2,int param_3,undefined4 param_4)

{
  if (param_1 == 4) {
    if (param_3 == 1) {
      param_1 = 1;
      goto LAB_100a2f65;
    }
    if (param_3 == 0) {
      param_1 = 2;
      goto LAB_100a2f65;
    }
  }
  else if (param_1 == 5) {
    if (param_3 == 1) {
      param_1 = 2;
      goto LAB_100a2f65;
    }
    if (param_3 == 0) {
      param_1 = 1;
      goto LAB_100a2f65;
    }
  }
  else if (param_1 != 3) goto LAB_100a2f65;
  param_1 = (param_2 != 0) + 1;
LAB_100a2f65:
  if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 4) != 0) {
    if (param_1 == 1) {
      (*DAT_10121efc)(1,s__s_YES_1011978c,param_4);
      return 1;
    }
    if (param_1 == 2) {
      (*DAT_10121efc)(1,s__s_NO_10119784,param_4);
    }
  }
  return param_1;
}

