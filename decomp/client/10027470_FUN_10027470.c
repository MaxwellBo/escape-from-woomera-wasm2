
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10027470(void)

{
  bool bVar1;
  float fVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  float10 fVar7;
  float10 fVar8;
  longlong lVar9;
  float local_28;
  float local_20;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  float local_4;
  
  if (0 < *(int *)(DAT_100acc38 + 0x94)) {
    return;
  }
  if ((*(uint *)(DAT_100acc38 + 0xb8) & 0x1000) != 0) {
    return;
  }
  FUN_10027370();
  fVar7 = FUN_100264c0((float *)(DAT_100acc38 + 0x5c));
  bVar6 = *(int *)(DAT_100acc38 + 0xdc) == 5;
  if (((*(uint *)(DAT_100acc38 + 0xb8) & 0x4000) != 0) || (bVar6)) {
    local_28 = 60.0;
    local_20 = 80.0;
    if (bVar6) goto LAB_10027513;
  }
  else {
    local_28 = 120.0;
    local_20 = 210.0;
  }
  if (*(int *)(DAT_100acc38 + 0xe0) == -1) {
    return;
  }
LAB_10027513:
  fVar8 = FUN_100264c0((float *)(DAT_100acc38 + 0x5c));
  if (((float10)_DAT_1005d2a8 < fVar8) &&
     ((local_28 <= (float)fVar7 || (*(int *)(DAT_100acc38 + 0x94) == 0)))) {
    bVar1 = (float)fVar7 < local_20;
    local_18 = *(undefined4 *)(DAT_100acc38 + 0x38);
    local_14 = *(undefined4 *)(DAT_100acc38 + 0x3c);
    local_c = *(undefined4 *)(DAT_100acc38 + 0x38);
    local_8 = *(undefined4 *)(DAT_100acc38 + 0x3c);
    fVar2 = *(float *)(DAT_100acc38 + 0x4f52c + *(int *)(DAT_100acc38 + 0xbc) * 0xc) -
            *(float *)(DAT_100acc38 + 0x4f4fc + *(int *)(DAT_100acc38 + 0xbc) * 0xc);
    local_10 = *(float *)(DAT_100acc38 + 0x40) - fVar2 * (float)_DAT_1005ac70;
    local_4 = *(float *)(DAT_100acc38 + 0x40) - fVar2 * (float)_DAT_100599f0;
    if (bVar6) {
      iVar5 = 8;
      local_28 = 0.35;
      *(undefined4 *)(DAT_100acc38 + 0x94) = 0x15e;
    }
    else {
      iVar5 = (**(code **)(DAT_100acc38 + 0x4f574))(&local_18,0);
      if (iVar5 == -3) {
        iVar5 = 7;
        local_28 = 0.65;
        *(undefined4 *)(DAT_100acc38 + 0x94) = 600;
      }
      else {
        iVar5 = (**(code **)(DAT_100acc38 + 0x4f574))(&local_c,0);
        if (iVar5 == -3) {
          iVar5 = 6;
          dVar3 = _DAT_100599f0;
          if (bVar1) {
            dVar3 = _DAT_1005acd0;
          }
          local_28 = (float)dVar3;
          *(uint *)(DAT_100acc38 + 0x94) = (-(uint)bVar1 & 100) + 300;
        }
        else {
          iVar5 = FUN_100272f0(*(undefined1 *)(DAT_100acc38 + 0x1f0));
          switch(*(undefined1 *)(DAT_100acc38 + 0x1f0)) {
          case 0x44:
            if (bVar1) {
              local_28 = (float)_DAT_10059cf0;
            }
            else {
              local_28 = (float)_DAT_10060218;
            }
            break;
          default:
            if (bVar1) {
              local_28 = (float)_DAT_1005acd0;
            }
            else {
              local_28 = (float)_DAT_100599f0;
            }
            break;
          case 0x56:
            if (bVar1) {
              local_28 = (float)_DAT_1005fa60;
            }
            else {
              local_28 = (float)_DAT_1005d770;
            }
          }
          *(uint *)(DAT_100acc38 + 0x94) = (-(uint)bVar1 & 100) + 300;
        }
      }
    }
    iVar4 = DAT_100acc38;
    lVar9 = __ftol();
    *(int *)(iVar4 + 0x94) = (int)lVar9;
    if ((*(uint *)(DAT_100acc38 + 0xb8) & 0x4000) != 0) {
      local_28 = local_28 * (float)_DAT_10060210;
    }
    FUN_10026a40(iVar5,local_28);
  }
  return;
}

