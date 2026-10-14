
void __thiscall FUN_100a54d0(void *this,int *param_1)

{
  char cVar1;
  byte bVar2;
  float *pfVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  byte *pbVar10;
  int *piVar11;
  char *pcVar12;
  byte *pbVar13;
  
  iVar4 = (**(code **)(*DAT_10121db8 + 0x1c))();
  if (iVar4 != 0) {
    return;
  }
  if (*DAT_10122044 == *(float *)(*(int *)((int)this + 4) + 0x1e4)) {
    return;
  }
  *(float *)(*(int *)((int)this + 4) + 0x1e4) = *DAT_10122044;
  iVar4 = (*DAT_10121f28)(1);
  if ((iVar4 == 0) && (iVar4 = (*DAT_10121f1c)(0), iVar4 == 0)) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11 = *(int **)(iVar4 + 0x7c);
  }
  pbVar10 = (byte *)((int)this + 0x17c);
  iVar4 = FUN_100a5880(piVar11,pbVar10);
  if (iVar4 == 0) {
    (*DAT_10121efc)(2,s_Player_isn_t_in_the_transition_v_10119a14,pbVar10);
    return;
  }
  if (*(int *)((int)this + 0x19c) != 0) {
    iVar4 = (*DAT_10121e5c)();
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + 0x80;
    }
    iVar6 = *(int *)(iVar4 + 0x208);
    if ((iVar6 == 0) || (puVar5 = *(undefined4 **)(iVar6 + 0x7c), puVar5 == (undefined4 *)0x0)) {
      puVar5 = (undefined4 *)(*DAT_10121f04)(iVar6,200);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        *puVar5 = &PTR_FUN_100f411c;
      }
      puVar5[1] = iVar4;
      if (puVar5 == (undefined4 *)0x0) goto LAB_100a55fc;
    }
    *(undefined4 *)(puVar5[1] + 0x1c8) = *(undefined4 *)((int)this + 0x19c);
    puVar5[0x2e] = *(undefined4 *)((int)this + 0x1a0);
    iVar4 = piVar11[1];
    iVar6 = puVar5[1];
    *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar4 + 8);
    *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar4 + 0xc);
    *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar4 + 0x10);
    FUN_10018b20(*(int *)(puVar5[1] + 0x208));
  }
LAB_100a55fc:
  uVar7 = 0xffffffff;
  pcVar9 = (char *)((int)this + 0x15c);
  do {
    pcVar12 = pcVar9;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar12 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar12;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar9 = pcVar12 + -uVar7;
  pcVar12 = (char *)&DAT_1013131c;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar12 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar12 = pcVar12 + 1;
  }
  FUN_10019420((void *)((int)this + 0xc0),(int)param_1);
  FUN_10098e40(this,param_1,3,0);
  DAT_101312fc._0_1_ = 0;
  iVar4 = FUN_100a5420(pbVar10);
  if ((iVar4 != 0) && (iVar6 = (*DAT_10121f20)(iVar4), iVar6 != 0)) {
    uVar7 = 0xffffffff;
    do {
      pbVar13 = pbVar10;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pbVar13 = pbVar10 + 1;
      bVar2 = *pbVar10;
      pbVar10 = pbVar13;
    } while (bVar2 != 0);
    uVar7 = ~uVar7;
    pbVar10 = pbVar13 + -uVar7;
    pbVar13 = (byte *)&DAT_101312fc;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pbVar13 = *(undefined4 *)pbVar10;
      pbVar10 = pbVar10 + 4;
      pbVar13 = pbVar13 + 4;
    }
    for (uVar7 = uVar7 & 3; pfVar3 = DAT_10122044, uVar7 != 0; uVar7 = uVar7 - 1) {
      *pbVar13 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      pbVar13 = pbVar13 + 1;
    }
    DAT_10122044[0x28] = *(float *)(iVar4 + 0x88);
    pfVar3[0x29] = *(float *)(iVar4 + 0x8c);
    pfVar3[0x2a] = *(float *)(iVar4 + 0x90);
  }
  (*DAT_10121efc)(1,s_CHANGE_LEVEL___s__s_101199fc,&DAT_1013131c,&DAT_101312fc);
  (*DAT_10121e20)(&DAT_1013131c,&DAT_101312fc);
  return;
}

