
void __fastcall FUN_100307f0(int param_1)

{
  int extraout_ECX;
  int iVar1;
  int extraout_EDX;
  int iVar2;
  int iVar3;
  float *pfVar4;
  
  iVar1 = *(int *)(param_1 + 0x44);
  iVar2 = *(int *)(iVar1 + 0xd4);
  if (4 < iVar2) {
    (*DAT_100a5094)(s_Too_many_attachments_on__s_10079b18,
                    *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xb94));
    FUN_10049aab(0xffffffff);
    iVar1 = extraout_ECX;
    iVar2 = extraout_EDX;
  }
  iVar3 = 0;
  if (0 < iVar2) {
    iVar2 = 0;
    pfVar4 = (float *)(*(int *)(iVar1 + 0xd8) + iVar1 + 0x28);
    do {
      FUN_1002cec0(pfVar4,(float *)((int)pfVar4[-1] * 0x30 + *(int *)(param_1 + 0x40ac)),
                   (float *)(*(int *)(param_1 + 0x30) + 0xb60 + iVar2));
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xc;
      pfVar4 = pfVar4 + 0x16;
    } while (iVar3 < *(int *)(*(int *)(param_1 + 0x44) + 0xd4));
  }
  return;
}

