
void __cdecl FUN_100173f0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_4;
  
  if ((DAT_100a4fe0 == 0) && ((DAT_100a3a94 & 5) == 0)) {
    if ((DAT_100a3968 == 0) || (DAT_100a3968 == 1)) {
      DAT_100a3968 = *(int *)(param_1 + 0x1c);
    }
    iVar5 = 9;
    iVar4 = 4;
    if (DAT_100a3968 != 0) {
      iVar4 = *(int *)(DAT_100a3968 + 0x90);
      iVar5 = *(int *)(DAT_100a3968 + 0x94) + -1;
    }
    local_4 = 0;
    do {
      if (-1 < iVar4) {
        param_1 = iVar4 * 0xb;
        do {
          if (-1 < iVar5) {
            piVar3 = &DAT_100a37a8 + param_1 + iVar5;
            do {
              iVar1 = *piVar3;
              if (iVar1 != 0) {
                iVar2 = FUN_10015ed0(&DAT_100a0ea8,iVar1);
                if (iVar2 != 0) {
                  DAT_100a3968 = iVar1;
                  return;
                }
              }
              iVar5 = iVar5 + -1;
              piVar3 = piVar3 + -1;
            } while (-1 < iVar5);
          }
          iVar4 = iVar4 + -1;
          param_1 = param_1 + -0xb;
          iVar5 = 9;
        } while (-1 < iVar4);
      }
      iVar4 = 4;
      local_4 = local_4 + 1;
    } while (local_4 < 2);
    DAT_100a3968 = 0;
  }
  return;
}

