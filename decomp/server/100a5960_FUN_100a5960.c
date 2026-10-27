
int FUN_100a5960(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  int iStack00000004;
  int iStack00000008;
  byte *in_stack_00001014;
  int in_stack_00001018;
  
  FUN_100c9600();
  iVar8 = 0;
  iStack00000004 = 0;
  iVar2 = FUN_100aec40(0,s_trigger_changelevel_10119a84);
  if (iVar2 == 0) {
    return 0;
  }
  do {
    iVar5 = *(int *)(iVar2 + 4);
    if ((iVar5 == 0) && (iVar3 = (*DAT_10121e5c)(), iVar3 != 0)) {
      iVar5 = iVar3 + 0x80;
    }
    if ((*(int *)(iVar5 + 0x208) == 0) ||
       (puVar4 = *(undefined4 **)(*(int *)(iVar5 + 0x208) + 0x7c), puVar4 == (undefined4 *)0x0)) {
      puVar4 = (undefined4 *)(*DAT_10121f04)();
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        FUN_10002f30(puVar4);
        *puVar4 = &PTR_FUN_100f4234;
      }
      puVar4[1] = iVar5;
      if (puVar4 != (undefined4 *)0x0) goto LAB_100a59e6;
    }
    else {
LAB_100a59e6:
      iVar5 = FUN_100a5420((byte *)(puVar4 + 0x5f));
      if (((iVar5 != 0) &&
          (iVar5 = FUN_100a5750(in_stack_00001014,iVar8,(byte *)(puVar4 + 0x57),
                                (char *)(puVar4 + 0x5f),iVar5), iVar5 != 0)) &&
         (iVar8 = iVar8 + 1, in_stack_00001018 <= iVar8)) break;
    }
    iVar2 = FUN_100aec40(iVar2,s_trigger_changelevel_10119a84);
  } while (iVar2 != 0);
  iVar2 = *(int *)(DAT_10122044 + 0x9c);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x28) != 0)) {
    iStack00000004 = iVar8;
    FUN_100b1180(&stack0x0000000c,iVar2);
    iStack00000008 = 0;
    if (0 < iVar8) {
      pbVar7 = in_stack_00001014 + 0x20;
      do {
        iVar2 = 0;
        iVar8 = (*DAT_10121e50)();
        while ((iVar8 != 0 && (iVar5 = (*DAT_10121f20)(), iVar5 != 0))) {
          piVar1 = *(int **)(iVar8 + 0x7c);
          if ((piVar1 != (int *)0x0) &&
             (uVar6 = (**(code **)(*piVar1 + 0x3c))(), (uVar6 & 0x80000000) == 0)) {
            uVar9 = 0;
            if ((uVar6 & 2) != 0) {
              uVar9 = 0x20000000;
            }
            if ((*(int *)(piVar1[1] + 4) != 0) && (uVar6 = FUN_1001a040((int)piVar1), uVar6 == 0)) {
              uVar9 = uVar9 | 0x10000000;
            }
            if (uVar9 != 0) {
              *(int **)(&stack0x00000810 + iVar2 * 4) = piVar1;
              *(uint *)(&stack0x00000010 + iVar2 * 4) = uVar9;
              iVar2 = iVar2 + 1;
              if (0x200 < iVar2) {
                (*DAT_10121efc)();
              }
            }
          }
          iVar8 = *(int *)(iVar8 + 0x208);
        }
        iVar8 = 0;
        if (0 < iVar2) {
          do {
            uVar6 = *(uint *)(&stack0x00000010 + iVar8 * 4);
            if (uVar6 != 0) {
              piVar1 = *(int **)(&stack0x00000810 + iVar8 * 4);
              iVar5 = FUN_100a5880(piVar1,pbVar7);
              if (iVar5 != 0) {
                iVar5 = FUN_100b11a0(&stack0x0000000c,(int)piVar1);
                FUN_100b1280(&stack0x0000000c,iVar5,1 << ((byte)iStack00000008 & 0x1f) | uVar6);
              }
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < iVar2);
        }
        iStack00000008 = iStack00000008 + 1;
        pbVar7 = pbVar7 + 0x50;
        iVar8 = iStack00000004;
      } while (iStack00000008 < iStack00000004);
    }
    FUN_100b1190();
  }
  return iVar8;
}

