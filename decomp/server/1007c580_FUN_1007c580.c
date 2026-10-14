
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1007c580(void *this,uint param_1)

{
  uint *puVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  char *pcVar9;
  char *pcVar10;
  byte *pbVar11;
  int iVar12;
  float local_44;
  byte local_40 [64];
  
  iVar4 = *(int *)((int)this + 4);
  local_44 = SQRT(*(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) +
                  *(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20));
  if ((*(uint *)(iVar4 + 0x1a4) & 0x1000) == 0) {
    if (param_1 < 6) goto switchD_1007c5ce_switchD;
  }
  else {
    local_44 = 0.0;
switchD_1007c5ce_switchD:
    switch(param_1) {
    default:
      if (((*(uint *)(iVar4 + 0x1a4) & 0x200) == 0) &&
         ((iVar12 = *(int *)((int)this + 0x1cc), iVar12 == 7 || (iVar12 == 8)))) {
        *(int *)((int)this + 0x1d0) = iVar12;
      }
      else if ((*(int *)(iVar4 + 0x1c0) < 2) || (*(int *)(iVar4 + 0x1c4) == -0x13)) {
        *(undefined4 *)((int)this + 0x1d0) = 3;
      }
      else if (local_44 == _DAT_100dd5f8) {
        *(undefined4 *)((int)this + 0x1d0) = 0x32;
      }
      else {
        *(undefined4 *)((int)this + 0x1d0) = 6;
      }
      break;
    case 2:
      *(undefined4 *)((int)this + 0x1d0) = 7;
      break;
    case 3:
      *(undefined4 *)((int)this + 0x1d0) = 8;
      break;
    case 4:
      *(undefined4 *)((int)this + 0x1d0) = 0x24;
      uVar5 = (**(code **)(*(int *)this + 0x1fc))();
      *(undefined4 *)((int)this + 0x1d0) = uVar5;
      break;
    case 5:
      switch(*(undefined4 *)((int)this + 0x1cc)) {
      case 6:
      case 7:
      case 8:
      case 0x24:
      case 0x32:
        *(undefined4 *)((int)this + 0x1d0) = *(undefined4 *)((int)this + 0x1cc);
        break;
      default:
        *(undefined4 *)((int)this + 0x1d0) = 0x1c;
      }
    }
  }
  iVar4 = *(int *)((int)this + 0x1d0);
  if (iVar4 == 3) {
    if ((*(int *)((int)this + 0x1cc) == 0x1c) && (*(int *)((int)this + 0xd4) == 0)) {
      iVar4 = *(int *)(*(int *)((int)this + 4) + 0x128);
    }
    else {
      pcVar9 = s_crouch_aim__10114e18;
      if ((*(uint *)(*(int *)((int)this + 4) + 0x1a4) & 0x4000) == 0) {
        pcVar9 = &DAT_10114e0c;
      }
      uVar6 = 0xffffffff;
      do {
        pcVar10 = pcVar9;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar10 = pcVar9 + 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar2 != '\0');
      uVar6 = ~uVar6;
      pbVar8 = (byte *)(pcVar10 + -uVar6);
      pbVar11 = local_40;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pbVar11 = *(undefined4 *)pbVar8;
        pbVar8 = pbVar8 + 4;
        pbVar11 = pbVar11 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pbVar11 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        pbVar11 = pbVar11 + 1;
      }
      uVar6 = 0xffffffff;
      pcVar9 = (char *)((int)this + 0x66c);
      do {
        pcVar10 = pcVar9;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar10 = pcVar9 + 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar2 != '\0');
      uVar6 = ~uVar6;
      iVar4 = -1;
      pbVar8 = local_40;
      do {
        pbVar11 = pbVar8;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pbVar11 = pbVar8 + 1;
        bVar3 = *pbVar8;
        pbVar8 = pbVar11;
      } while (bVar3 != 0);
      pbVar8 = (byte *)(pcVar10 + -uVar6);
      pbVar11 = pbVar11 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pbVar11 = *(undefined4 *)pbVar8;
        pbVar8 = pbVar8 + 4;
        pbVar11 = pbVar11 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pbVar11 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        pbVar11 = pbVar11 + 1;
      }
      iVar4 = FUN_10008160(this,local_40);
      if (iVar4 == -1) {
        iVar4 = 0;
      }
      *(undefined4 *)((int)this + 0x1cc) = 3;
    }
  }
  else {
    if (iVar4 != 0x1c) {
      if (*(int *)((int)this + 0x1cc) == iVar4) {
        return;
      }
      *(int *)((int)this + 0x1cc) = iVar4;
      iVar4 = FUN_10008100(this,iVar4);
      if (*(int *)(*(int *)((int)this + 4) + 0x128) == iVar4) {
        return;
      }
      *(undefined4 *)(*(int *)((int)this + 4) + 300) = 0;
      *(int *)(*(int *)((int)this + 4) + 0x128) = iVar4;
      *(undefined4 *)(*(int *)((int)this + 4) + 0x130) = 0;
      FUN_10008190((int)this);
      return;
    }
    pcVar9 = s_crouch_shoot__10114e30;
    if ((*(uint *)(*(int *)((int)this + 4) + 0x1a4) & 0x4000) == 0) {
      pcVar9 = s_ref_shoot__10114e24;
    }
    uVar6 = 0xffffffff;
    do {
      pcVar10 = pcVar9;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar9 + 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    pbVar8 = (byte *)(pcVar10 + -uVar6);
    pbVar11 = local_40;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar11 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar11 = pbVar11 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar9 = (char *)((int)this + 0x66c);
    do {
      pcVar10 = pcVar9;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar9 + 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    iVar4 = -1;
    pbVar8 = local_40;
    do {
      pbVar11 = pbVar8;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pbVar11 = pbVar8 + 1;
      bVar3 = *pbVar8;
      pbVar8 = pbVar11;
    } while (bVar3 != 0);
    pbVar8 = (byte *)(pcVar10 + -uVar6);
    pbVar11 = pbVar11 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar11 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar11 = pbVar11 + 1;
    }
    iVar4 = FUN_10008160(this,local_40);
    if (iVar4 == -1) {
      iVar4 = 0;
    }
    if ((*(int *)(*(int *)((int)this + 4) + 0x128) != iVar4) || (*(int *)((int)this + 0xd8) == 0)) {
      *(undefined4 *)(*(int *)((int)this + 4) + 0x130) = 0;
    }
    if (*(int *)((int)this + 0xd8) == 0) {
      puVar1 = (uint *)(*(int *)((int)this + 4) + 0x118);
      *puVar1 = *puVar1 | 0x20;
    }
    *(undefined4 *)((int)this + 0x1cc) = *(undefined4 *)((int)this + 0x1d0);
    *(int *)(*(int *)((int)this + 4) + 0x128) = iVar4;
    FUN_10008190((int)this);
  }
  if ((*(uint *)(*(int *)((int)this + 4) + 0x1a4) & 0x4000) == 0) {
    if (local_44 <= _DAT_100df28c) {
      if (_DAT_100dd5f8 < local_44) {
        iVar12 = 3;
        goto LAB_1007c8ab;
      }
      uVar5 = FUN_10008160(this,(byte *)s_deep_idle_10114e00);
    }
    else {
      uVar5 = FUN_10008100(this,4);
    }
  }
  else {
    if (local_44 != _DAT_100dd5f8) {
      iVar12 = 0x11;
LAB_1007c8ab:
      uVar5 = FUN_10008100(this,iVar12);
      *(undefined4 *)(*(int *)((int)this + 4) + 300) = uVar5;
      goto LAB_1007c8ff;
    }
    uVar5 = FUN_10008100(this,0x12);
  }
  *(undefined4 *)(*(int *)((int)this + 4) + 300) = uVar5;
LAB_1007c8ff:
  if (*(int *)(*(int *)((int)this + 4) + 0x128) != iVar4) {
    *(int *)(*(int *)((int)this + 4) + 0x128) = iVar4;
    *(undefined4 *)(*(int *)((int)this + 4) + 0x130) = 0;
    FUN_10008190((int)this);
  }
  return;
}

