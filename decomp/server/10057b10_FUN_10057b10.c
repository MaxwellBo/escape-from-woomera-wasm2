
void __thiscall FUN_10057b10(void *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  bool bVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined1 auStack_40 [64];
  
  pcVar7 = s__light_101101f8;
  pbVar2 = *(byte **)(param_2 + 4);
  do {
    bVar1 = *pbVar2;
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10057b4d:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10057b52;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10057b4d;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10057b52:
  if (iVar3 != 0) {
    FUN_10057390(param_1,param_2);
    return;
  }
  iVar3 = FUN_100c8a86(*(char **)(param_2 + 8),(byte *)s__d__d__d__d_101101e8);
  if ((iVar3 != 1) && (iVar3 == 4)) {
    __ftol();
    __ftol();
    __ftol();
  }
  FUN_100c8ac0();
  lVar9 = __ftol();
  uVar4 = (undefined4)lVar9;
  FUN_100c8ac0();
  lVar9 = __ftol();
  uVar5 = (undefined4)lVar9;
  FUN_100c8ac0();
  lVar9 = __ftol();
  uVar6 = (undefined4)lVar9;
  puVar10 = auStack_40;
  puVar11 = &DAT_101083c8;
  *(undefined4 *)(param_2 + 0xc) = 1;
  FUN_100c8506(puVar10,&DAT_101083c8);
  (*DAT_10121ef8)(s_sv_skycolor_r_101101d8,auStack_40,puVar10,puVar11,uVar4);
  puVar10 = auStack_40;
  puVar11 = &DAT_101083c8;
  FUN_100c8506(puVar10,&DAT_101083c8);
  (*DAT_10121ef8)(s_sv_skycolor_g_101101c8,auStack_40,puVar10,puVar11,uVar5);
  puVar10 = auStack_40;
  puVar11 = &DAT_101083c8;
  FUN_100c8506(puVar10,&DAT_101083c8);
  (*DAT_10121ef8)(s_sv_skycolor_b_101101b8,auStack_40,puVar10,puVar11,uVar6);
  return;
}

