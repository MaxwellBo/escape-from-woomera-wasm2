
bool __thiscall FUN_1001f320(void *this,int param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  char *pcVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  void *pvVar14;
  bool bStack_365;
  char *local_364;
  int local_360;
  char *pcStack_35c;
  int iStack_358;
  undefined4 auStack_354 [5];
  undefined1 auStack_340 [64];
  char local_300 [256];
  char local_200 [256];
  undefined1 auStack_100 [256];
  
  uVar3 = 0xffffffff;
  iVar5 = 0;
  pcVar11 = s_half_life_east_won_net_10078a54;
  do {
    pcVar8 = pcVar11;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar8 = pcVar11 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar8;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  local_364 = (char *)0x0;
  pcVar11 = pcVar8 + -uVar3;
  pcVar8 = local_200;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pcVar8 = pcVar8 + 4;
  }
  local_360 = 0;
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar8 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    pcVar8 = pcVar8 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar11 = s_woncomm_lst_10078a48;
  do {
    pcVar8 = pcVar11;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar8 = pcVar11 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar8;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar11 = pcVar8 + -uVar3;
  pcVar8 = local_300;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar8 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    pcVar8 = pcVar8 + 1;
  }
  iVar2 = (*DAT_100a50ac)(s__comm_10078a40,&local_364);
  if ((iVar2 != 0) && (local_364 != (char *)0x0)) {
    uVar3 = 0xffffffff;
    pcVar11 = local_364;
    do {
      pcVar8 = pcVar11;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar8 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar8;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar11 = pcVar8 + -uVar3;
    pcVar8 = local_300;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar8 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar8 = pcVar8 + 1;
    }
  }
  pcStack_35c = (char *)(*DAT_100a512c)(local_300,5,0);
  if ((pcStack_35c != (char *)0x0) && (local_364 = pcStack_35c, 0 < param_1)) {
LAB_1001f3fe:
    local_364 = (char *)(*DAT_100a5130)(local_364,this);
    uVar3 = 0xffffffff;
    pcVar11 = this;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    if ((void *)(~uVar3 - 1) != (void *)0x0) {
      uVar3 = FUN_10056910((void *)(~uVar3 - 1),this,(byte *)s_Master_10078a38);
      if (uVar3 == 0) {
        iStack_358 = 0x6982;
      }
      bStack_365 = uVar3 != 0;
      local_364 = (char *)(*DAT_100a5130)(local_364,this);
      uVar3 = 0xffffffff;
      pcVar11 = this;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      if ((((void *)(~uVar3 - 1) != (void *)0x0) &&
          (uVar3 = FUN_10056910((void *)(~uVar3 - 1),this,&DAT_10078a34), uVar3 == 0)) &&
         (iVar5 < param_1)) {
        puVar6 = param_3 + iVar5 * 5;
        do {
          local_364 = (char *)(*DAT_100a5130)(local_364,this);
          uVar3 = 0xffffffff;
          pcVar11 = this;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar1 != '\0');
          if (((void *)(~uVar3 - 1) == (void *)0x0) ||
             (uVar3 = FUN_10056910((void *)(~uVar3 - 1),this,&DAT_10078a30), uVar3 == 0))
          goto LAB_1001f5bd;
          puVar10 = auStack_100;
          puVar12 = &DAT_10078410;
          pvVar14 = this;
          FUN_100499f0(puVar10,&DAT_10078410);
          local_364 = (char *)(*DAT_100a5130)(local_364,this,puVar10,puVar12,pvVar14);
          uVar3 = 0xffffffff;
          pcVar11 = this;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar1 != '\0');
          if (((void *)(~uVar3 - 1) == (void *)0x0) ||
             (uVar3 = FUN_10056910((void *)(~uVar3 - 1),this,&DAT_10078a2c), uVar3 != 0))
          goto LAB_1001f5bd;
          local_364 = (char *)(*DAT_100a5130)(local_364,this);
          uVar3 = 0xffffffff;
          pcVar11 = this;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar1 != '\0');
          if ((void *)(~uVar3 - 1) == (void *)0x0) goto LAB_1001f5bd;
          iVar5 = FUN_100499e5((void *)(~uVar3 - 1),this);
          if (iVar5 == 0) {
            iVar5 = iStack_358;
          }
          puVar13 = auStack_100;
          puVar10 = auStack_340;
          pcVar11 = s__s__i_10078a24;
          FUN_100499f0(puVar10,(byte *)s__s__i_10078a24);
          iVar5 = (**(code **)(DAT_100a5148 + 0x1c))
                            (auStack_340,auStack_354,puVar10,pcVar11,puVar13,iVar5);
          if (iVar5 == 0) {
            bStack_365 = true;
          }
          else if (!bStack_365) {
            puVar7 = auStack_354;
            puVar9 = puVar6;
            for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar9 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar9 = puVar9 + 1;
            }
            local_360 = local_360 + 1;
            puVar6 = puVar6 + 5;
          }
          iVar5 = local_360;
          if (param_1 <= local_360) break;
        } while( true );
      }
    }
    goto LAB_1001f5cb;
  }
LAB_1001f5d3:
  pcVar11 = pcStack_35c;
  FUN_100499f0(local_200,(byte *)s_half_life_east_won_net_10078a54);
  iVar2 = (**(code **)(DAT_100a5148 + 0x1c))(local_200,auStack_354);
  if (iVar2 != 0) {
    local_360 = 1;
    iVar5 = 1;
    puVar6 = auStack_354;
    for (iVar2 = 5; pcVar11 = pcStack_35c, iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_3 = *puVar6;
      puVar6 = puVar6 + 1;
      param_3 = param_3 + 1;
    }
  }
LAB_1001f623:
  *param_2 = iVar5;
  if (pcVar11 != (char *)0x0) {
    (*DAT_100a5134)(pcVar11);
  }
  return 0 < iVar5;
LAB_1001f5bd:
  iVar5 = local_360;
  if (param_1 <= local_360) goto LAB_1001f5cb;
  goto LAB_1001f3fe;
LAB_1001f5cb:
  pcVar11 = pcStack_35c;
  if (iVar5 != 0) goto LAB_1001f623;
  goto LAB_1001f5d3;
}

