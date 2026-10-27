
/* WARNING: Instruction at (ram,0x1003736e) overlaps instruction at (ram,0x1003736b)
    */

void __fastcall FUN_1003733d(byte *param_1,uint param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint *in_EAX;
  uint uVar7;
  int unaff_EBX;
  uint uVar8;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  byte in_AF;
  bool bVar12;
  longlong lVar13;
  byte *pbVar14;
  
  pbVar2 = (byte *)(unaff_EDI + 1);
  uVar3 = in((short)param_2);
  *unaff_EDI = uVar3;
  pbVar14 = (byte *)(unaff_ESI + 1);
  out(*unaff_ESI,(short)param_2);
  uVar7 = param_2 + *in_EAX;
  uVar8 = unaff_EBX - 1;
  if (CARRY4(param_2,*in_EAX)) {
    bVar9 = CARRY4(uVar7,*in_EAX);
    uVar7 = uVar7 + *in_EAX;
    *(byte **)((int)in_EAX + 3) = pbVar14;
    pbVar1 = (byte *)(unaff_ESI + -0xbbbff23);
    bVar5 = (byte)((uint)in_EAX >> 8);
    bVar4 = *pbVar1 + bVar5;
    bVar11 = CARRY1(*pbVar1,bVar5) || CARRY1(bVar4,bVar9);
    bVar12 = SCARRY1(*pbVar1,bVar5) != SCARRY1(bVar4,bVar9);
    *pbVar1 = bVar4 + bVar9;
code_r0x10037355:
    if (bVar12) {
      FUN_10036920((int *)param_1);
      (**(code **)(*(int *)param_1 + 0x24))(1,pbVar14);
      (**(code **)(*(int *)(param_1 + 0x2678c) + 0x24))(1);
      return;
    }
  }
  else {
    pbVar1 = (byte *)((int)in_EAX + (int)pbVar14 * 2 + 3);
    bVar4 = (byte)((uint)param_1 >> 8);
    bVar9 = CARRY1(*pbVar1,bVar4);
    *pbVar1 = *pbVar1 + bVar4;
    pbVar1 = param_1 + -0x59effc90;
    bVar6 = (byte)param_1;
    bVar4 = *pbVar1;
    bVar5 = *pbVar1 + bVar6;
    bVar10 = CARRY1(*pbVar1,bVar6) || CARRY1(bVar5,bVar9);
    *pbVar1 = bVar5 + bVar9;
    if (SCARRY1(bVar4,bVar6) == SCARRY1(bVar5,bVar9)) {
      bVar5 = (byte)uVar7;
      bVar4 = bVar6 + bVar5;
      bVar11 = CARRY1(bVar6,bVar5) || CARRY1(bVar4,bVar10);
      bVar12 = SCARRY1(bVar6,bVar5) != SCARRY1(bVar4,bVar10);
      param_1 = (byte *)CONCAT31((int3)((uint)param_1 >> 8),bVar4 + bVar10);
      goto code_r0x10037355;
    }
    bVar11 = CARRY4(uVar7,*in_EAX);
    uVar7 = uVar7 + *in_EAX;
  }
  bVar6 = (byte)uVar8;
  bVar4 = *pbVar14;
  bVar5 = *pbVar14 + bVar6;
  bVar9 = CARRY1(*pbVar14,bVar6) || CARRY1(bVar5,bVar11);
  *pbVar14 = bVar5 + bVar11;
  if (SCARRY1(bVar4,bVar6) == SCARRY1(bVar5,bVar11)) {
    uVar7 = uVar7 + *in_EAX;
    bVar9 = false;
    *(uint *)(uVar7 + 3) = *(uint *)(uVar7 + 3) | (uint)pbVar14;
code_r0x10037363:
    bVar5 = *pbVar2;
    bVar6 = (byte)((uint)in_EAX >> 8);
    bVar4 = *pbVar2;
    *pbVar2 = bVar4 + bVar6 + bVar9;
    if ((!CARRY1(bVar5,bVar6) && !CARRY1(bVar4 + bVar6,bVar9)) &&
       (bVar4 = (byte)(uVar8 >> 8), !SCARRY1(bVar4,bVar6))) {
      *(char *)(in_EAX + -0x1d1bdbdc) =
           (char)in_EAX[-0x1d1bdbdc] + (char)uVar7 + CARRY1(bVar4,bVar6);
      param_4 = (uint)in_EAX & 0xffffff08;
    }
  }
  else {
    bVar4 = (byte)((uint)param_1 >> 8);
    bVar11 = CARRY1(bVar6,bVar4) || CARRY1(bVar6 + bVar4,bVar9);
    uVar8 = uVar8 & 0xffffff00;
    if (SCARRY1(bVar6,bVar4) == SCARRY1(bVar6 + bVar4,bVar9)) {
      bVar9 = CARRY4(uVar7,*in_EAX);
      uVar7 = uVar7 + *in_EAX;
      bVar4 = (byte)in_EAX;
      bVar9 = 0x99 < bVar4 || bVar9;
      in_EAX = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),
                                bVar4 + (9 < (bVar4 & 0xf) | in_AF) * '\x06' + bVar9 * '`');
      goto code_r0x10037363;
    }
    bVar4 = *param_1;
    bVar6 = (byte)param_1;
    bVar5 = *param_1 + bVar6;
    bVar12 = CARRY1(bVar5,bVar11);
    bVar9 = CARRY1(bVar4,bVar6) || bVar12;
    *param_1 = bVar5 + bVar11;
    if (!CARRY1(bVar4,bVar6) && !bVar12) goto code_r0x10037363;
    out(0x70,in_EAX);
  }
  uVar7 = *(uint *)(param_1 + 0x2684c);
  if (param_4 == uVar7) {
    uVar8 = param_3;
    if (param_3 != 0) goto LAB_10037395;
  }
  else if (param_3 != 0) {
    return;
  }
  uVar8 = uVar7;
LAB_10037395:
  *(uint *)(param_1 + 0x26ae8) = uVar8;
  lVar13 = __ftol();
  *(int *)(param_1 + 0x26aec) = (int)lVar13;
  if (param_3 == uVar7) {
    *(uint *)(param_1 + 0x26ae8) = uVar7;
  }
  return;
}

