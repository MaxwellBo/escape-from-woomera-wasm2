
/* WARNING (jumptable): Unable to track spacebase fully for stack */

void __fastcall FUN_100a8390(int *param_1)

{
  uint *puVar1;
  uint *puVar2;
  bool bVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar4;
  int iVar5;
  float *pfVar6;
  byte *pbVar7;
  undefined8 in_stack_ffffff7c;
  double dVar8;
  char *pcVar10;
  float fVar11;
  double dVar9;
  undefined4 in_stack_ffffff84;
  float fVar12;
  float fVar13;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float afStack_54 [3];
  float afStack_48 [3];
  float afStack_3c [3];
  float afStack_30 [3];
  float afStack_24 [3];
  float afStack_18 [5];
  
  pcVar10 = (char *)((ulonglong)in_stack_ffffff7c >> 0x20);
  puVar1 = (uint *)(param_1 + 0x32);
  bVar3 = FUN_10019450(puVar1);
  if (CONCAT31(extraout_var,bVar3) == 0) {
LAB_100a8e09:
    if ((*(byte *)(param_1[1] + 0x1a0) & 1) != 0) {
      (*DAT_10121efc)();
    }
    param_1[0x1d] = (int)CBaseEntity::SUB_Remove;
    (**(code **)(*param_1 + 8))();
    return;
  }
  puVar2 = (uint *)(param_1 + 0x34);
  bVar3 = FUN_10019450(puVar2);
  if (CONCAT31(extraout_var_00,bVar3) == 0) goto LAB_100a8e09;
  dVar9 = (double)CONCAT44(0x100a83d2,in_stack_ffffff84);
  (**(code **)(*param_1 + 8))();
  if ((*(byte *)(param_1[1] + 0x1a0) & 1) != 0) {
    iVar4 = FUN_10019460(puVar2);
    iVar4 = *(int *)(*(int *)(iVar4 + 4) + 0x1cc) + *(int *)(DAT_10122044 + 0x98);
    iVar5 = FUN_10019460(puVar2);
    dVar9 = (double)CONCAT44(iVar4,**(int **)(iVar5 + 4) + *(int *)(DAT_10122044 + 0x98));
    pcVar10 = s_motion_thread_affects__s___s___10119d08;
    (*DAT_10121efc)(1);
  }
  if (param_1[0x2e] == 0) goto switchD_100a8445_default;
  switch(param_1[0x2f]) {
  case 0:
    if ((*(byte *)(param_1[1] + 0x1a0) & 1) != 0) {
      FUN_10019460(puVar2);
      iVar4 = FUN_10019460(puVar2);
      dVar9 = (double)*(float *)(*(int *)(iVar4 + 4) + 0xc);
      iVar4 = FUN_10019460(puVar2);
      (*DAT_10121efc)(1,s_DEBUG__Set_origin_from__f__f__f_10119bd8,
                      (double)*(float *)(*(int *)(iVar4 + 4) + 8),dVar9);
    }
    pbVar7 = (byte *)(*(int *)(DAT_10122044 + 0x98) + param_1[0x2e]);
    iVar4 = FUN_10019410(puVar1);
    FUN_10058750((float *)&stack0xffffff80,(int)param_1,iVar4,pbVar7);
    iVar4 = FUN_10019410(puVar2);
    FUN_10063390(iVar4);
    if ((*(byte *)(param_1[1] + 0x1a0) & 1) != 0) {
      FUN_10019460(puVar2);
      iVar4 = FUN_10019460(puVar2);
      dVar9 = (double)*(float *)(*(int *)(iVar4 + 4) + 0xc);
      iVar4 = FUN_10019460(puVar2);
      fVar13 = *(float *)(*(int *)(iVar4 + 4) + 8);
LAB_100a8632:
      (*DAT_10121efc)(1,s_to__f__f__f_10119bc8,(double)fVar13,dVar9);
    }
    goto LAB_100a8648;
  case 1:
    if ((*(byte *)(param_1[1] + 0x1a0) & 1) != 0) {
      FUN_10019460(puVar2);
      iVar4 = FUN_10019460(puVar2);
      dVar9 = (double)*(float *)(*(int *)(iVar4 + 4) + 0xc);
      iVar4 = FUN_10019460(puVar2);
      (*DAT_10121efc)(1,s_DEBUG__Offset_origin_from__f__f___10119ce4,
                      (double)*(float *)(*(int *)(iVar4 + 4) + 8),dVar9);
    }
    pbVar7 = (byte *)(*(int *)(DAT_10122044 + 0x98) + param_1[0x2e]);
    iVar4 = FUN_10019410(puVar1);
    pfVar6 = FUN_10058820(afStack_48,(int)param_1,iVar4,pbVar7);
    FUN_100a8e70(afStack_3c,*(float *)(DAT_10122044 + 4),pfVar6);
    FUN_10019460(puVar2);
    iVar4 = FUN_10019410(puVar2);
    FUN_10063390(iVar4);
    if ((*(byte *)(param_1[1] + 0x1a0) & 1) != 0) {
      FUN_10019460(puVar2);
      iVar4 = FUN_10019460(puVar2);
      dVar9 = (double)*(float *)(*(int *)(iVar4 + 4) + 0xc);
      iVar4 = FUN_10019460(puVar2);
      fVar13 = *(float *)(*(int *)(iVar4 + 4) + 8);
      goto LAB_100a8632;
    }
LAB_100a8648:
    iVar4 = FUN_10019460(puVar2);
    *(uint *)(*(int *)(iVar4 + 4) + 0x1a4) = *(uint *)(*(int *)(iVar4 + 4) + 0x1a4) & 0xfffffdff;
    break;
  case 2:
    if ((*(byte *)(param_1[1] + 0x1a0) & 1) != 0) {
      iVar4 = FUN_10019460(puVar2);
      dVar9 = (double)*(float *)(*(int *)(iVar4 + 4) + 0x28);
      iVar4 = FUN_10019460(puVar2);
      dVar8 = (double)*(float *)(*(int *)(iVar4 + 4) + 0x24);
      iVar4 = FUN_10019460(puVar2);
      (*DAT_10121efc)(1,s_DEBUG__Set_velocity_from__f__f___10119b5c,
                      (double)*(float *)(*(int *)(iVar4 + 4) + 0x20),dVar8);
      pcVar10 = (char *)((ulonglong)dVar8 >> 0x20);
    }
    pbVar7 = (byte *)(*(int *)(DAT_10122044 + 0x98) + param_1[0x2e]);
    iVar4 = FUN_10019410(puVar1);
    FUN_10058820((float *)&stack0xffffff80,(int)param_1,iVar4,pbVar7);
    iVar4 = FUN_10019410(puVar2);
    FUN_100638f0(iVar4,(float)pcVar10,SUB84(dVar9,0),(float)((ulonglong)dVar9 >> 0x20));
    if ((*(byte *)(param_1[1] + 0x1a0) & 1) != 0) {
      FUN_10019460(puVar2);
      iVar4 = FUN_10019460(puVar2);
      dVar9 = (double)*(float *)(*(int *)(iVar4 + 4) + 0x24);
      iVar4 = FUN_10019460(puVar2);
      fVar13 = *(float *)(*(int *)(iVar4 + 4) + 0x20);
LAB_100a8952:
      (*DAT_10121efc)(1,s_to__f__f__f_10119bc8,(double)fVar13,dVar9);
    }
    break;
  case 3:
    if ((*(byte *)(param_1[1] + 0x1a0) & 1) != 0) {
      FUN_10019460(puVar2);
      iVar4 = FUN_10019460(puVar2);
      dVar9 = (double)*(float *)(*(int *)(iVar4 + 4) + 0x24);
      iVar4 = FUN_10019460(puVar2);
      (*DAT_10121efc)(1,s_DEBUG__Accelerate_from__f__f__f_10119cc0,
                      (double)*(float *)(*(int *)(iVar4 + 4) + 0x20),dVar9);
    }
    pbVar7 = (byte *)(*(int *)(DAT_10122044 + 0x98) + param_1[0x2e]);
    iVar4 = FUN_10019410(puVar1);
    pfVar6 = FUN_10058820(afStack_30,(int)param_1,iVar4,pbVar7);
    pfVar6 = (float *)FUN_100a8e70(afStack_24,*(float *)(DAT_10122044 + 4),pfVar6);
    iVar4 = FUN_10019460(puVar2);
    iVar4 = *(int *)(iVar4 + 4);
    fVar13 = pfVar6[2] + *(float *)(iVar4 + 0x28);
    fVar12 = pfVar6[1] + *(float *)(iVar4 + 0x24);
    fVar11 = *(float *)(iVar4 + 0x20) + *pfVar6;
    iVar4 = FUN_10019410(puVar2);
    FUN_100638f0(iVar4,fVar11,fVar12,fVar13);
    if ((*(byte *)(param_1[1] + 0x1a0) & 1) != 0) {
      FUN_10019460(puVar2);
      iVar4 = FUN_10019460(puVar2);
      dVar9 = (double)*(float *)(*(int *)(iVar4 + 4) + 0x24);
      iVar4 = FUN_10019460(puVar2);
      fVar13 = *(float *)(*(int *)(iVar4 + 4) + 0x20);
      goto LAB_100a8952;
    }
    break;
  case 4:
    if ((*(byte *)(param_1[1] + 0x1a0) & 1) != 0) {
      FUN_10019460(puVar2);
      iVar4 = FUN_10019460(puVar2);
      dVar9 = (double)*(float *)(*(int *)(iVar4 + 4) + 0x24);
      iVar4 = FUN_10019460(puVar2);
      (*DAT_10121efc)(1,s_DEBUG__Set_velocity__path__from___10119c94,
                      (double)*(float *)(*(int *)(iVar4 + 4) + 0x20),dVar9);
    }
    iVar4 = FUN_10019460(puVar2);
    iVar4 = *(int *)(iVar4 + 4);
    pbVar7 = (byte *)(*(int *)(DAT_10122044 + 0x98) + param_1[0x2e]);
    iVar5 = FUN_10019410((uint *)(param_1 + 0x32));
    pfVar6 = FUN_10058750(afStack_18,(int)param_1,iVar5,pbVar7);
    fVar13 = pfVar6[2] - *(float *)(iVar4 + 0x10);
    fVar12 = pfVar6[1] - *(float *)(iVar4 + 0xc);
    fVar11 = *pfVar6 - *(float *)(iVar4 + 8);
    iVar4 = FUN_10019410(puVar2);
    FUN_100638f0(iVar4,fVar11,fVar12,fVar13);
    if ((*(byte *)(param_1[1] + 0x1a0) & 1) != 0) {
      FUN_10019460(puVar2);
      iVar4 = FUN_10019460(puVar2);
      dVar9 = (double)*(float *)(*(int *)(iVar4 + 4) + 0x24);
      iVar4 = FUN_10019460(puVar2);
      fVar13 = *(float *)(*(int *)(iVar4 + 4) + 0x20);
      goto LAB_100a8952;
    }
  }
switchD_100a8445_default:
  iVar4 = param_1[0x30];
  if (iVar4 == 0) {
    return;
  }
  switch(param_1[0x31]) {
  case 0:
    pbVar7 = (byte *)(*(int *)(DAT_10122044 + 0x98) + iVar4);
    iVar4 = FUN_10019410((uint *)(param_1 + 0x32));
    pfVar6 = FUN_10058820(afStack_18,(int)param_1,iVar4,pbVar7);
    fStack_60 = *pfVar6;
    fStack_5c = pfVar6[1];
    fStack_58 = pfVar6[2];
    if (((fStack_60 == DAT_10121dd8) && (fStack_5c == DAT_10121ddc)) && (fStack_58 == DAT_10121de0))
    {
LAB_100a8ac0:
      if ((*(byte *)(param_1[1] + 0x1a0) & 1) == 0) {
        return;
      }
      (*DAT_10121efc)();
      return;
    }
    if ((*(byte *)(param_1[1] + 0x1a0) & 1) != 0) {
      FUN_10019460(puVar2);
      iVar4 = FUN_10019460(puVar2);
      dVar9 = (double)*(float *)(*(int *)(iVar4 + 4) + 0x54);
      iVar4 = FUN_10019460(puVar2);
      (*DAT_10121efc)(1,s_DEBUG__Set_angles_from__f__f__f_10119b80,
                      (double)*(float *)(*(int *)(iVar4 + 4) + 0x50),dVar9);
    }
    FUN_100ae830((undefined4 *)&stack0xffffff80,&fStack_60);
    break;
  case 1:
    pbVar7 = (byte *)(*(int *)(DAT_10122044 + 0x98) + iVar4);
    iVar4 = FUN_10019410((uint *)(param_1 + 0x32));
    pfVar6 = FUN_10058820(afStack_24,(int)param_1,iVar4,pbVar7);
    fStack_60 = *pfVar6;
    fStack_5c = pfVar6[1];
    fStack_58 = pfVar6[2];
    if (((fStack_60 == DAT_10121dd8) && (fStack_5c == DAT_10121ddc)) && (fStack_58 == DAT_10121de0))
    goto LAB_100a8ac0;
    if ((*(byte *)(param_1[1] + 0x1a0) & 1) != 0) {
      FUN_10019460(puVar2);
      iVar4 = FUN_10019460(puVar2);
      dVar9 = (double)*(float *)(*(int *)(iVar4 + 4) + 0x54);
      iVar4 = FUN_10019460(puVar2);
      (*DAT_10121efc)(1,s_DEBUG__Offset_angles_from__f__f___10119c4c,
                      (double)*(float *)(*(int *)(iVar4 + 4) + 0x50),dVar9);
    }
    pfVar6 = (float *)FUN_100ae830(afStack_30,&fStack_60);
    FUN_100a8e70(afStack_3c,*(float *)(DAT_10122044 + 4),pfVar6);
    FUN_10019460(puVar2);
    break;
  case 2:
    FUN_100b0920(afStack_54,(char *)(*(int *)(DAT_10122044 + 0x98) + iVar4));
    if ((*(byte *)(param_1[1] + 0x1a0) & 1) != 0) {
      FUN_10019460(puVar2);
      iVar4 = FUN_10019460(puVar2);
      dVar9 = (double)*(float *)(*(int *)(iVar4 + 4) + 0x54);
      iVar4 = FUN_10019460(puVar2);
      (*DAT_10121efc)(1,s_DEBUG__Rotate_angles_from__f__f___10119ba4,
                      (double)*(float *)(*(int *)(iVar4 + 4) + 0x50),dVar9);
    }
    FUN_100a8e70(afStack_48,*(float *)(DAT_10122044 + 4),afStack_54);
    FUN_10019460(puVar2);
    iVar4 = FUN_10019410(puVar2);
    FUN_100635b0(iVar4);
    if ((*(byte *)(param_1[1] + 0x1a0) & 1) == 0) {
      return;
    }
    FUN_10019460(puVar2);
    iVar4 = FUN_10019460(puVar2);
    dVar9 = (double)*(float *)(*(int *)(iVar4 + 4) + 0x54);
    iVar4 = FUN_10019460(puVar2);
    fVar13 = *(float *)(*(int *)(iVar4 + 4) + 0x50);
    goto LAB_100a8d0d;
  case 3:
    FUN_100b0920(&fStack_60,(char *)(*(int *)(DAT_10122044 + 0x98) + iVar4));
    if ((*(byte *)(param_1[1] + 0x1a0) & 1) != 0) {
      FUN_10019460(puVar2);
      iVar4 = FUN_10019460(puVar2);
      dVar9 = (double)*(float *)(*(int *)(iVar4 + 4) + 0x60);
      iVar4 = FUN_10019460(puVar2);
      (*DAT_10121efc)(1,s_DEBUG__Set_avelocity_from__f__f___10119b10,
                      (double)*(float *)(*(int *)(iVar4 + 4) + 0x5c),dVar9);
    }
    fVar13 = fStack_60;
    fVar12 = fStack_5c;
    fVar11 = fStack_58;
    iVar4 = FUN_10019410(puVar2);
    FUN_10063ac0(iVar4,fVar13,fVar12,fVar11);
    if ((*(byte *)(param_1[1] + 0x1a0) & 1) != 0) {
      FUN_10019460(puVar2);
      iVar4 = FUN_10019460(puVar2);
      dVar9 = (double)*(float *)(*(int *)(iVar4 + 4) + 0x60);
      iVar4 = FUN_10019460(puVar2);
      fVar13 = *(float *)(*(int *)(iVar4 + 4) + 0x5c);
      goto LAB_100a8d0d;
    }
  default:
    goto switchD_100a8985_default;
  }
  iVar4 = FUN_10019410(puVar2);
  FUN_100635b0(iVar4);
  if ((*(byte *)(param_1[1] + 0x1a0) & 1) != 0) {
    FUN_10019460(puVar2);
    iVar4 = FUN_10019460(puVar2);
    dVar9 = (double)*(float *)(*(int *)(iVar4 + 4) + 0x54);
    iVar4 = FUN_10019460(puVar2);
    fVar13 = *(float *)(*(int *)(iVar4 + 4) + 0x50);
LAB_100a8d0d:
    (*DAT_10121efc)(1,s_to__f__f__f_10119bc8,(double)fVar13,dVar9);
    return;
  }
switchD_100a8985_default:
  return;
}

