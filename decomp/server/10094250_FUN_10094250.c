
void __cdecl FUN_10094250(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_10131048 != 0) {
    if (0x20 < param_2) {
      param_2 = 0x20;
    }
    iVar2 = 0;
    if (0 < param_2) {
      do {
        *(char *)(iVar2 + param_1) = (char)iVar2;
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_2);
    }
    iVar2 = param_2 * 4;
    if (0 < iVar2) {
      do {
        iVar3 = (*DAT_10121f70)(0,param_2 + -1);
        iVar4 = (*DAT_10121f70)(0,param_2 + -1);
        uVar1 = *(undefined1 *)(iVar3 + param_1);
        *(undefined1 *)(iVar3 + param_1) = *(undefined1 *)(iVar4 + param_1);
        iVar2 = iVar2 + -1;
        *(undefined1 *)(iVar4 + param_1) = uVar1;
      } while (iVar2 != 0);
    }
  }
  return;
}

