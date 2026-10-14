
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10009e90(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  float fVar5;
  byte *pbVar6;
  int iVar7;
  DWORD DVar8;
  CBasePlayerItem *this_00;
  undefined3 uVar9;
  CBasePlayerItem *this_01;
  CBasePlayerItem *this_02;
  CBasePlayerItem *this_03;
  char *pcVar10;
  bool bVar11;
  
  iVar7 = *(int *)(*(int *)(param_1 + 4) + 0x208);
  if (iVar7 == 0) {
    this_00 = (CBasePlayerItem *)0x0;
  }
  else {
    this_00 = (CBasePlayerItem *)(iVar7 + 0x80);
  }
  pcVar10 = s_efw_IDTag_Position_100771d4;
  pbVar6 = (byte *)(*(int *)(DAT_1007f7f8 + 0x98) + *(int *)(this_00 + 0x1cc));
  do {
    bVar3 = *pbVar6;
    uVar9 = (undefined3)((uint)this_00 >> 8);
    this_00 = (CBasePlayerItem *)CONCAT31(uVar9,bVar3);
    bVar11 = bVar3 < (byte)*pcVar10;
    if (bVar3 != *pcVar10) {
LAB_10009ef3:
      iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_10009ef8;
    }
    if (bVar3 == 0) break;
    bVar3 = pbVar6[1];
    this_00 = (CBasePlayerItem *)CONCAT31(uVar9,bVar3);
    bVar11 = bVar3 < (byte)pcVar10[1];
    if (bVar3 != pcVar10[1]) goto LAB_10009ef3;
    pbVar6 = pbVar6 + 2;
    pcVar10 = pcVar10 + 2;
  } while (bVar3 != 0);
  iVar7 = 0;
LAB_10009ef8:
  if (iVar7 == 0) {
    pcVar10 = s_ID_Tag_has_been_placed_on_the_wa_100771ac;
    CBasePlayerItem::AttemptToMaterialize(this_00);
    iVar7 = *(int *)(param_1 + 4);
    fVar1 = *(float *)(iVar7 + 0xd8);
    fVar2 = *(float *)(iVar7 + 0xcc);
    iVar4 = *(int *)((int)this + 4);
    fVar5 = (*(float *)(iVar7 + 0xd4) + *(float *)(iVar7 + 200)) * _DAT_10059cec;
    *(float *)(iVar4 + 8) = (*(float *)(iVar7 + 0xd0) + *(float *)(iVar7 + 0xc4)) * _DAT_10059cec;
    fVar1 = (fVar1 + fVar2) * _DAT_10059cec;
    *(float *)(iVar4 + 0xc) = fVar5;
    *(float *)(iVar4 + 0x10) = fVar1;
    *(undefined4 *)(*(int *)((int)this + 4) + 0x50) = 0;
    *(undefined4 *)(*(int *)((int)this + 4) + 0x54) = 0;
    *(undefined4 *)(*(int *)((int)this + 4) + 0x58) = 0;
    *(uint *)(*(int *)((int)this + 4) + 0x118) =
         *(uint *)(*(int *)((int)this + 4) + 0x118) & 0xffffff7f;
    *(undefined4 *)(*(int *)((int)this + 4) + 0x108) = 0;
    *(undefined4 *)(*(int *)((int)this + 4) + 0x198) = 0;
    *(undefined4 *)(*(int *)((int)this + 4) + 0x194) = 0;
    *(undefined4 *)(*(int *)((int)this + 4) + 0xb4) = 0;
    (*DAT_1007eed8)(*(undefined4 *)(*(int *)((int)this + 4) + 0x208),
                    *(undefined4 *)((int)this + 0x120),pcVar10);
    CBasePlayerItem::AttemptToMaterialize(this_01);
    if (*(int **)((int)this + 0xdc) != (int *)0x0) {
      FUN_10043fa0(*(int **)((int)this + 0xdc),(int)this);
    }
    CBasePlayerItem::AttemptToMaterialize(this);
    *(undefined4 *)(*(int *)((int)this + 4) + 0x10c) = 0;
    *(uint *)(*(int *)((int)this + 4) + 0x118) = *(uint *)(*(int *)((int)this + 4) + 0x118) | 0x80;
    DVar8 = GetTickCount();
    *(DWORD *)((int)this + 300) = DVar8 + 500;
    CBasePlayerItem::AttemptToMaterialize(this_02);
    CBasePlayerItem::AttemptToMaterialize(this_03);
  }
  return;
}

