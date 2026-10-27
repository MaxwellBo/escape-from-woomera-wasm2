
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CAmbientGeneric::RampThink(void) */

void __thiscall CAmbientGeneric::RampThink(CAmbientGeneric *this)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *this_00;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *this_01;
  int iVar8;
  int iVar9;
  bool bVar10;
  int local_14;
  uint local_10;
  
                    /* 0x92790  172  ?RampThink@CAmbientGeneric@@QAEXXZ */
  iVar7 = *(int *)(this + 4);
  local_14 = *(int *)(this + 0x108);
  local_10 = 0;
  bVar10 = false;
  iVar9 = *(int *)(this + 200);
  this_01 = (char *)(*(int *)(iVar7 + 0x1d4) + *(int *)(DAT_10122044 + 0x98));
  iVar8 = *(int *)(this + 0xf8);
  if (iVar9 == 0) {
    if ((((*(int *)(this + 0xcc) == 0) && (*(int *)(this + 0xd8) == 0)) &&
        (*(int *)(this + 0xdc) == 0)) && (*(int *)(this + 0xe0) == 0)) {
      return;
    }
    if (*(int *)(this + 0xcc) != 0) goto LAB_1009280f;
  }
  else {
LAB_1009280f:
    iVar4 = *(int *)(this + 0x104);
    if (iVar9 < 1) {
      if (0 < *(int *)(this + 0xcc)) {
        iVar9 = -*(int *)(this + 0xcc);
        goto LAB_1009282e;
      }
    }
    else {
LAB_1009282e:
      *(int *)(this + 0x104) = iVar4 + iVar9;
    }
    iVar8 = *(int *)(this + 0x104) >> 8;
    if (*(int *)(this + 0xc0) < *(int *)(this + 0x104) >> 8) {
      *(undefined4 *)(this + 200) = 0;
      iVar8 = *(int *)(this + 0xc0);
    }
    if (iVar8 < *(int *)(this + 0xc4)) {
      *(undefined4 *)(this + 0xcc) = 0;
      if (*(int *)(this + 0x128) == 0) {
        FUN_100af2c0(*(undefined4 *)(iVar7 + 0x208),(undefined4 *)(iVar7 + 8),this_01,0,0,0x20,0);
        return;
      }
      FUN_10094b20(*(void **)(this + 300),*(int *)(this + 0x128),*(void **)(this + 300),this_01,0,0,
                   0x20,100);
      return;
    }
    if (iVar8 < 0x100) {
      if (iVar8 < 1) {
        iVar8 = 1;
      }
    }
    else {
      iVar8 = 0xff;
    }
    bVar10 = iVar4 >> 8 != iVar8;
    *(int *)(this + 0xf8) = iVar8;
    local_10 = 0x80;
  }
  this_00 = *(void **)(this + 0xd8);
  if ((this_00 != (void *)0x0) || (*(int *)(this + 0xdc) != 0)) {
    iVar9 = *(int *)(this + 0x114);
    pvVar2 = this_00;
    if ((int)this_00 < 1) {
      this_00 = *(void **)(this + 0xdc);
      if (0 < (int)this_00) {
        pvVar2 = (void *)-(int)this_00;
        goto LAB_10092921;
      }
    }
    else {
LAB_10092921:
      *(int *)(this + 0x114) = iVar9 + (int)pvVar2;
    }
    local_14 = *(int *)(this + 0x114) >> 8;
    if (*(int *)(this + 0xd0) < *(int *)(this + 0x114) >> 8) {
      *(undefined4 *)(this + 0xd8) = 0;
      local_14 = *(int *)(this + 0xd0);
    }
    if (local_14 < *(int *)(this + 0xd4)) {
      *(undefined4 *)(this + 0xdc) = 0;
      if (*(int *)(this + 0x128) == 0) {
        FUN_100af2c0(*(undefined4 *)(iVar7 + 0x208),(undefined4 *)(iVar7 + 8),this_01,0,0,0x20,0);
        return;
      }
      FUN_10094b20(this_00,*(int *)(this + 0x128),*(undefined4 *)(this + 300),this_01,0,0,0x20,100);
      return;
    }
    if (local_14 < 0x65) {
      if (local_14 < 1) {
        local_14 = 1;
      }
    }
    else {
      local_14 = 100;
    }
    *(int *)(this + 0x108) = local_14;
    bVar10 = (bool)(bVar10 | iVar9 >> 8 != local_14);
    local_10 = local_10 | 0x40;
  }
  iVar7 = *(int *)(this + 0xe0);
  iVar9 = iVar8;
  if (iVar7 == 0) goto LAB_10092b73;
  if (0x6fffffff < *(int *)(this + 0x118)) {
    *(undefined4 *)(this + 0x118) = 0;
  }
  uVar1 = *(uint *)(this + 0xe4);
  iVar4 = *(int *)(this + 0x118) + uVar1;
  *(int *)(this + 0x118) = iVar4;
  iVar5 = iVar4 >> 8;
  uVar6 = (int)uVar1 >> 0x1f;
  if (iVar4 < 0) {
    iVar5 = 0;
    *(undefined4 *)(this + 0x118) = 0;
    iVar4 = (uVar1 ^ uVar6) - uVar6;
LAB_10092a5c:
    *(int *)(this + 0xe4) = iVar4;
  }
  else if (0xff < iVar5) {
    iVar5 = 0xff;
    *(undefined4 *)(this + 0x118) = 0xff00;
    iVar4 = -((uVar1 ^ uVar6) - uVar6);
    goto LAB_10092a5c;
  }
  if (iVar7 == 1) {
    if (iVar5 < 0x80) {
      *(undefined4 *)(this + 0x11c) = 0xff;
    }
    else {
      *(undefined4 *)(this + 0x11c) = 0;
    }
  }
  else if (iVar7 == 3) {
    if (iVar5 == 0xff) {
      uVar3 = (*DAT_10121f70)(0,0xff);
      *(undefined4 *)(this + 0x11c) = uVar3;
    }
  }
  else {
    *(int *)(this + 0x11c) = iVar5;
  }
  if (*(int *)(this + 0xe8) != 0) {
    iVar9 = iVar8 + ((*(int *)(this + 0x11c) + -0x80) * *(int *)(this + 0xe8)) / 100;
    if (iVar9 < 0x100) {
      if (iVar9 < 1) {
        iVar9 = 1;
      }
    }
    else {
      iVar9 = 0xff;
    }
    bVar10 = (bool)(bVar10 | iVar8 != iVar9);
    local_10 = local_10 | 0x80;
  }
  if (*(int *)(this + 0xec) != 0) {
    iVar7 = local_14 + ((*(int *)(this + 0x11c) + -0x80) * *(int *)(this + 0xec)) / 100;
    if (iVar7 < 0x65) {
      if (iVar7 < 0) {
        iVar7 = 0;
      }
    }
    else {
      iVar7 = 100;
    }
    bVar10 = (bool)(bVar10 | local_14 != iVar7);
    local_10 = local_10 | 0x40;
    local_14 = iVar7;
  }
LAB_10092b73:
  if ((local_10 != 0) && (bVar10)) {
    if (iVar9 == 100) {
      iVar9 = 0x65;
    }
    if (*(int *)(this + 0x128) == 0) {
      FUN_100af2c0(*(undefined4 *)(*(int *)(this + 4) + 0x208),
                   (undefined4 *)(*(int *)(this + 4) + 8),this_01,
                   (float)local_14 * (float)_DAT_100dfb88,*(undefined4 *)(this + 0xb8),local_10,
                   iVar9);
    }
    else {
      FUN_10094b20(this_01,*(int *)(this + 0x128),*(undefined4 *)(this + 300),this_01,
                   (float)local_14 * (float)_DAT_100dfb88,*(undefined4 *)(this + 0xb8),local_10,
                   iVar9);
    }
  }
  (**(code **)(*(int *)this + 8))(0x3e4ccccd);
  return;
}

