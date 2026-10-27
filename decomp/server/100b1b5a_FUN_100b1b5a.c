
void __fastcall FUN_100b1b5a(int param_1,undefined4 param_2,undefined4 *param_3,uint param_4)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  uint *in_EAX;
  uint *puVar5;
  byte bVar6;
  byte bVar10;
  uint uVar7;
  byte bVar11;
  byte bVar12;
  undefined2 uVar15;
  uint uVar8;
  byte bVar13;
  undefined3 uVar14;
  uint uVar9;
  void *this;
  uint uVar16;
  uint uVar17;
  char cVar18;
  uint *unaff_EBX;
  int unaff_EBP;
  bool bVar20;
  bool bVar21;
  uint uStack_4;
  uint *puVar19;
  
  bVar20 = false;
  uVar16 = CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(0x19,(char)param_2)) | *in_EAX;
  uVar7 = param_1 - 1;
  bVar3 = (byte)in_EAX;
  if (uVar7 == 0 || uVar16 == 0) {
    uVar16 = uVar16 | *in_EAX;
    bVar20 = *unaff_EBX < uVar7 || *unaff_EBX - uVar7 == 0;
    *unaff_EBX = (*unaff_EBX - uVar7) - 1;
    bVar12 = (byte)(uVar7 >> 8);
    bVar4 = (byte)(uVar16 >> 8);
    bVar11 = bVar12 + bVar4;
    uVar15 = (undefined2)(uVar7 >> 0x10);
    bVar6 = (byte)uVar7;
    bVar10 = bVar11 + bVar20;
    uVar9 = CONCAT22(uVar15,CONCAT11(bVar10,bVar6));
    uVar7 = (uint)(CARRY1(bVar12,bVar4) || CARRY1(bVar11,bVar20));
    uVar8 = *unaff_EBX - uVar9;
    bVar20 = *unaff_EBX < uVar9 || uVar8 < uVar7;
    *unaff_EBX = uVar8 - uVar7;
    bVar11 = bVar10 + bVar4 + bVar20;
    uVar9 = CONCAT22(uVar15,CONCAT11(bVar11,bVar6));
    uVar7 = (uint)(CARRY1(bVar10,bVar4) || CARRY1(bVar10 + bVar4,bVar20));
    uVar8 = *unaff_EBX - uVar9;
    bVar20 = *unaff_EBX < uVar9 || uVar8 < uVar7;
    *unaff_EBX = uVar8 - uVar7;
    bVar12 = bVar11 + bVar4 + bVar20;
    uVar9 = CONCAT22(uVar15,CONCAT11(bVar12,bVar6));
    uVar7 = (uint)(CARRY1(bVar11,bVar4) || CARRY1(bVar11 + bVar4,bVar20));
    uVar8 = *unaff_EBX - uVar9;
    bVar20 = *unaff_EBX < uVar9 || uVar8 < uVar7;
    *unaff_EBX = uVar8 - uVar7;
    uVar8 = CONCAT22(uVar15,CONCAT11(bVar12 + bVar4 + bVar20,bVar6));
    uVar7 = (uint)(CARRY1(bVar12,bVar4) || CARRY1(bVar12 + bVar4,bVar20));
    bVar20 = *unaff_EBX < uVar8 || *unaff_EBX - uVar8 < uVar7;
    *unaff_EBX = (*unaff_EBX - uVar8) - uVar7;
    bVar11 = (byte)uVar16 + bVar3;
    bVar21 = CARRY1((byte)uVar16,bVar3) || CARRY1(bVar11,bVar20);
    uVar16 = CONCAT31((int3)(uVar16 >> 8),bVar11 + bVar20);
    bVar11 = bVar6 - (char)*unaff_EBX;
    bVar20 = bVar6 < (byte)*unaff_EBX || bVar11 < bVar21;
    uVar7 = CONCAT31((int3)(uVar8 >> 8),bVar11 - bVar21);
  }
  pbVar2 = (byte *)((int)in_EAX + -0x5eff4e6);
  bVar6 = (byte)(uVar16 >> 8);
  bVar11 = *pbVar2 + bVar6;
  bVar21 = CARRY1(*pbVar2,bVar6) || CARRY1(bVar11,bVar20);
  *pbVar2 = bVar11 + bVar20;
  bVar6 = (byte)uVar7 - (char)*unaff_EBX;
  bVar20 = (byte)uVar7 < (byte)*unaff_EBX || bVar6 < bVar21;
  uVar14 = (undefined3)(uVar7 >> 8);
  bVar6 = bVar6 - bVar21;
  bVar12 = (byte)((uint)unaff_EBX >> 8);
  bVar11 = (byte)uVar16 + bVar12;
  bVar21 = CARRY1((byte)uVar16,bVar12) || CARRY1(bVar11,bVar20);
  bVar12 = bVar6 - (char)*unaff_EBX;
  bVar10 = bVar12 - bVar21;
  *(char *)((int)unaff_EBX * 2) =
       *(char *)((int)unaff_EBX * 2) + bVar10 + (bVar6 < (byte)*unaff_EBX || bVar12 < bVar21);
  uVar17 = CONCAT31((int3)(uVar16 >> 8),bVar11 + bVar20) | *in_EAX;
  bVar20 = bVar10 < (byte)*unaff_EBX;
  bVar10 = bVar10 - (char)*unaff_EBX;
  bVar6 = (byte)((uint)in_EAX >> 8);
  bVar12 = (byte)uVar17;
  bVar11 = bVar6 + bVar12;
  bVar21 = CARRY1(bVar6,bVar12) || CARRY1(bVar11,bVar20);
  bVar11 = bVar11 + bVar20;
  bVar6 = bVar10 - (char)*unaff_EBX;
  bVar20 = bVar10 < (byte)*unaff_EBX || bVar6 < bVar21;
  bVar6 = bVar6 - bVar21;
  bVar13 = (byte)(uVar7 >> 8);
  bVar21 = CARRY1(bVar3,bVar13) || CARRY1(bVar3 + bVar13,bVar20);
  bVar10 = bVar3 + bVar13 + bVar20;
  bVar12 = bVar6 - (char)*unaff_EBX;
  bVar20 = bVar6 < (byte)*unaff_EBX || bVar12 < bVar21;
  bVar12 = bVar12 - bVar21;
  uVar9 = CONCAT31(uVar14,bVar12);
  bVar6 = (byte)unaff_EBX + bVar12;
  cVar18 = bVar6 + bVar20;
  puVar19 = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar18);
  uVar7 = (uint)(CARRY1((byte)unaff_EBX,bVar12) || CARRY1(bVar6,bVar20));
  bVar20 = *puVar19 < uVar9 || *puVar19 - uVar9 < uVar7;
  *puVar19 = (*puVar19 - uVar9) - uVar7;
  bVar6 = bVar10 + bVar11;
  bVar4 = bVar6 + bVar20;
  uVar7 = (uint)(CARRY1(bVar10,bVar11) || CARRY1(bVar6,bVar20));
  bVar20 = *puVar19 < uVar9 || *puVar19 - uVar9 < uVar7;
  *puVar19 = (*puVar19 - uVar9) - uVar7;
  bVar6 = bVar4 + bVar11;
  puVar5 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)in_EAX >> 0x10),CONCAT11(bVar11,bVar3)) >>
                                  8),bVar6 + bVar20);
  uVar8 = (uint)(CARRY1(bVar4,bVar11) || CARRY1(bVar6,bVar20));
  uVar16 = *puVar19;
  uVar7 = *puVar19;
  *puVar19 = (uVar7 - uVar9) - uVar8;
  *(char *)(unaff_EBP + 0x1a) =
       *(char *)(unaff_EBP + 0x1a) + cVar18 + (uVar16 < uVar9 || uVar7 - uVar9 < uVar8);
  uVar17 = uVar17 | *puVar5;
  bVar3 = bVar12 - (char)*puVar19;
  pcVar1 = (char *)(uVar17 + 0x19);
  *pcVar1 = *pcVar1 + bVar13 + (bVar12 < (byte)*puVar19);
  bVar11 = bVar3 - (char)*puVar19;
  this = (void *)CONCAT31(uVar14,bVar11 - (puVar5 < (uint *)0x50100b1a));
  *(byte *)(puVar5 + -0x1bdbdbdc) =
       (char)puVar5[-0x1bdbdbdc] + ((char)uVar17 - 1U | (byte)*puVar5) +
       (bVar3 < (byte)*puVar19 || bVar11 < (puVar5 < (uint *)0x50100b1a));
  uStack_4 = (uint)this & 0xffffff;
  FUN_100b1ca0(this,param_3,param_4);
  FUN_100b1ca0(this,(undefined4 *)((int)&uStack_4 + 3),1);
  return;
}

