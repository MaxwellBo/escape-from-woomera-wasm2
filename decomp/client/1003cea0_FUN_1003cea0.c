
Panel * __thiscall FUN_1003cea0(void *this,int param_1)

{
  char cVar1;
  char *pcVar2;
  uint *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  Panel *pPVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined *puVar10;
  uint *_Source;
  char *pcVar11;
  uint *puVar12;
  char *pcVar13;
  uint *puVar14;
  char local_120 [31];
  undefined1 local_101;
  uint local_100 [64];
  
  puVar10 = (undefined *)0x0;
  if (param_1 == 3) {
    pcVar2 = (char *)((int)this + 0xab0);
    if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
      uVar7 = 0xffffffff;
      pcVar2 = s_Half_Life_1007a888;
      do {
        pcVar11 = pcVar2;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar11 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar11;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pcVar2 = pcVar11 + -uVar7;
      pcVar11 = local_120;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar11 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar11 = pcVar11 + 1;
      }
      local_101 = 0;
      puVar4 = (undefined *)((int)this + 0x240);
    }
    else {
      _strncpy(local_120,pcVar2,0x20);
      local_101 = 0;
      puVar4 = (undefined *)((int)this + 0x240);
    }
  }
  else if (param_1 == 1) {
    _Source = (uint *)((int)this + 0xa60);
    if ((_Source == (uint *)0x0) || (*(char *)_Source == '\0')) {
      pcVar2 = (char *)(*DAT_100a5118)();
      if (pcVar2 == (char *)0x0) {
        return (Panel *)0x0;
      }
      uVar7 = 0xffffffff;
      pcVar11 = pcVar2;
      do {
        pcVar13 = pcVar11;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar13 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      puVar3 = (uint *)(pcVar13 + -uVar7);
      puVar14 = local_100;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar14 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar14 = puVar14 + 1;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(char *)puVar14 = (char)*puVar3;
        puVar3 = (uint *)((int)puVar3 + 1);
        puVar14 = (uint *)((int)puVar14 + 1);
      }
      puVar3 = FUN_1004b990(local_100,'.');
      *(undefined1 *)puVar3 = 0;
      uVar7 = 0xffffffff;
      pcVar11 = &DAT_1007a878;
      do {
        pcVar13 = pcVar11;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar13 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar13;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar9 = -1;
      puVar3 = local_100;
      do {
        puVar14 = puVar3;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        puVar14 = (uint *)((int)puVar3 + 1);
        uVar8 = *puVar3;
        puVar3 = puVar14;
      } while ((char)uVar8 != '\0');
      pcVar11 = pcVar13 + -uVar7;
      pcVar13 = (char *)((int)puVar14 + -1);
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar13 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar7 = 0xffffffff;
      do {
        pcVar11 = pcVar2;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar11 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar11;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      puVar3 = (uint *)(pcVar11 + -uVar7);
      puVar14 = _Source;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar14 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar14 = puVar14 + 1;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(char *)puVar14 = (char)*puVar3;
        puVar3 = (uint *)((int)puVar3 + 1);
        puVar14 = (uint *)((int)puVar14 + 1);
      }
      puVar3 = FUN_1004b990(_Source,'.');
      if (puVar3 != (uint *)0x0) {
        *(undefined1 *)puVar3 = 0;
      }
      puVar3 = FUN_1004b990(_Source,'/');
      if (puVar3 != (uint *)0x0) {
        uVar7 = 0xffffffff;
        puVar14 = puVar3;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          uVar8 = *puVar14;
          puVar14 = (uint *)((int)puVar14 + 1);
        } while ((char)uVar8 != '\0');
        FUN_1004a710(_Source,(undefined4 *)((int)puVar3 + 1),~uVar7);
      }
    }
    else {
      uVar7 = 0xffffffff;
      pcVar2 = &DAT_1007a880;
      do {
        pcVar11 = pcVar2;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar11 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar11;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      puVar3 = (uint *)(pcVar11 + -uVar7);
      puVar14 = local_100;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar14 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar14 = puVar14 + 1;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(char *)puVar14 = (char)*puVar3;
        puVar3 = (uint *)((int)puVar3 + 1);
        puVar14 = (uint *)((int)puVar14 + 1);
      }
      uVar7 = 0xffffffff;
      puVar3 = _Source;
      do {
        puVar14 = puVar3;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        puVar14 = (uint *)((int)puVar3 + 1);
        uVar8 = *puVar3;
        puVar3 = puVar14;
      } while ((char)uVar8 != '\0');
      uVar7 = ~uVar7;
      iVar9 = -1;
      puVar3 = local_100;
      do {
        puVar12 = puVar3;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        puVar12 = (uint *)((int)puVar3 + 1);
        uVar8 = *puVar3;
        puVar3 = puVar12;
      } while ((char)uVar8 != '\0');
      pcVar2 = (char *)((int)puVar14 - uVar7);
      pcVar11 = (char *)((int)puVar12 + -1);
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar11 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar11 = pcVar11 + 1;
      }
      uVar7 = 0xffffffff;
      pcVar2 = &DAT_1007a878;
      do {
        pcVar11 = pcVar2;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar11 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar11;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar9 = -1;
      puVar3 = local_100;
      do {
        puVar14 = puVar3;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        puVar14 = (uint *)((int)puVar3 + 1);
        uVar8 = *puVar3;
        puVar3 = puVar14;
      } while ((char)uVar8 != '\0');
      pcVar2 = pcVar11 + -uVar7;
      pcVar11 = (char *)((int)puVar14 + -1);
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar11 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar11 = pcVar11 + 1;
      }
    }
    puVar10 = (undefined *)(*DAT_100a512c)(local_100,5,0);
    if (puVar10 == (undefined *)0x0) {
switchD_1003d0ec_caseD_a:
      return (Panel *)0x0;
    }
    _strncpy(local_120,(char *)_Source,0x20);
    local_101 = 0;
    puVar4 = puVar10;
  }
  else {
    puVar4 = this;
    if (param_1 == 2) {
      switch(DAT_100b6620) {
      case 1:
        puVar4 = FUN_10030c20(s__Help_scout_1007a86c);
        pcVar2 = s__Title_scout_1007a85c;
        break;
      case 2:
        puVar4 = FUN_10030c20(s__Help_sniper_1007a84c);
        pcVar2 = s__Title_sniper_1007a83c;
        break;
      case 3:
        puVar4 = FUN_10030c20(s__Help_soldier_1007a82c);
        pcVar2 = s__Title_soldier_1007a81c;
        break;
      case 4:
        puVar4 = FUN_10030c20(s__Help_demoman_1007a80c);
        pcVar2 = s__Title_demoman_1007a7fc;
        break;
      case 5:
        puVar4 = FUN_10030c20(s__Help_medic_1007a7f0);
        pcVar2 = s__Title_medic_1007a7e0;
        break;
      case 6:
        puVar4 = FUN_10030c20(s__Help_hwguy_1007a7d4);
        pcVar2 = s__Title_hwguy_1007a7c4;
        break;
      case 7:
        puVar4 = FUN_10030c20(s__Help_pyro_1007a7b8);
        pcVar2 = s__Title_pyro_1007a7ac;
        break;
      case 8:
        puVar4 = FUN_10030c20(s__Help_spy_1007a7a0);
        pcVar2 = s__Title_spy_1007a794;
        break;
      case 9:
        puVar4 = FUN_10030c20(s__Help_engineer_1007a784);
        pcVar2 = s__Title_engineer_1007a774;
        break;
      default:
        goto switchD_1003d0ec_caseD_a;
      case 0xb:
        puVar4 = FUN_10030c20(s__Help_civilian_1007a764);
        pcVar2 = s__Title_civilian_1007a754;
      }
      FUN_10030b50(pcVar2,local_120,0x20);
      if (DAT_100b6620 == 0xb) {
        FUN_100499f0((undefined1 *)local_100,(byte *)s_classes_long_civilian_txt_1007a738);
      }
      else {
        FUN_100499f0((undefined1 *)local_100,(byte *)s_classes_long__s_txt_1007a724);
      }
      puVar5 = (undefined *)(*DAT_100a512c)(local_100,5,0);
      if (puVar5 != (undefined *)0x0) {
        puVar4 = puVar5;
      }
    }
  }
  pPVar6 = FUN_10034af0(puVar4,local_120,(uint)(DAT_100b6620 == 0),0,0,0,DAT_100a4dcc,DAT_100a4dd0);
  (**(code **)(*(int *)pPVar6 + 0x40))(this);
  if (puVar10 != (undefined *)0x0) {
    (*DAT_100a5134)(puVar10);
  }
  return pPVar6;
}

