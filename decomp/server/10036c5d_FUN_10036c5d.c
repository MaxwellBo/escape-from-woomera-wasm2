
void __fastcall FUN_10036c5d(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  int *in_EAX;
  undefined **ppuVar2;
  int iVar3;
  undefined1 *unaff_EDI;
  undefined4 unaff_retaddr;
  undefined1 *puVar4;
  int iStack_8;
  int iStack_4;
  
  uVar1 = in((short)(param_2 + 1));
  *unaff_EDI = uVar1;
  iStack_4 = param_2 + 1 + *in_EAX;
  uVar1 = in((short)iStack_4);
  unaff_EDI[1] = uVar1;
  puVar4 = unaff_EDI + 3;
  uVar1 = in((short)iStack_4 + (short)*in_EAX + 1);
  unaff_EDI[2] = uVar1;
  iVar3 = 0;
  iStack_8 = 0;
  ppuVar2 = FUN_10036bf0(unaff_retaddr,&iStack_8);
  if (0 < iStack_8) {
    do {
      (*DAT_10121e0c)(*ppuVar2,puVar4);
      iVar3 = iVar3 + 1;
      ppuVar2 = ppuVar2 + 1;
    } while (iVar3 < iStack_8);
  }
  return;
}

