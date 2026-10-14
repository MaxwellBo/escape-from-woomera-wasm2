
void __fastcall FUN_100a5300(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  pbVar4 = &DAT_10121c38;
  pbVar2 = (byte *)(param_1 + 0x15c);
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_100a533b:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_100a5340;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_100a533b;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100a5340:
  if (iVar3 == 0) {
    (*DAT_10121efc)(1,s_a_trigger_changelevel_doesn_t_ha_101199a8);
  }
  pbVar4 = &DAT_10121c38;
  pbVar2 = (byte *)(param_1 + 0x17c);
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_100a5387:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_100a538c;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_100a5387;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100a538c:
  if (iVar3 == 0) {
    (*DAT_10121efc)(1,s_trigger_changelevel_to__s_doesn__10119974,(byte *)(param_1 + 0x15c));
  }
  if (*(int *)(*(int *)(param_1 + 4) + 0x1cc) != 0) {
    *(code **)(param_1 + 0x7c) = CChangeLevel::UseChangeLevel;
  }
  FUN_100a3270(param_1);
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 2) == 0) {
    *(code **)(param_1 + 0x78) = CChangeLevel::TouchChangeLevel;
  }
  return;
}

