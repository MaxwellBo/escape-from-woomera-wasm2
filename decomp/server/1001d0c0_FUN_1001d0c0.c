
void FUN_1001d0c0(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (DAT_10121ce4 == 0) {
    FUN_1001d010(param_1);
    DAT_10121ce4 = 1;
  }
  uVar1 = *(uint *)(param_3 + 0x48) & 0xf;
  if (uVar1 != 0) {
    if (uVar1 != 1) {
      (*DAT_10122020)(param_1,DAT_10105278);
      (*DAT_10122020)(param_1,DAT_1010529c);
      (*DAT_10122020)(param_1,DAT_101052c0);
    }
    (*DAT_10122020)(param_1,DAT_101052e4);
    (*DAT_10122020)(param_1,DAT_10105308);
    (*DAT_10122020)(param_1,DAT_1010532c);
  }
  if ((uVar1 != 2) && (uVar1 != 1)) {
    (*DAT_10122020)(param_1,DAT_10105350);
    (*DAT_10122020)(param_1,DAT_10105374);
  }
  lVar2 = __ftol();
  lVar3 = __ftol();
  if ((int)lVar2 == (int)lVar3) {
    (*DAT_10122020)(param_1,DAT_10105398);
  }
  return;
}

