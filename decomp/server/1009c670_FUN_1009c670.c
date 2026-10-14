
void __thiscall FUN_1009c670(int *param_1,int *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  char *pcVar10;
  undefined1 auStack_404 [1028];
  
  (**(code **)(*param_1 + 0xdc))(param_2);
  FUN_10064e40(param_1,(int)param_2);
  (*DAT_10121ec0)(1,DAT_101248f0,0,*(undefined4 *)(param_2[1] + 0x208));
  (*DAT_10121ec8)(DAT_101312f0);
  iVar7 = 0;
  if (0 < DAT_101312f0) {
    puVar6 = &DAT_10131068;
    do {
      (*DAT_10121ee0)(puVar6);
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 4;
    } while (iVar7 < DAT_101312f0);
  }
  (*DAT_10121ec4)();
  FUN_1009d020(param_1,'\0');
  uVar2 = (*DAT_10121fb0)(*(undefined4 *)(param_2[1] + 0x208),s_model_10105414);
  pbVar3 = (byte *)(*DAT_10121fb4)(uVar2);
  pbVar8 = (byte *)(param_2 + 0x197);
  do {
    bVar1 = *pbVar3;
    bVar9 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_1009c743:
      iVar7 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_1009c748;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar9 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_1009c743;
    pbVar3 = pbVar3 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  iVar7 = 0;
LAB_1009c748:
  if (iVar7 == 0) {
    pcVar10 = s___you_are_on_team___s__10117fb0;
  }
  else {
    pcVar10 = s___assigned_to_team__s_10117f98;
  }
  FUN_100c8506(auStack_404,(byte *)pcVar10);
  (**(code **)(*param_1 + 0xd8))(param_2,param_2 + 0x197,0,0);
  FUN_100afa50(&stack0xfffffbec,param_2);
  (*DAT_10121f24)(*(undefined4 *)(param_2[1] + 0x208));
  FUN_1009d020(param_1,'\0');
  iVar7 = 1;
  if (0 < *(int *)(DAT_10122044 + 0x90)) {
    do {
      piVar4 = (int *)FUN_100af1c0(iVar7);
      if (piVar4 != (int *)0x0) {
        iVar5 = *param_1;
        uVar2 = (**(code **)(*piVar4 + 0xd4))();
        iVar5 = (**(code **)(iVar5 + 0xd4))(uVar2);
        if (iVar5 != 0) {
          (*DAT_10121ec0)(1,DAT_101248b4,0,*(undefined4 *)(param_2[1] + 0x208));
          uVar2 = (*DAT_10121f24)(*(undefined4 *)(piVar4[1] + 0x208));
          (*DAT_10121ec8)(uVar2);
          uVar2 = (**(code **)(*piVar4 + 0xd4))();
          (*DAT_10121ee0)(uVar2);
          (*DAT_10121ec4)();
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 <= *(int *)(DAT_10122044 + 0x90));
  }
  return;
}

