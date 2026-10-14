
void __thiscall FUN_10009b90(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  CBasePlayerItem *this;
  undefined3 uVar4;
  char *pcVar5;
  bool bVar6;
  
  iVar3 = *(int *)(*(int *)(param_2 + 4) + 0x208);
  if (iVar3 == 0) {
    this = (CBasePlayerItem *)0x0;
  }
  else {
    this = (CBasePlayerItem *)(iVar3 + 0x80);
  }
  pcVar5 = s_efw_cage_door_10076f48;
  pbVar2 = (byte *)(*(int *)(DAT_1007f7f8 + 0x98) + *(int *)(this + 0x1cc));
  do {
    bVar1 = *pbVar2;
    uVar4 = (undefined3)((uint)this >> 8);
    this = (CBasePlayerItem *)CONCAT31(uVar4,bVar1);
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_10009bf1:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_10009bf6;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    this = (CBasePlayerItem *)CONCAT31(uVar4,bVar1);
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_10009bf1;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10009bf6:
  if (iVar3 == 0) {
    CBasePlayerItem::AttemptToMaterialize(this);
    FUN_10043fa0(*(int **)(param_1 + 0xdc),param_1);
  }
  return;
}

