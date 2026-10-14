
void __thiscall FUN_10093a60(undefined1 *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *extraout_ECX;
  char *pcVar6;
  bool bVar7;
  float10 fVar8;
  undefined3 uVar5;
  
  pcVar6 = s_radius_10103834;
  pbVar2 = *(byte **)(param_2 + 4);
  puVar4 = param_1;
  do {
    bVar1 = *pbVar2;
    uVar5 = (undefined3)((uint)puVar4 >> 8);
    puVar4 = (undefined1 *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_10093a95:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_10093a9a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    puVar4 = (undefined1 *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_10093a95;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10093a9a:
  if (iVar3 == 0) {
    fVar8 = FUN_100c82a6(puVar4,*(byte **)(param_2 + 8));
    *(float *)(param_1 + 0xb8) = (float)fVar8;
    *(undefined4 *)(param_2 + 0xc) = 1;
    puVar4 = extraout_ECX;
  }
  pbVar2 = *(byte **)(param_2 + 4);
  pcVar6 = s_roomtype_10116f94;
  do {
    bVar1 = *pbVar2;
    uVar5 = (undefined3)((uint)puVar4 >> 8);
    puVar4 = (undefined1 *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_10093ae3:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_10093ae8;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    puVar4 = (undefined1 *)CONCAT31(uVar5,bVar1);
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_10093ae3;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10093ae8:
  if (iVar3 == 0) {
    fVar8 = FUN_100c82a6(puVar4,*(byte **)(param_2 + 8));
    *(float *)(param_1 + 0xbc) = (float)fVar8;
    *(undefined4 *)(param_2 + 0xc) = 1;
  }
  return;
}

