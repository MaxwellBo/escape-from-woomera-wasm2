
undefined4 __fastcall FUN_1002c5d0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = DAT_100a4dd0 / 2;
  piVar2 = (int *)(param_1 + 0x38);
  iVar1 = 4;
  do {
    if (piVar2[-3] != 0) {
      iVar3 = iVar3 + -5 + (*piVar2 - piVar2[1]);
      (*DAT_100a5000)(piVar2[-3],(char)piVar2[2],*(undefined1 *)((int)piVar2 + 9),
                      *(undefined1 *)((int)piVar2 + 10));
      (*DAT_100a500c)(0,5,iVar3,piVar2 + -2);
    }
    piVar2 = piVar2 + 0xc;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 1;
}

