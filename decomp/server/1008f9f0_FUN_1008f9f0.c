
void __fastcall FUN_1008f9f0(void *param_1)

{
  uint *this;
  byte bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined3 extraout_var;
  int iVar6;
  undefined3 extraout_var_00;
  byte *pbVar7;
  byte *pbVar8;
  undefined4 uVar9;
  
  piVar3 = (int *)FUN_10019410((uint *)((int)param_1 + 0x168));
  if (piVar3 == (int *)0x0) {
    return;
  }
  iVar4 = (**(code **)(*piVar3 + 0x74))();
  if (iVar4 == 0) {
    return;
  }
  if (*(int *)(iVar4 + 0x2fc) != 0) {
    FUN_100901d0(*(int *)(iVar4 + 0x2fc));
  }
  *(void **)(iVar4 + 0x2fc) = param_1;
  if (*(int *)((int)param_1 + 0x318) == 0) {
LAB_1008fb8a:
    FUN_10019420((void *)(iVar4 + 0x168),(int)param_1);
  }
  else {
    this = (uint *)(iVar4 + 0x168);
    iVar5 = FUN_10019410((uint *)((int)param_1 + 0xc0));
    iVar5 = FUN_100af060(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)((int)param_1 + 0x318)),
                         iVar5);
    FUN_10019420(this,iVar5);
    bVar2 = FUN_10019450(this);
    if (CONCAT31(extraout_var,bVar2) == 0) {
      uVar9 = *(undefined4 *)((int)param_1 + 0x334);
      iVar5 = *(int *)((int)param_1 + 4) + 8;
      iVar6 = FUN_10019410(this);
      iVar5 = FUN_100aeba0(iVar6,iVar5,uVar9);
      for (iVar5 = FUN_10019420(this,iVar5); iVar5 != 0; iVar5 = FUN_10019420(this,iVar5)) {
        pbVar8 = (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)((int)param_1 + 0x318));
        iVar5 = FUN_10019460(this);
        pbVar7 = (byte *)(*(int *)(DAT_10122044 + 0x98) + **(int **)(iVar5 + 4));
        do {
          bVar1 = *pbVar7;
          bVar2 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_1008fb04:
            iVar5 = (1 - (uint)bVar2) - (uint)(bVar2 != 0);
            goto LAB_1008fb09;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar2 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_1008fb04;
          pbVar7 = pbVar7 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_1008fb09:
        if (iVar5 == 0) break;
        uVar9 = *(undefined4 *)((int)param_1 + 0x334);
        iVar6 = *(int *)((int)param_1 + 4) + 8;
        iVar5 = FUN_10019410(this);
        iVar5 = FUN_100aeba0(iVar5,iVar6,uVar9);
      }
    }
    bVar2 = FUN_10019450(this);
    if (CONCAT31(extraout_var_00,bVar2) == 0) {
      iVar5 = *(int *)(DAT_10122044 + 0x98);
      (*DAT_10121efc)(1,s__s__s_has_a_missing__turn_target_10116054,
                      iVar5 + **(int **)((int)param_1 + 4),
                      (*(int **)((int)param_1 + 4))[0x73] + iVar5,
                      iVar5 + *(int *)((int)param_1 + 0x318));
      goto LAB_1008fb8a;
    }
  }
  if (*(int *)((int)param_1 + 0x31c) != 0) {
    iVar5 = FUN_10019410((uint *)((int)param_1 + 0xc0));
    iVar5 = FUN_100af060(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)((int)param_1 + 0x31c)),
                         iVar5);
    *(int *)(iVar4 + 8) = iVar5;
    if (iVar5 != 0) goto LAB_1008fc03;
    iVar5 = *(int *)(DAT_10122044 + 0x98);
    (*DAT_10121efc)(1,s__s__s_has_a_missing__move_target_1011602c,
                    iVar5 + **(int **)((int)param_1 + 4),(*(int **)((int)param_1 + 4))[0x73] + iVar5
                    ,*(int *)((int)param_1 + 0x31c) + iVar5);
  }
  *(void **)(iVar4 + 8) = param_1;
LAB_1008fc03:
  *(undefined4 *)((int)param_1 + 0x350) = *(undefined4 *)(*(int *)(iVar4 + 4) + 0x108);
  *(undefined4 *)((int)param_1 + 0x354) = *(undefined4 *)(*(int *)(iVar4 + 4) + 0x10c);
  *(undefined4 *)((int)param_1 + 0x358) = *(undefined4 *)(*(int *)(iVar4 + 4) + 0x118);
  *(uint *)(*(int *)(iVar4 + 4) + 0x118) =
       *(uint *)(*(int *)(iVar4 + 4) + 0x118) | *(uint *)(*(int *)((int)param_1 + 4) + 0x118);
  *(undefined4 *)((int)param_1 + 0x308) = 2;
  switch(*(undefined4 *)((int)param_1 + 0x324)) {
  case 1:
  case 2:
    FUN_10090270(param_1,1);
    *(undefined4 *)((int)param_1 + 0x308) = 1;
  case 0:
  case 4:
  case 5:
  case 6:
    *(undefined4 *)(iVar4 + 0x2f8) = 1;
  default:
    *(undefined4 *)(iVar4 + 0x1dc) = 6;
    return;
  }
}

