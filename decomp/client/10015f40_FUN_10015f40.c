
void FUN_10015f40(int param_1)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  char *pcVar7;
  byte *pbVar8;
  int local_88;
  int local_84;
  undefined1 local_80 [128];
  
  iVar1 = ((0x27f < DAT_100a4dcc) - 1 & 0xfffffec0) + 0x280;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xac) = 0;
    pcVar7 = s_sprites__s_txt_10077e58;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xf4) = 0;
    puVar6 = local_80;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0xe4) = 0;
    iVar5 = param_1;
    local_84 = iVar1;
    FUN_100499f0(puVar6,(byte *)s_sprites__s_txt_10077e58);
    pbVar2 = (byte *)(*DAT_100a5018)(local_80,&local_88,puVar6,pcVar7,iVar5);
    if (pbVar2 != (byte *)0x0) {
      pbVar3 = FUN_10017e90(pbVar2,(byte *)s_crosshair_10077e4c,iVar1,local_88);
      if (pbVar3 == (byte *)0x0) {
        *(undefined4 *)(param_1 + 0xf8) = 0;
      }
      else {
        pbVar8 = pbVar3 + 0x40;
        puVar6 = local_80;
        pcVar7 = s_sprites__s_spr_10077e3c;
        FUN_100499f0(puVar6,(byte *)s_sprites__s_spr_10077e3c);
        uVar4 = (*DAT_100a4ff0)(local_80,puVar6,pcVar7,pbVar8);
        *(undefined4 *)(param_1 + 0xf8) = uVar4;
        *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(pbVar3 + 0x88);
        *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(pbVar3 + 0x8c);
        *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(pbVar3 + 0x90);
        *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(pbVar3 + 0x94);
      }
      pbVar3 = FUN_10017e90(pbVar2,(byte *)s_autoaim_10077e34,local_84,local_88);
      if (pbVar3 == (byte *)0x0) {
        *(undefined4 *)(param_1 + 0x10c) = 0;
      }
      else {
        pbVar8 = pbVar3 + 0x40;
        puVar6 = local_80;
        pcVar7 = s_sprites__s_spr_10077e3c;
        FUN_100499f0(puVar6,(byte *)s_sprites__s_spr_10077e3c);
        uVar4 = (*DAT_100a4ff0)(local_80,puVar6,pcVar7,pbVar8);
        *(undefined4 *)(param_1 + 0x10c) = uVar4;
        *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(pbVar3 + 0x88);
        *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(pbVar3 + 0x8c);
        *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(pbVar3 + 0x90);
        *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(pbVar3 + 0x94);
      }
      pbVar3 = FUN_10017e90(pbVar2,&DAT_10077e2c,local_84,local_88);
      if (pbVar3 == (byte *)0x0) {
        *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0xf8);
        *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0xfc);
        *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0x100);
        *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0x104);
        *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x108);
      }
      else {
        pbVar8 = pbVar3 + 0x40;
        puVar6 = local_80;
        pcVar7 = s_sprites__s_spr_10077e3c;
        FUN_100499f0(puVar6,(byte *)s_sprites__s_spr_10077e3c);
        uVar4 = (*DAT_100a4ff0)(local_80,puVar6,pcVar7,pbVar8);
        *(undefined4 *)(param_1 + 0x120) = uVar4;
        *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(pbVar3 + 0x88);
        *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(pbVar3 + 0x8c);
        *(undefined4 *)(param_1 + 300) = *(undefined4 *)(pbVar3 + 0x90);
        *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(pbVar3 + 0x94);
      }
      pbVar3 = FUN_10017e90(pbVar2,(byte *)s_zoom_autoaim_10077e1c,local_84,local_88);
      if (pbVar3 == (byte *)0x0) {
        *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x120);
        *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0x124);
        *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x128);
        *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_1 + 300);
        *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x130);
      }
      else {
        pbVar8 = pbVar3 + 0x40;
        puVar6 = local_80;
        pcVar7 = s_sprites__s_spr_10077e3c;
        FUN_100499f0(puVar6,(byte *)s_sprites__s_spr_10077e3c);
        uVar4 = (*DAT_100a4ff0)(local_80,puVar6,pcVar7,pbVar8);
        *(undefined4 *)(param_1 + 0x134) = uVar4;
        *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(pbVar3 + 0x88);
        *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(pbVar3 + 0x8c);
        *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(pbVar3 + 0x90);
        *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(pbVar3 + 0x94);
      }
      iVar1 = local_84;
      pbVar3 = FUN_10017e90(pbVar2,(byte *)s_weapon_10077e14,local_84,local_88);
      if (pbVar3 == (byte *)0x0) {
        *(undefined4 *)(param_1 + 0xbc) = 0;
      }
      else {
        pbVar8 = pbVar3 + 0x40;
        puVar6 = local_80;
        pcVar7 = s_sprites__s_spr_10077e3c;
        FUN_100499f0(puVar6,(byte *)s_sprites__s_spr_10077e3c);
        uVar4 = (*DAT_100a4ff0)(local_80,puVar6,pcVar7,pbVar8);
        *(undefined4 *)(param_1 + 0xbc) = uVar4;
        *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(pbVar3 + 0x88);
        *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(pbVar3 + 0x8c);
        *(undefined4 *)(param_1 + 200) = *(undefined4 *)(pbVar3 + 0x90);
        *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(pbVar3 + 0x94);
        iVar5 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4);
        if (DAT_100a3a38 <= iVar5) {
          DAT_100a3a38 = iVar5;
        }
      }
      pbVar3 = FUN_10017e90(pbVar2,(byte *)s_weapon_s_10077e08,iVar1,local_88);
      if (pbVar3 == (byte *)0x0) {
        *(undefined4 *)(param_1 + 0xa8) = 0;
      }
      else {
        pbVar8 = pbVar3 + 0x40;
        puVar6 = local_80;
        pcVar7 = s_sprites__s_spr_10077e3c;
        FUN_100499f0(puVar6,(byte *)s_sprites__s_spr_10077e3c);
        uVar4 = (*DAT_100a4ff0)(local_80,puVar6,pcVar7,pbVar8);
        *(undefined4 *)(param_1 + 0xa8) = uVar4;
        *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(pbVar3 + 0x88);
        *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(pbVar3 + 0x8c);
        *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(pbVar3 + 0x90);
        *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(pbVar3 + 0x94);
      }
      pbVar3 = FUN_10017e90(pbVar2,&DAT_10077e00,iVar1,local_88);
      if (pbVar3 == (byte *)0x0) {
        *(undefined4 *)(param_1 + 0xd0) = 0;
      }
      else {
        pbVar8 = pbVar3 + 0x40;
        puVar6 = local_80;
        pcVar7 = s_sprites__s_spr_10077e3c;
        FUN_100499f0(puVar6,(byte *)s_sprites__s_spr_10077e3c);
        uVar4 = (*DAT_100a4ff0)(local_80,puVar6,pcVar7,pbVar8);
        *(undefined4 *)(param_1 + 0xd0) = uVar4;
        *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(pbVar3 + 0x88);
        *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(pbVar3 + 0x8c);
        *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(pbVar3 + 0x90);
        *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(pbVar3 + 0x94);
        iVar5 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4);
        if (DAT_100a3a38 <= iVar5) {
          DAT_100a3a38 = iVar5;
        }
      }
      pbVar2 = FUN_10017e90(pbVar2,(byte *)s_ammo2_10077df8,iVar1,local_88);
      if (pbVar2 == (byte *)0x0) {
        *(undefined4 *)(param_1 + 0xe4) = 0;
      }
      else {
        pbVar3 = pbVar2 + 0x40;
        puVar6 = local_80;
        pcVar7 = s_sprites__s_spr_10077e3c;
        FUN_100499f0(puVar6,(byte *)s_sprites__s_spr_10077e3c);
        uVar4 = (*DAT_100a4ff0)(local_80,puVar6,pcVar7,pbVar3);
        *(undefined4 *)(param_1 + 0xe4) = uVar4;
        *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(pbVar2 + 0x88);
        *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(pbVar2 + 0x8c);
        *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(pbVar2 + 0x90);
        *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(pbVar2 + 0x94);
        iVar1 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4);
        if (DAT_100a3a38 <= iVar1) {
          DAT_100a3a38 = iVar1;
          return;
        }
      }
    }
  }
  return;
}

