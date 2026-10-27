
void __cdecl FUN_10090060(int param_1)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  CBaseEntity *pCVar7;
  char *pcVar8;
  bool bVar9;
  
  if (param_1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(param_1 + 0x80);
  }
  pcVar8 = s_scripted_sequence_10116110;
  pbVar3 = (byte *)(*piVar2 + *(int *)(DAT_10122044 + 0x98));
  do {
    bVar1 = *pbVar3;
    bVar9 = bVar1 < (byte)*pcVar8;
    if (bVar1 != *pcVar8) {
LAB_100900b3:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_100900b8;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar9 = bVar1 < (byte)pcVar8[1];
    if (bVar1 != pcVar8[1]) goto LAB_100900b3;
    pbVar3 = pbVar3 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_100900b8:
  if (iVar4 != 0) {
    if (param_1 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)(param_1 + 0x80);
    }
    pcVar8 = s_scripted_action_10101ba8;
    pbVar3 = (byte *)(*(int *)(DAT_10122044 + 0x98) + *piVar2);
    do {
      bVar1 = *pbVar3;
      bVar9 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_100900fd:
        iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_10090102;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar9 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_100900fd;
      pbVar3 = pbVar3 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_10090102:
    if (iVar4 != 0) {
      return;
    }
  }
  if (param_1 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = param_1 + 0x80;
  }
  *(undefined4 *)(iVar4 + 0x308) = 0;
  if (param_1 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = param_1 + 0x80;
  }
  if ((iVar4 == 0) && (iVar5 = (*DAT_10121e5c)(), iVar5 != 0)) {
    iVar4 = iVar5 + 0x80;
  }
  iVar5 = *(int *)(iVar4 + 0x208);
  if ((iVar5 == 0) || (puVar6 = *(undefined4 **)(iVar5 + 0x7c), puVar6 == (undefined4 *)0x0)) {
    puVar6 = (undefined4 *)(*DAT_10121f04)(iVar5,0x360);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      FUN_10002f30(puVar6);
      *puVar6 = &PTR_FUN_100f0d78;
    }
    puVar6[1] = iVar4;
  }
  piVar2 = (int *)FUN_10019410(puVar6 + 0x5a);
  if (((piVar2 != (int *)0x0) &&
      (pCVar7 = (CBaseEntity *)(**(code **)(*piVar2 + 0x74))(), pCVar7 != (CBaseEntity *)0x0)) &&
     (*(int *)(pCVar7 + 0x1d8) == 6)) {
    *(undefined4 *)(pCVar7 + 0x2f8) = 2;
    FUN_10090540(pCVar7);
    FUN_10004e30((int)pCVar7);
  }
  return;
}

