
void __thiscall FUN_10009a40(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  CBasePlayerItem *this;
  CBasePlayerItem *this_00;
  CBasePlayerItem *this_01;
  CBasePlayerItem *this_02;
  char *pcVar5;
  bool bVar6;
  
  iVar4 = *(int *)(*(int *)(param_2 + 4) + 0x208);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar4 + 0x80;
  }
  pcVar5 = s_efw_kitchen_bin_10076eb8;
  pbVar3 = (byte *)(*(int *)(DAT_1007f7f8 + 0x98) + *(int *)(iVar4 + 0x1cc));
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_10009aa1:
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_10009aa6;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_10009aa1;
    pbVar3 = pbVar3 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_10009aa6:
  if (iVar4 == 0) {
    cVar2 = FUN_10044860();
    if (cVar2 != '\0') {
      DAT_100873c8 = DAT_100873c8 + 1;
      CBasePlayerItem::AttemptToMaterialize(this);
      CBasePlayerItem::AttemptToMaterialize(this_00);
      FUN_10044380(2.0);
      return;
    }
    CBasePlayerItem::AttemptToMaterialize(*(CBasePlayerItem **)(param_1 + 0xdc));
    FUN_10043fa0(*(int **)(param_1 + 0xdc),param_1);
    CBasePlayerItem::AttemptToMaterialize(this_01);
    CBasePlayerItem::AttemptToMaterialize(this_02);
    FUN_100443e0(10.0);
  }
  return;
}

