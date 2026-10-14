
void __fastcall FUN_1003f400(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int unaff_EBX;
  undefined4 unaff_EBP;
  short *psVar10;
  int *piVar11;
  undefined4 unaff_EDI;
  char *pcVar12;
  uint *puVar13;
  char *pcVar14;
  longlong lVar15;
  char *pcVar16;
  int iStack_bb4;
  int iStack_bac;
  undefined1 auStack_ba4 [12];
  uint auStack_b98 [64];
  uint auStack_a98 [66];
  char acStack_990 [1084];
  undefined1 uStack_554;
  char acStack_550 [1340];
  undefined1 uStack_14;
  
  lVar15 = __ftol();
  uVar3 = (undefined4)lVar15;
  iStack_bac = 1;
  iStack_bb4 = 0x900;
  piVar7 = param_1 + 0x40;
  do {
    piVar11 = (int *)*piVar7;
    if (piVar11 != (int *)0x0) {
      if (*(int *)(DAT_100a5178 + 0x8b4) < iStack_bac) {
        (**(code **)(*piVar11 + 0x24))(0);
      }
      else {
        (**(code **)(*piVar11 + 0x264))(iStack_bb4 + DAT_100a5178);
        FUN_100499f0(auStack_ba4,&DAT_100789f4);
        FUN_100331f0((void *)*piVar7,(char)auStack_ba4._0_4_);
        (**(code **)(*(int *)*piVar7 + 0x24))(1);
        puVar2 = *(undefined4 **)*piVar7;
        uVar5 = unaff_EBP;
        lVar15 = __ftol();
        (*(code *)*puVar2)((int)lVar15,uVar5);
        lVar15 = __ftol();
        unaff_EDI = (undefined4)lVar15;
        if (param_1[0x48] == 0) {
          (**(code **)(*param_1 + 0x20c))(unaff_EBX);
        }
        uVar8 = 0xffffffff;
        pcVar16 = &DAT_100784e8;
        do {
          pcVar14 = pcVar16;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar14 = pcVar16 + 1;
          cVar1 = *pcVar16;
          pcVar16 = pcVar14;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        psVar10 = &DAT_100b6026;
        pcVar16 = pcVar14 + -uVar8;
        pcVar14 = acStack_990;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar14 = pcVar14 + 4;
        }
        iVar4 = 0;
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar14 = *pcVar16;
          pcVar16 = pcVar16 + 1;
          pcVar14 = pcVar14 + 1;
        }
        piVar11 = &DAT_100b5a04;
        do {
          if (((*piVar11 != 0) && (*(char *)((int)piVar11 + 6) == '\0')) && (*psVar10 == unaff_EBX))
          {
            iVar4 = iVar4 + 1;
            if (1 < iVar4) {
              uVar8 = 0xffffffff;
              pcVar16 = acStack_990;
              do {
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                cVar1 = *pcVar16;
                pcVar16 = pcVar16 + 1;
              } while (cVar1 != '\0');
              _strncat(acStack_990,&DAT_1007a950,0x43d - (~uVar8 - 1));
            }
            uVar8 = 0xffffffff;
            pcVar16 = acStack_990;
            do {
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              cVar1 = *pcVar16;
              pcVar16 = pcVar16 + 1;
            } while (cVar1 != '\0');
            _strncat(acStack_990,(char *)*piVar11,0x43d - (~uVar8 - 1));
            uStack_554 = 0;
            iStack_bb4 = iVar4;
          }
          psVar10 = psVar10 + 0xc;
          piVar11 = piVar11 + 5;
        } while ((int)psVar10 < 0x100b660e);
        if (iVar4 < 1) {
          (**(code **)(*(int *)piVar7[-6] + 0x1fc))(s_);
        }
        else {
          if (iVar4 == 1) {
            pcVar16 = s__s___d_Player___d_points__1007a934;
          }
          else {
            pcVar16 = s__s___d_Players___d_points__1007a918;
          }
          FUN_100499f0(acStack_550,(byte *)pcVar16);
          uVar8 = 0xffffffff;
          pcVar16 = acStack_550;
          do {
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            cVar1 = *pcVar16;
            pcVar16 = pcVar16 + 1;
          } while (cVar1 != '\0');
          _strncat(acStack_550,acStack_990,0x53d - (~uVar8 - 1));
          uStack_14 = 0;
          (**(code **)(*(int *)piVar7[-6] + 0x1fc))(acStack_550);
        }
      }
    }
    iStack_bb4 = iStack_bb4 + 0x40;
    iStack_bac = iStack_bac + 1;
    piVar7 = piVar7 + 1;
  } while (iStack_bb4 < 0x9c1);
  puVar2 = *(undefined4 **)param_1[0x44];
  lVar15 = __ftol();
  (*(code *)*puVar2)((int)lVar15);
  lVar15 = __ftol();
  uVar5 = (undefined4)lVar15;
  iVar4 = (**(code **)(*(int *)param_1[0x47] + 0x260))();
  if (iVar4 == 0) {
    puVar2 = *(undefined4 **)param_1[0x47];
    lVar15 = __ftol();
    (*(code *)*puVar2)((int)lVar15,uVar5);
    (**(code **)(*(int *)param_1[0x47] + 0x24))(1);
    lVar15 = __ftol();
    uVar5 = (undefined4)lVar15;
  }
  else {
    (**(code **)(*(int *)param_1[0x47] + 0x24))(0);
  }
  if (DAT_100b6730 == 0) {
    (**(code **)(*(int *)param_1[0x46] + 0x24))(0);
  }
  else {
    puVar2 = *(undefined4 **)param_1[0x46];
    lVar15 = __ftol();
    (*(code *)*puVar2)((int)lVar15,uVar5);
    (**(code **)(*(int *)param_1[0x46] + 0x24))(1);
  }
  if ((char)param_1[0x45] == '\0') {
    pcVar16 = (char *)(*DAT_100a5118)();
    if ((pcVar16 != (char *)0x0) && (*pcVar16 != '\0')) {
      uVar8 = 0xffffffff;
      pcVar14 = pcVar16;
      do {
        pcVar12 = pcVar14;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar12 = pcVar14 + 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar12;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      puVar6 = (uint *)(pcVar12 + -uVar8);
      puVar13 = auStack_b98;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar13 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar13 = puVar13 + 1;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(char *)puVar13 = (char)*puVar6;
        puVar6 = (uint *)((int)puVar6 + 1);
        puVar13 = (uint *)((int)puVar13 + 1);
      }
      puVar6 = FUN_1004b990(auStack_b98,'/');
      if (puVar6 == (uint *)0x0) {
        puVar6 = FUN_1004b990(auStack_b98,'\\');
      }
      uVar8 = 0xffffffff;
      pcVar14 = (char *)((int)puVar6 + 1);
      do {
        pcVar12 = pcVar14;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar12 = pcVar14 + 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar12;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      puVar6 = (uint *)(pcVar12 + -uVar8);
      puVar13 = auStack_a98;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar13 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar13 = puVar13 + 1;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(char *)puVar13 = (char)*puVar6;
        puVar6 = (uint *)((int)puVar6 + 1);
        puVar13 = (uint *)((int)puVar13 + 1);
      }
      puVar6 = FUN_1004b990(auStack_a98,'.');
      *(undefined1 *)puVar6 = 0;
      (**(code **)(*(int *)param_1[0x37] + 0x200))((int *)param_1[0x37],auStack_a98);
      uVar8 = 0xffffffff;
      *(undefined1 *)puVar6 = 0x2e;
      do {
        pcVar14 = pcVar16;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar14 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar14;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      puVar6 = (uint *)(pcVar14 + -uVar8);
      puVar13 = auStack_b98;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar13 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar13 = puVar13 + 1;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(char *)puVar13 = (char)*puVar6;
        puVar6 = (uint *)((int)puVar6 + 1);
        puVar13 = (uint *)((int)puVar13 + 1);
      }
      puVar6 = FUN_1004b990(auStack_b98,'.');
      *(undefined1 *)puVar6 = 0;
      uVar8 = 0xffffffff;
      pcVar16 = &DAT_1007a878;
      do {
        pcVar14 = pcVar16;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar14 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar14;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar4 = -1;
      puVar6 = auStack_b98;
      do {
        puVar13 = puVar6;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        puVar13 = (uint *)((int)puVar6 + 1);
        uVar9 = *puVar6;
        puVar6 = puVar13;
      } while ((char)uVar9 != '\0');
      pcVar16 = pcVar14 + -uVar8;
      pcVar14 = (char *)((int)puVar13 + -1);
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar14 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar14 = pcVar14 + 1;
      }
      iVar4 = (*DAT_100a512c)(auStack_b98,5,0);
      if (iVar4 != 0) {
        (**(code **)(*(int *)param_1[0x38] + 0x1fc))(iVar4);
        piVar7 = (int *)(**(code **)(*(int *)param_1[0x38] + 0x208))();
        (**(code **)(*piVar7 + 100))(&stack0xfffff43c,&stack0xfffff440);
        (**(code **)(*(int *)param_1[0x38] + 8))(uVar3,unaff_EDI);
      }
      *(undefined1 *)(param_1 + 0x45) = 1;
    }
  }
  (**(code **)(*(int *)param_1[0x35] + 0x220))();
  return;
}

