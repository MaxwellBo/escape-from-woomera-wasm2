
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10047720(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  char acStack_100 [256];
  
  (*DAT_100a5038)(s_EFW_Menu_1007b78c,FUN_10047680);
  _DAT_100bc9f4 = 0;
  piVar5 = &DAT_100bc884;
  do {
    FUN_100499f0(acStack_100,(byte *)s_efw_ShowMenu__i_1007b77c);
    uVar3 = 0xffffffff;
    pcVar6 = acStack_100;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    if (0xfffffffd < uVar3) {
      FUN_10057251();
    }
    iVar2 = *piVar5;
    if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
      if (uVar3 != 0) {
        if ((0x1f < (uint)piVar5[2]) || ((uint)piVar5[2] < uVar3)) {
          FUN_100424b0(piVar5 + -1,'\x01');
          goto LAB_100477de;
        }
        goto LAB_100477e3;
      }
      FUN_100424b0(piVar5 + -1,'\x01');
    }
    else if (uVar3 == 0) {
      *(char *)(iVar2 + -1) = cVar1 + -1;
      *piVar5 = 0;
      piVar5[1] = 0;
      piVar5[2] = 0;
    }
    else {
LAB_100477de:
      FUN_10042ff0(piVar5 + -1, uVar3);
LAB_100477e3:
      pcVar6 = acStack_100;
      pcVar7 = (char *)*piVar5;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      piVar5[1] = uVar3;
      *(undefined1 *)(*piVar5 + uVar3) = 0;
    }
    piVar5 = piVar5 + 4;
    if (0x100bc9f3 < (int)piVar5) {
      return;
    }
  } while( true );
}

