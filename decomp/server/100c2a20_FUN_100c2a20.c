
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100c2a20(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  float fVar5;
  byte *pbVar6;
  DWORD DVar7;
  int iVar8;
  char *pcVar9;
  bool bVar10;
  
  iVar8 = *(int *)(*(int *)(param_1 + 4) + 0x208);
  if (iVar8 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = iVar8 + 0x80;
  }
  pcVar9 = s_efw_IDTag_Position_1011c664;
  pbVar6 = (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(iVar8 + 0x1cc));
  do {
    bVar3 = *pbVar6;
    bVar10 = bVar3 < (byte)*pcVar9;
    if (bVar3 != *pcVar9) {
LAB_100c2a83:
      iVar8 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_100c2a88;
    }
    if (bVar3 == 0) break;
    bVar3 = pbVar6[1];
    bVar10 = bVar3 < (byte)pcVar9[1];
    if (bVar3 != pcVar9[1]) goto LAB_100c2a83;
    pbVar6 = pbVar6 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar3 != 0);
  iVar8 = 0;
LAB_100c2a88:
  if (iVar8 == 0) {
    FUN_100b0fe0((byte *)s_ID_Tag_has_been_placed_on_the_wa_1011c6ac);
    iVar8 = *(int *)(param_1 + 4);
    fVar1 = *(float *)(iVar8 + 0xd8);
    fVar2 = *(float *)(iVar8 + 0xcc);
    iVar4 = *(int *)((int)this + 4);
    fVar5 = (*(float *)(iVar8 + 0xd4) + *(float *)(iVar8 + 200)) * _DAT_100dd614;
    *(float *)(iVar4 + 8) = (*(float *)(iVar8 + 0xd0) + *(float *)(iVar8 + 0xc4)) * _DAT_100dd614;
    fVar1 = (fVar1 + fVar2) * _DAT_100dd614;
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
    (*DAT_10121e10)(*(undefined4 *)(*(int *)((int)this + 4) + 0x208),
                    *(undefined4 *)((int)this + 0x120));
    FUN_100afe10((int)this,*(int *)((int)this + 4) + 8);
    if (*(int **)((int)this + 0xdc) != (int *)0x0) {
      FUN_100c2e20(*(int **)((int)this + 0xdc),this);
    }
    CBasePlayerItem::Materialize(this);
    *(undefined4 *)(*(int *)((int)this + 4) + 0x10c) = 0;
    *(uint *)(*(int *)((int)this + 4) + 0x118) = *(uint *)(*(int *)((int)this + 4) + 0x118) | 0x80;
    DVar7 = GetTickCount();
    *(DWORD *)((int)this + 300) = DVar7 + 500;
    FUN_100c3500(s_Player_sIDTagOnFence_1011c678,1);
    FUN_100ba040((byte *)s_efw_compound_gate_guard_1010318c,s_Okay_RAR_124__you_can_pass__1011c690,4
                );
  }
  return;
}

