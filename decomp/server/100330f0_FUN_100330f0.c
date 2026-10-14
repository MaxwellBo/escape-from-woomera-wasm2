
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100330f0(int param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float afStack_c [3];
  
  iVar1 = *(int *)(param_1 + 4);
  if ((*(float *)(iVar1 + 0x164) == _DAT_100dd5f8) && (_DAT_100dd5f8 < *(float *)(iVar1 + 0x160))) {
    if (*(int *)(iVar1 + 0x1c8) == 0) {
      fStack_18 = *(float *)(iVar1 + 8);
      fStack_14 = *(float *)(iVar1 + 0xc);
      fStack_10 = *(float *)(iVar1 + 0x10);
    }
    else {
      pfVar2 = FUN_10058750(afStack_c,param_1,param_2,
                            (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(iVar1 + 0x1c8)));
      fStack_18 = *pfVar2;
      fStack_14 = pfVar2[1];
      fStack_10 = pfVar2[2];
    }
    iVar3 = FUN_1001a1f0(0x1010854c,&fStack_18,(undefined4 *)(*(int *)(param_1 + 4) + 0x50),
                         *(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x110);
    if (iVar1 == 6) {
      uVar4 = (*DAT_10121f70)(0,5);
      *(undefined4 *)(*(int *)(iVar3 + 4) + 0x110) = uVar4;
    }
    else {
      *(int *)(*(int *)(iVar3 + 4) + 0x110) = iVar1;
    }
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x164) = 0x3f800000;
    *(float *)(*(int *)(param_1 + 4) + 0x160) =
         *(float *)(*(int *)(param_1 + 4) + 0x160) - _DAT_100dd618;
  }
  return;
}

