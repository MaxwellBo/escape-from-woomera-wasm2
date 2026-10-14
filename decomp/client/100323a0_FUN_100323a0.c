
void __fastcall FUN_100323a0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  int iStack_104;
  
  if (DAT_100b6730 != 0) {
    lVar8 = __ftol();
    uStack_108 = (undefined4)lVar8;
    iVar6 = 0;
    iVar4 = iStack_104;
    do {
      iStack_104 = iVar4;
      bVar7 = *(int *)(DAT_100a5178 + 0x898 + DAT_100b6730 * 4) == -1;
      uStack_10c = CONCAT13(bVar7,(undefined3)uStack_10c);
      if (bVar7) {
        if (iVar6 == 0) {
          (**(code **)(*(int *)param_1[0x4d] + 0x24))(1);
          (**(code **)(*param_1 + 0x20c))(0);
          __ftol();
        }
        else {
          (**(code **)(*(int *)param_1[iVar6 + 0x4d] + 0x24))(0);
        }
      }
      else {
        iVar4 = (**(code **)(*(int *)param_1[iVar6 + 0x4d] + 0x260))();
        if ((iVar4 == 0) && (iVar6 != 0)) {
          (**(code **)(*(int *)param_1[iVar6 + 0x4d] + 0x24))(1);
          puVar2 = *(undefined4 **)param_1[iVar6 + 0x4d];
          uVar9 = uStack_10c;
          lVar8 = __ftol();
          (*(code *)*puVar2)((int)lVar8,uVar9);
          __ftol();
          if (param_1[0x35b] == 0) {
            (**(code **)(*param_1 + 0x20c))(iVar6);
          }
        }
        else {
          (**(code **)(*(int *)param_1[iVar6 + 0x4d] + 0x24))(0);
        }
      }
      puVar3 = &DAT_100b5a0a;
      do {
        puVar3 = puVar3 + 0x14;
      } while ((int)puVar3 < 0x100b5ef6);
      FUN_100499f0((undefined1 *)&uStack_108,(byte *)(param_1 + 0x35c));
      (**(code **)(*(int *)param_1[iVar6 + 0x41] + 0x200))((int *)param_1[iVar6 + 0x41],&uStack_108)
      ;
      iVar4 = DAT_100b6730 % DAT_1007a098;
      (**(code **)(*(int *)param_1[iVar6 + 0x41] + 0x120))
                ((&DAT_1007a09c)[iVar4 * 3],(&DAT_1007a0a0)[iVar4 * 3],(&DAT_1007a0a4)[iVar4 * 3],0)
      ;
      iStack_104 = 0x40;
      piVar5 = param_1 + iVar6 + 0x5b;
      do {
        if ((int *)*piVar5 != (int *)0x0) {
          (**(code **)(*(int *)*piVar5 + 0x24))(0);
        }
        if ((int *)param_1[iVar6 + DAT_100b6730 * 0xc + 0x4f] == (int *)0x0) {
          piVar1 = (int *)param_1[iVar6 + 0x5b];
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 0x24))(1);
          }
        }
        else {
          (**(code **)(*(int *)param_1[iVar6 + DAT_100b6730 * 0xc + 0x4f] + 0x24))(1);
        }
        piVar5 = piVar5 + 0xc;
        iStack_104 = iStack_104 + -1;
      } while (iStack_104 != 0);
      iVar6 = iVar6 + 1;
      iVar4 = 0;
    } while (iVar6 < 0xb);
    if (DAT_100b6620 != 0) {
      puVar2 = *(undefined4 **)param_1[0x59];
      uVar9 = uStack_108;
      lVar8 = __ftol();
      (*(code *)*puVar2)((int)lVar8,uVar9);
      (**(code **)(*(int *)param_1[0x59] + 0x24))(1);
      return;
    }
    (**(code **)(*(int *)param_1[0x59] + 0x24))(0);
  }
  return;
}

