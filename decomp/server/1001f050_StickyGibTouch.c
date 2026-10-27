
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CGib::StickyGibTouch(class CBaseEntity *) */

void __thiscall CGib::StickyGibTouch(CGib *this,CBaseEntity *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  bool bVar6;
  int unaff_retaddr;
  undefined1 auStack_3c [36];
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
                    /* 0x1f050  228  ?StickyGibTouch@CGib@@QAEXPAVCBaseEntity@@@Z */
  *(code **)(this + 0x74) = CBaseEntity::SUB_Remove;
  (**(code **)(*(int *)this + 8))(0x41200000);
  pcVar5 = s_worldspawn_10101338;
  pbVar2 = (byte *)(**(int **)(unaff_retaddr + 4) + *(int *)(DAT_10122044 + 0x98));
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_1001f0ad:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_1001f0b2;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_1001f0ad;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1001f0b2:
  if (iVar3 != 0) {
    (**(code **)(*(int *)this + 8))(0);
    return;
  }
  FUN_100afc60(*(int *)(this + 4) + 8,&stack0xffffffb8,1,*(undefined4 *)(*(int *)(this + 4) + 0x208)
               ,auStack_3c);
  FUN_100b0400((int)auStack_3c,*(int *)(this + 0xb8));
  iVar3 = *(int *)(this + 4);
  fStack_14 = fStack_14 * _DAT_100df2b0;
  fStack_10 = fStack_10 * _DAT_100df2b0;
  *(float *)(iVar3 + 0x20) = fStack_18 * _DAT_100df2b0;
  *(float *)(iVar3 + 0x24) = fStack_14;
  *(float *)(iVar3 + 0x28) = fStack_10;
  puVar4 = (undefined4 *)FUN_100ae830((undefined4 *)&stack0xffffffb8,*(int *)(this + 4) + 0x20);
  iVar3 = *(int *)(this + 4);
  *(undefined4 *)(iVar3 + 0x50) = *puVar4;
  *(undefined4 *)(iVar3 + 0x54) = puVar4[1];
  *(undefined4 *)(iVar3 + 0x58) = puVar4[2];
  iVar3 = *(int *)(this + 4);
  *(undefined4 *)(iVar3 + 0x20) = DAT_10121dd8;
  *(undefined4 *)(iVar3 + 0x24) = DAT_10121ddc;
  *(undefined4 *)(iVar3 + 0x28) = DAT_10121de0;
  iVar3 = *(int *)(this + 4);
  *(undefined4 *)(iVar3 + 0x5c) = DAT_10121dd8;
  *(undefined4 *)(iVar3 + 0x60) = DAT_10121ddc;
  *(undefined4 *)(iVar3 + 100) = DAT_10121de0;
  *(undefined4 *)(*(int *)(this + 4) + 0x108) = 0;
  return;
}

