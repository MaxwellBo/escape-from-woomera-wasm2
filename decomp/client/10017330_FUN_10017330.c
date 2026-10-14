
void __cdecl FUN_10017330(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  if ((DAT_100a4fe0 == 0) && ((DAT_100a3a94 & 5) == 0)) {
    if ((DAT_100a3968 == 0) || (DAT_100a3968 == 1)) {
      DAT_100a3968 = *(int *)(param_1 + 0x1c);
    }
    iVar5 = 0;
    iVar2 = 0;
    if (DAT_100a3968 != 0) {
      iVar2 = *(int *)(DAT_100a3968 + 0x90);
      iVar5 = *(int *)(DAT_100a3968 + 0x94) + 1;
    }
    param_1 = 0;
    do {
      if (iVar2 < 5) {
        iVar2 = iVar2 * 0xb;
        do {
          if (iVar5 < 10) {
            piVar4 = &DAT_100a37a8 + iVar5 + iVar2;
            do {
              iVar1 = *piVar4;
              if (iVar1 != 0) {
                iVar3 = FUN_10015ed0(&DAT_100a0ea8,iVar1);
                if (iVar3 != 0) {
                  DAT_100a3968 = iVar1;
                  return;
                }
              }
              iVar5 = iVar5 + 1;
              piVar4 = piVar4 + 1;
            } while (iVar5 < 10);
          }
          iVar2 = iVar2 + 0xb;
          iVar5 = 0;
        } while (iVar2 < 0x37);
      }
      iVar2 = 0;
      param_1 = param_1 + 1;
    } while (param_1 < 2);
    DAT_100a3968 = 0;
  }
  return;
}

