
void __fastcall FUN_1003cb40(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char acStack_104 [4];
  undefined1 auStack_100 [124];
  char acStack_84 [132];
  
  *(undefined4 *)(param_1 + 0x220) = DAT_100b6724;
  *(undefined4 *)(param_1 + 0x224) = DAT_100b672c;
  *(undefined4 *)(param_1 + 0x228) = DAT_100b6728;
  if (*(int *)(param_1 + 0x888) != 0) {
    iVar2 = (*DAT_100a5150)();
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x220);
      pcVar8 = s__Spec_Help_1007a708;
    }
    else {
      pcVar8 = s__Spec_Only_Help_1007a714;
      iVar2 = DAT_100a412c;
    }
    FUN_100499f0(auStack_100,(byte *)pcVar8);
    if ((iVar2 != 0) && (iVar2 = (*DAT_100a5150)(), iVar2 != 2)) {
      (**(code **)(**(int **)(param_1 + 0x888) + 0x24))(1);
      iVar2 = *(int *)(param_1 + 0x224);
      if ((iVar2 < 1) ||
         ((iVar3 = (*DAT_100a5080)(), iVar3 < iVar2 || (*(int *)(&DAT_100b59f0 + iVar2 * 0x14) == 0)
          ))) {
        FUN_100499f0(&stack0xfffffe7c,(byte *)s__Spec_Mode_d_1007a6e4);
      }
      else {
        FUN_100499f0(&stack0xfffffe7c,(byte *)s__Spec_Mode_d____s_1007a6f4);
      }
      if (*(int *)(param_1 + 0x220) == 4) {
        FUN_100499f0(acStack_84,(byte *)s__Directed__s_1007a6d4);
        uVar5 = 0xffffffff;
        pcVar8 = acStack_84;
        do {
          pcVar7 = pcVar8;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar7 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar7;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        pcVar8 = pcVar7 + -uVar5;
        pcVar7 = &stack0xfffffe7c;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar7 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      iVar2 = **(int **)(param_1 + 0x88c);
      puVar4 = FUN_10030c20(&stack0xfffffe7c);
      (**(code **)(iVar2 + 0x200))(*(undefined4 *)(param_1 + 0x88c),puVar4);
      iVar2 = **(int **)(param_1 + 0x890);
      puVar4 = FUN_10030c20(acStack_104);
      (**(code **)(iVar2 + 0x200))(*(undefined4 *)(param_1 + 0x890),puVar4);
      return;
    }
    (**(code **)(**(int **)(param_1 + 0x888) + 0x24))(0);
  }
  return;
}

