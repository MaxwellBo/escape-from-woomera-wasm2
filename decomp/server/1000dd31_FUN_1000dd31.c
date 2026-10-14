
void __fastcall FUN_1000dd31(undefined4 param_1,byte param_2)

{
  CBaseEntity *pCVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  byte *in_EAX;
  int iVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int *piVar6;
  CBaseEntity *extraout_ECX;
  uint uVar7;
  byte bVar9;
  uint unaff_EBX;
  uint uVar8;
  uint unaff_EBP;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  byte bVar13;
  undefined8 uVar14;
  char acStack_20 [28];
  undefined4 uStack_4;
  
  uVar8 = unaff_EBX | unaff_EBP;
  bVar13 = CARRY1(*in_EAX,param_2);
  *in_EAX = *in_EAX + param_2;
  uStack_4 = 0x1000dd3d;
  uVar14 = func_0x1110de19();
  piVar6 = (int *)((ulonglong)uVar14 >> 0x20);
  bVar9 = (byte)(uVar8 >> 8);
  bVar3 = bVar9 + (byte)extraout_ECX;
  pcVar10 = (char *)(CONCAT22((short)(uVar8 >> 0x10),CONCAT11(bVar3 + bVar13,(char)uVar8)) * 8 +
                    0x4001000);
  *pcVar10 = *pcVar10 + (char)((ulonglong)uVar14 >> 8) +
             (CARRY1(bVar9,(byte)extraout_ECX) || CARRY1(bVar3,bVar13));
  *piVar6 = *piVar6 + CONCAT31((int3)((ulonglong)uVar14 >> 8),(char)uVar14 + '\x18');
  if ((*(uint *)(extraout_ECX + 0x15c) & 0x20000) != 0) {
    iVar5 = (**(code **)(*(int *)extraout_ECX + 0x1e4))();
    if ((iVar5 != 0) && ((*(byte *)(iVar5 + 0xc) & 0x20) != 0)) {
      (**(code **)(*(int *)extraout_ECX + 0x184))(0x13);
      return;
    }
  }
  if ((*(uint *)(extraout_ECX + 0x15c) & 0x100000) != 0) {
    iVar5 = FUN_1009b210((int *)extraout_ECX);
    if (iVar5 != 0) {
      if (*(int *)(extraout_ECX + 0x370) == 0) {
        (**(code **)(*(int *)extraout_ECX + 0x198))
                  (s_BA_KILL_1010339c,0x40800000,0x3f800000,0x3f4ccccd);
      }
      else {
        uVar8 = 0xffffffff;
        pcVar10 = (char *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(extraout_ECX + 0x370));
        do {
          pcVar12 = pcVar10;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar12 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar2 != '\0');
        uVar8 = ~uVar8;
        pcVar10 = pcVar12 + -uVar8;
        pcVar12 = acStack_20;
        for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar12 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar12 = pcVar12 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar10 = &DAT_101033a4;
        do {
          pcVar12 = pcVar10;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar12 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar2 != '\0');
        uVar8 = ~uVar8;
        iVar5 = -1;
        pcVar10 = acStack_20;
        do {
          pcVar11 = pcVar10;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar11 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar2 != '\0');
        pcVar10 = pcVar12 + -uVar8;
        pcVar12 = pcVar11 + -1;
        for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar12 = pcVar12 + 4;
        }
        iVar5 = *(int *)extraout_ECX;
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar12 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar12 = pcVar12 + 1;
        }
        (**(code **)(iVar5 + 0x198))(acStack_20,0x40800000,0x3f800000,0x3f4ccccd);
      }
    }
  }
  iVar5 = *(int *)(extraout_ECX + 0x1d8);
  if (iVar5 != 1) {
    if (iVar5 == 2) {
      uVar8 = *(uint *)(extraout_ECX + 0x15c);
      if ((uVar8 & 0x100000) == 0) {
        if (((uVar8 & 0x10000) != 0) && ((uVar8 & 0x100) != 0)) {
          (**(code **)(*(int *)extraout_ECX + 0x184))(0x11);
          return;
        }
        if (*(int *)(extraout_ECX + 900) == 0) {
          (**(code **)(*(int *)extraout_ECX + 0x184))(0x1d);
          return;
        }
        if ((uVar8 & 0x200) != 0) {
          (**(code **)(*(int *)extraout_ECX + 0x184))(0x12);
          return;
        }
      }
      goto LAB_1000dfce;
    }
    if (iVar5 != 3) {
      FUN_10006c50(extraout_ECX);
      return;
    }
  }
  if ((*(uint *)(extraout_ECX + 0x15c) & 0x300) != 0) {
    (**(code **)(*(int *)extraout_ECX + 0x184))(0x11);
    return;
  }
  bVar4 = FUN_10019450((uint *)(extraout_ECX + 0x160));
  if (CONCAT31(extraout_var,bVar4) == 0) {
    pCVar1 = extraout_ECX + 0x168;
    bVar4 = FUN_10019450((uint *)pCVar1);
    if (CONCAT31(extraout_var_00,bVar4) != 0) {
      piVar6 = (int *)FUN_10019460((uint *)pCVar1);
      iVar5 = (**(code **)(*piVar6 + 0xcc))();
      if (iVar5 != 0) {
        piVar6 = (int *)FUN_10019460((uint *)pCVar1);
        iVar5 = (**(code **)(*piVar6 + 0xb8))();
        if (iVar5 == 0) {
          (**(code **)(*(int *)extraout_ECX + 0x228))(0);
          FUN_10006c50(extraout_ECX);
          return;
        }
        if ((*(uint *)(extraout_ECX + 0x15c) & 0x10000000) != 0) {
          (**(code **)(*(int *)extraout_ECX + 0x184))(0x2d);
          return;
        }
        (**(code **)(*(int *)extraout_ECX + 0x184))(0xf);
        return;
      }
    }
  }
  if ((*(uint *)(extraout_ECX + 0x15c) & 0x10000000) != 0) {
    (**(code **)(*(int *)extraout_ECX + 0x184))(0x2c);
    return;
  }
  FUN_1009bd00((int *)extraout_ECX);
LAB_1000dfce:
  FUN_10006c50(extraout_ECX);
  return;
}

