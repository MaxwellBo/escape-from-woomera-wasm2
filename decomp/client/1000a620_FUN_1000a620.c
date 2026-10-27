
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000a620(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  if ((param_1[0x46] != 0) && (*(float *)(param_1[0x37] + 700) <= (float)_DAT_1005d2a8)) {
    param_1[0x46] = 0;
    param_1[0x43] = param_1[0x43] + 10;
  }
  uVar1 = *(uint *)(*(int *)(param_1[0x37] + 4) + 0x180);
  if (((uVar1 & 0x800) == 0) || ((float)_DAT_1005d2a8 < (float)param_1[0x3f])) {
    if (((uVar1 & 1) == 0) || ((float)_DAT_1005d2a8 < (float)param_1[0x3e])) {
      if ((((uVar1 & 0x2000) == 0) || (*(int *)(&DAT_1007f294 + param_1[0x39] * 0x2c) == -1)) ||
         (param_1[0x46] != 0)) {
        if ((uVar1 & 0x801) == 0) {
          param_1[0x3b] = 0;
          if (((param_1[0x43] == 0) && (((&DAT_1007f29c)[param_1[0x39] * 0x2c] & 2) == 0)) &&
             ((float)param_1[0x3e] < (float)_DAT_1005d2a8)) {
            (**(code **)(*param_1 + 0x18c))();
            return;
          }
          goto LAB_1000a6f6;
        }
      }
      else {
        (**(code **)(*param_1 + 0x18c))();
      }
    }
    else {
      if (((param_1[0x43] == 0) && (*(int *)(&DAT_1007f280 + param_1[0x39] * 0x2c) != 0)) ||
         ((*(int *)(&DAT_1007f294 + param_1[0x39] * 0x2c) == -1 &&
          (iVar2 = (**(code **)(*param_1 + 0x150))(),
          *(int *)(param_1[0x37] + 0x534 + iVar2 * 4) == 0)))) {
        param_1[0x3b] = 1;
      }
      (**(code **)(*param_1 + 0x184))();
    }
  }
  else {
    if ((*(int *)(&DAT_1007f288 + param_1[0x39] * 0x2c) != 0) &&
       (iVar2 = (**(code **)(*param_1 + 0x154))(), *(int *)(param_1[0x37] + 0x534 + iVar2 * 4) == 0)
       ) {
      param_1[0x3b] = 1;
    }
    (**(code **)(*param_1 + 0x188))();
    *(uint *)(*(int *)(param_1[0x37] + 4) + 0x180) =
         *(uint *)(*(int *)(param_1[0x37] + 4) + 0x180) & 0xfffff7ff;
  }
  iVar2 = (**(code **)(*param_1 + 0x198))();
  if (iVar2 == 0) {
    return;
  }
LAB_1000a6f6:
  (**(code **)(*param_1 + 400))();
  return;
}

