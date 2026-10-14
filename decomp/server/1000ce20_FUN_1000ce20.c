
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_1000ce20(int param_1,float param_2,float param_3)

{
  int iVar1;
  int *piVar2;
  float *pfVar3;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [16];
  float fStack_30;
  int iStack_10;
  
  if ((param_3 <= _DAT_100ddaf0) && ((float)_DAT_100dd648 <= param_2)) {
    if (*(float *)(param_1 + 0x38c) < *DAT_10122044) {
      iVar1 = *(int *)(param_1 + 4);
      fStack_60 = *(float *)(iVar1 + 0x10) + _DAT_100debf4;
      uStack_64 = *(undefined4 *)(iVar1 + 0xc);
      uStack_68 = *(undefined4 *)(iVar1 + 8);
      piVar2 = (int *)FUN_10019410((uint *)(param_1 + 0x160));
      pfVar3 = (float *)(**(code **)(*piVar2 + 0x104))(auStack_44,&uStack_68);
      iVar1 = piVar2[1];
      fStack_60 = pfVar3[1] - *(float *)(iVar1 + 0xc);
      fStack_5c = pfVar3[2] - *(float *)(iVar1 + 0x10);
      fStack_58 = (*pfVar3 - *(float *)(iVar1 + 8)) + *(float *)(param_1 + 0x2a8);
      fStack_54 = fStack_60 + *(float *)(param_1 + 0x2ac);
      fStack_50 = fStack_5c + *(float *)(param_1 + 0x2b0);
      FUN_100afc60(&stack0xffffff90,&fStack_58,0,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),
                   auStack_40);
      *(float *)(param_1 + 0x38c) = *DAT_10122044 + _DAT_100dd618;
      if ((fStack_30 == (float)_DAT_100dd628) ||
         ((iStack_10 != 0 && (*(int **)(iStack_10 + 0x7c) == piVar2)))) {
        *(undefined4 *)(param_1 + 0x390) = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x390) = 0;
      }
      *(float *)(param_1 + 0x38c) = *DAT_10122044 + (float)_DAT_100dd650;
    }
    return *(undefined4 *)(param_1 + 0x390);
  }
  return 0;
}

