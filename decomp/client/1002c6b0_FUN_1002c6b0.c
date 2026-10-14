
void __thiscall
FUN_1002c6b0(void *this,byte *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  void *this_00;
  void *extraout_ECX;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  
  iVar11 = 0;
  pbVar10 = (byte *)((int)this + 0x14);
  this_00 = this;
  do {
    uVar2 = FUN_10056910(this_00,pbVar10,param_1);
    if (uVar2 == 0) break;
    iVar11 = iVar11 + 1;
    pbVar10 = pbVar10 + 0x30;
    this_00 = extraout_ECX;
  } while (iVar11 < 4);
  if (iVar11 == 4) {
    iVar11 = 0;
    piVar3 = (int *)((int)this + 0x2c);
    do {
      if (*piVar3 == 0) break;
      iVar11 = iVar11 + 1;
      piVar3 = piVar3 + 0xc;
    } while (iVar11 < 4);
    if (iVar11 == 4) {
      iVar11 = 0;
    }
  }
  iVar4 = FUN_1001c090(&DAT_100a3a40,(char *)param_1);
  if (iVar4 < 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined4 *)(DAT_100a3ab0 + iVar4 * 4);
  }
  *(undefined4 *)((int)this + iVar11 * 0x30 + 0x2c) = uVar8;
  puVar5 = (undefined4 *)(iVar4 * 0x10 + DAT_100a3ab4);
  puVar9 = (undefined4 *)((iVar11 * 3 + 3) * 0x10 + (int)this);
  *puVar9 = *puVar5;
  puVar9[1] = puVar5[1];
  puVar9[2] = puVar5[2];
  puVar9[3] = puVar5[3];
  *(undefined1 *)((int)this + iVar11 * 0x30 + 0x40) = param_2;
  *(undefined1 *)((int)this + iVar11 * 0x30 + 0x41) = param_3;
  *(undefined1 *)((int)this + iVar11 * 0x30 + 0x42) = param_4;
  puVar6 = (uint *)((int)this + iVar11 * 0x30 + 0x14);
  uVar2 = 0xffffffff;
  do {
    pbVar10 = param_1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pbVar10 = param_1 + 1;
    bVar1 = *param_1;
    param_1 = pbVar10;
  } while (bVar1 != 0);
  uVar2 = ~uVar2;
  puVar12 = (uint *)(pbVar10 + -uVar2);
  puVar13 = puVar6;
  for (uVar7 = uVar2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar13 = puVar13 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(char *)puVar13 = (char)*puVar12;
    puVar12 = (uint *)((int)puVar12 + 1);
    puVar13 = (uint *)((int)puVar13 + 1);
  }
  puVar6 = FUN_1004aff0(puVar6,s_grenade_10079aa0);
  if (puVar6 != (uint *)0x0) {
    puVar5 = (undefined4 *)(*DAT_100a50bc)();
    (**(code **)(DAT_100a5140 + 4))
              (*puVar5,puVar5 + 0x2d2,6,s_weapons_timer_wav_10079a8c,0x3f800000,0x3f4ccccd,0,100);
  }
  return;
}

