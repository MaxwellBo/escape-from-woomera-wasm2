
/* WARNING: Unable to track spacebase fully for stack */

void __fastcall FUN_10016661(uint param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  code *pcVar8;
  int *in_EAX;
  int *piVar9;
  byte *pbVar10;
  int iVar11;
  undefined4 uVar12;
  byte *pbVar13;
  undefined1 *this;
  undefined1 *this_00;
  uint uVar15;
  int unaff_EBP;
  int unaff_ESI;
  char *pcVar16;
  undefined4 unaff_EDI;
  int in_GS_OFFSET;
  bool bVar17;
  longlong lVar18;
  undefined1 uStack_1;
  undefined3 uVar14;
  
  in_EAX[-0x80400] = in_EAX[-0x80400] + param_2;
  in_EAX[-0x80400] = in_EAX[-0x80400] + param_2;
  puVar1 = (uint *)(in_EAX + -0x80400);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + param_2;
  uVar5 = *(uint *)(unaff_EBP + 1);
  cRam65331001 = cRam65331001 + (char)(param_1 >> 8) +
                 (CARRY4((uint)&stack0x00000000,*(uint *)(unaff_EBP + 1)) ||
                 CARRY4((uint)(&stack0x00000000 + uVar5),(uint)CARRY4(uVar2,param_2)));
  *in_EAX = *in_EAX + param_2;
  *(int *)(in_GS_OFFSET + (int)in_EAX) = *(int *)(in_GS_OFFSET + (int)in_EAX) + param_2;
  *(int *)(in_GS_OFFSET + (int)in_EAX) = *(int *)(in_GS_OFFSET + (int)in_EAX) + param_2;
  piVar9 = (int *)CONCAT31((int3)((uint)in_EAX >> 8),uRamb9100165);
  puVar1 = (uint *)(in_GS_OFFSET + (int)piVar9);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + param_2;
  pcVar16 = (char *)(unaff_EBP + 1);
  bVar7 = (byte)param_1 & 0x1f;
  cVar4 = *pcVar16;
  *pcVar16 = *pcVar16 << bVar7;
  bVar17 = (param_1 & 0x1f) == 0;
  this = (undefined1 *)
         CONCAT31((int3)(param_1 >> 8),
                  (byte)param_1 + 100 +
                  (bVar17 * CARRY4(uVar3,param_2) | !bVar17 * ((char)(cVar4 << bVar7 - 1) < '\0')));
  *(int *)(in_GS_OFFSET + (int)piVar9) = *(int *)(in_GS_OFFSET + (int)piVar9) + param_2;
  *(int *)(in_GS_OFFSET + (int)piVar9) = *(int *)(in_GS_OFFSET + (int)piVar9) + param_2;
  uVar15 = (uint)(&stack0x00000000 + uVar5 + (CARRY4(uVar2,param_2) - 1)) | *(uint *)(unaff_ESI + 1)
  ;
  cRamd7100164 = cRamd7100164 + (char)((uint)in_EAX >> 8);
  *(short *)piVar9 = (short)*piVar9 + (short)param_2;
  *piVar9 = *piVar9 + param_2;
  *(undefined4 *)(uVar15 - 4) = 0xd7100164;
  *(int *)(uVar15 - 8) = unaff_EBP;
  iVar6 = *(int *)(uVar15 + 4);
  *(int *)(uVar15 - 0xc) = unaff_ESI;
  *(undefined4 *)(uVar15 - 0x10) = unaff_EDI;
  pbVar13 = *(byte **)(iVar6 + 4);
  pcVar16 = s_changetarget_10104b1c;
  pbVar10 = pbVar13;
  this_00 = this;
  do {
    bVar7 = *pbVar10;
    uVar14 = (undefined3)((uint)this_00 >> 8);
    this_00 = (undefined1 *)CONCAT31(uVar14,bVar7);
    bVar17 = bVar7 < (byte)*pcVar16;
    if (bVar7 != *pcVar16) {
LAB_100166e8:
      iVar11 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
      goto LAB_100166ed;
    }
    if (bVar7 == 0) break;
    bVar7 = pbVar10[1];
    this_00 = (undefined1 *)CONCAT31(uVar14,bVar7);
    bVar17 = bVar7 < (byte)pcVar16[1];
    if (bVar7 != pcVar16[1]) goto LAB_100166e8;
    pbVar10 = pbVar10 + 2;
    pcVar16 = pcVar16 + 2;
  } while (bVar7 != 0);
  iVar11 = 0;
LAB_100166ed:
  if (iVar11 == 0) {
    *(undefined4 *)(uVar15 - 0x14) = *(undefined4 *)(iVar6 + 8);
    pcVar8 = DAT_10121f14;
    *(undefined4 *)(uVar15 - 0x18) = 0x100166fb;
    uVar12 = (*pcVar8)();
    *(undefined4 *)(this + 0x164) = uVar12;
    *(undefined4 *)(iVar6 + 0xc) = 1;
    return;
  }
  pcVar16 = s_locked_sound_10104b0c;
  pbVar10 = pbVar13;
  do {
    bVar7 = *pbVar10;
    uVar14 = (undefined3)((uint)this_00 >> 8);
    this_00 = (undefined1 *)CONCAT31(uVar14,bVar7);
    bVar17 = bVar7 < (byte)*pcVar16;
    if (bVar7 != *pcVar16) {
LAB_1001673d:
      iVar11 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
      goto LAB_10016742;
    }
    if (bVar7 == 0) break;
    bVar7 = pbVar10[1];
    this_00 = (undefined1 *)CONCAT31(uVar14,bVar7);
    bVar17 = bVar7 < (byte)pcVar16[1];
    if (bVar7 != pcVar16[1]) goto LAB_1001673d;
    pbVar10 = pbVar10 + 2;
    pcVar16 = pcVar16 + 2;
  } while (bVar7 != 0);
  iVar11 = 0;
LAB_10016742:
  if (iVar11 == 0) {
    *(undefined4 *)(uVar15 - 0x14) = *(undefined4 *)(iVar6 + 8);
    *(undefined4 *)(uVar15 - 0x18) = 0x1001674f;
    FUN_100c82a6(this_00,*(byte **)(uVar15 - 0x14));
    *(undefined4 *)(uVar15 - 0x14) = 0x10016757;
    lVar18 = __ftol();
    this[0x18c] = (char)lVar18;
    *(undefined4 *)(iVar6 + 0xc) = 1;
    return;
  }
  pcVar16 = s_locked_sentence_10104afc;
  pbVar10 = pbVar13;
  do {
    bVar7 = *pbVar10;
    uVar14 = (undefined3)((uint)this_00 >> 8);
    this_00 = (undefined1 *)CONCAT31(uVar14,bVar7);
    bVar17 = bVar7 < (byte)*pcVar16;
    if (bVar7 != *pcVar16) {
LAB_10016796:
      iVar11 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
      goto LAB_1001679b;
    }
    if (bVar7 == 0) break;
    bVar7 = pbVar10[1];
    this_00 = (undefined1 *)CONCAT31(uVar14,bVar7);
    bVar17 = bVar7 < (byte)pcVar16[1];
    if (bVar7 != pcVar16[1]) goto LAB_10016796;
    pbVar10 = pbVar10 + 2;
    pcVar16 = pcVar16 + 2;
  } while (bVar7 != 0);
  iVar11 = 0;
LAB_1001679b:
  if (iVar11 == 0) {
    *(undefined4 *)(uVar15 - 0x14) = *(undefined4 *)(iVar6 + 8);
    *(undefined4 *)(uVar15 - 0x18) = 0x100167a8;
    FUN_100c82a6(this_00,*(byte **)(uVar15 - 0x14));
    *(undefined4 *)(uVar15 - 0x14) = 0x100167b0;
    lVar18 = __ftol();
    this[0x18d] = (char)lVar18;
    *(undefined4 *)(iVar6 + 0xc) = 1;
    return;
  }
  pcVar16 = s_unlocked_sound_10104aec;
  pbVar10 = pbVar13;
  do {
    bVar7 = *pbVar10;
    uVar14 = (undefined3)((uint)this_00 >> 8);
    this_00 = (undefined1 *)CONCAT31(uVar14,bVar7);
    bVar17 = bVar7 < (byte)*pcVar16;
    if (bVar7 != *pcVar16) {
LAB_100167ef:
      iVar11 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
      goto LAB_100167f4;
    }
    if (bVar7 == 0) break;
    bVar7 = pbVar10[1];
    this_00 = (undefined1 *)CONCAT31(uVar14,bVar7);
    bVar17 = bVar7 < (byte)pcVar16[1];
    if (bVar7 != pcVar16[1]) goto LAB_100167ef;
    pbVar10 = pbVar10 + 2;
    pcVar16 = pcVar16 + 2;
  } while (bVar7 != 0);
  iVar11 = 0;
LAB_100167f4:
  if (iVar11 == 0) {
    *(undefined4 *)(uVar15 - 0x14) = *(undefined4 *)(iVar6 + 8);
    *(undefined4 *)(uVar15 - 0x18) = 0x10016801;
    FUN_100c82a6(this_00,*(byte **)(uVar15 - 0x14));
    *(undefined4 *)(uVar15 - 0x14) = 0x10016809;
    lVar18 = __ftol();
    this[0x18e] = (char)lVar18;
    *(undefined4 *)(iVar6 + 0xc) = 1;
    return;
  }
  pcVar16 = s_unlocked_sentence_10104ad8;
  pbVar10 = pbVar13;
  do {
    bVar7 = *pbVar10;
    uVar14 = (undefined3)((uint)this_00 >> 8);
    this_00 = (undefined1 *)CONCAT31(uVar14,bVar7);
    bVar17 = bVar7 < (byte)*pcVar16;
    if (bVar7 != *pcVar16) {
LAB_10016848:
      iVar11 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
      goto LAB_1001684d;
    }
    if (bVar7 == 0) break;
    bVar7 = pbVar10[1];
    this_00 = (undefined1 *)CONCAT31(uVar14,bVar7);
    bVar17 = bVar7 < (byte)pcVar16[1];
    if (bVar7 != pcVar16[1]) goto LAB_10016848;
    pbVar10 = pbVar10 + 2;
    pcVar16 = pcVar16 + 2;
  } while (bVar7 != 0);
  iVar11 = 0;
LAB_1001684d:
  if (iVar11 == 0) {
    *(undefined4 *)(uVar15 - 0x14) = *(undefined4 *)(iVar6 + 8);
    *(undefined4 *)(uVar15 - 0x18) = 0x1001685a;
    FUN_100c82a6(this_00,*(byte **)(uVar15 - 0x14));
    *(undefined4 *)(uVar15 - 0x14) = 0x10016862;
    lVar18 = __ftol();
    this[399] = (char)lVar18;
    *(undefined4 *)(iVar6 + 0xc) = 1;
    return;
  }
  pcVar16 = s_sounds_10103c4c;
  do {
    bVar7 = *pbVar13;
    uVar14 = (undefined3)((uint)this_00 >> 8);
    this_00 = (undefined1 *)CONCAT31(uVar14,bVar7);
    bVar17 = bVar7 < (byte)*pcVar16;
    if (bVar7 != *pcVar16) {
LAB_100168a1:
      iVar11 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
      goto LAB_100168a6;
    }
    if (bVar7 == 0) break;
    bVar7 = pbVar13[1];
    this_00 = (undefined1 *)CONCAT31(uVar14,bVar7);
    bVar17 = bVar7 < (byte)pcVar16[1];
    if (bVar7 != pcVar16[1]) goto LAB_100168a1;
    pbVar13 = pbVar13 + 2;
    pcVar16 = pcVar16 + 2;
  } while (bVar7 != 0);
  iVar11 = 0;
LAB_100168a6:
  if (iVar11 == 0) {
    *(undefined4 *)(uVar15 - 0x14) = *(undefined4 *)(iVar6 + 8);
    *(undefined4 *)(uVar15 - 0x18) = 0x100168b3;
    uVar12 = FUN_100c8388(this_00,*(byte **)(uVar15 - 0x14));
    *(undefined4 *)(this + 400) = uVar12;
    *(undefined4 *)(iVar6 + 0xc) = 1;
    return;
  }
  *(int *)(uVar15 - 0x14) = iVar6;
  *(undefined4 *)(uVar15 - 0x18) = 0x100168d2;
  FUN_100991d0(this,*(int *)(uVar15 - 0x14));
  return;
}

