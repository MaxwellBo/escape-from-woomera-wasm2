
undefined4 * __fastcall FUN_1009cf70(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_80 [32];
  
  iVar6 = 0x20;
  piVar1 = local_80;
  for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar1 = 0;
    piVar1 = piVar1 + 1;
  }
  iVar4 = 1;
  if (0 < *(int *)(DAT_10122044 + 0x90)) {
    do {
      piVar1 = (int *)FUN_100af1c0(iVar4);
      if (piVar1 != (int *)0x0) {
        iVar3 = *param_1;
        uVar2 = (**(code **)(*piVar1 + 0xd4))();
        iVar3 = (**(code **)(iVar3 + 0xcc))(uVar2);
        if (-1 < iVar3) {
          local_80[iVar3] = local_80[iVar3] + 1;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 <= *(int *)(DAT_10122044 + 0x90));
  }
  puVar7 = (undefined4 *)0x0;
  if (0 < DAT_101312f0) {
    puVar5 = &DAT_10131068;
    piVar1 = local_80;
    iVar4 = DAT_101312f0;
    do {
      if (*piVar1 < iVar6) {
        iVar6 = *piVar1;
        puVar7 = puVar5;
      }
      piVar1 = piVar1 + 1;
      puVar5 = puVar5 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return puVar7;
}

