
void __fastcall FUN_1001c0e0(void *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  undefined1 *puVar10;
  char *pcVar11;
  char *pcVar12;
  int iVar13;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  undefined1 auStack_100 [256];
  
  *(undefined4 *)((int)param_1 + 5000) = 0x214;
  (*DAT_100a5020)((undefined4 *)((int)param_1 + 5000));
  iVar8 = 0;
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  if (DAT_100a4dcc < 0x280) {
    *(undefined4 *)((int)param_1 + 0x60) = 0x140;
  }
  else {
    *(undefined4 *)((int)param_1 + 0x60) = 0x280;
  }
  if (*(int *)((int)param_1 + 0xc) == 0) {
    iVar1 = (*DAT_100a5018)(s_sprites_hud_txt_10078794,(int *)((int)param_1 + 0x14));
    *(int *)((int)param_1 + 0xc) = iVar1;
    if (iVar1 != 0) {
      iVar6 = *(int *)((int)param_1 + 0x14);
      *(undefined4 *)((int)param_1 + 0x10) = 0;
      if (0 < iVar6) {
        piVar2 = (int *)(iVar1 + 0x84);
        do {
          if (*piVar2 == *(int *)((int)param_1 + 0x60)) {
            *(int *)((int)param_1 + 0x10) = *(int *)((int)param_1 + 0x10) + 1;
          }
          piVar2 = piVar2 + 0x26;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      pvVar3 = operator_new(*(int *)((int)param_1 + 0x10) << 2);
      *(void **)((int)param_1 + 0x70) = pvVar3;
      pvVar3 = operator_new(*(int *)((int)param_1 + 0x10) << 4);
      *(void **)((int)param_1 + 0x74) = pvVar3;
      pvVar3 = operator_new(*(int *)((int)param_1 + 0x10) * 0x18);
      pcVar7 = *(char **)((int)param_1 + 0xc);
      *(void **)((int)param_1 + 0x78) = pvVar3;
      iStack_104 = 0;
      if (0 < *(int *)((int)param_1 + 0x14)) {
        iStack_10c = 0;
        iStack_108 = 0;
        pcVar9 = pcVar7 + 0x40;
        do {
          if (*(int *)(pcVar9 + 0x44) == *(int *)((int)param_1 + 0x60)) {
            puVar10 = auStack_100;
            pcVar11 = s_sprites__s_spr_10077e3c;
            pcVar12 = pcVar9;
            FUN_100499f0(puVar10,(byte *)s_sprites__s_spr_10077e3c);
            uVar4 = (*DAT_100a4ff0)(auStack_100,puVar10,pcVar11,pcVar12);
            *(undefined4 *)(*(int *)((int)param_1 + 0x70) + iVar8) = uVar4;
            puVar5 = (undefined4 *)(iStack_108 + *(int *)((int)param_1 + 0x74));
            *puVar5 = *(undefined4 *)(pcVar9 + 0x48);
            puVar5[1] = *(undefined4 *)(pcVar9 + 0x4c);
            puVar5[2] = *(undefined4 *)(pcVar9 + 0x50);
            puVar5[3] = *(undefined4 *)(pcVar9 + 0x54);
            _strncpy((char *)(iStack_10c + *(int *)((int)param_1 + 0x78)),pcVar7,0x18);
            iVar8 = iVar8 + 4;
            iStack_108 = iStack_108 + 0x10;
            iStack_10c = iStack_10c + 0x18;
          }
          pcVar7 = pcVar7 + 0x98;
          pcVar9 = pcVar9 + 0x98;
          iStack_104 = iStack_104 + 1;
        } while (iStack_104 < *(int *)((int)param_1 + 0x14));
      }
    }
  }
  else if (0 < *(int *)((int)param_1 + 0x14)) {
    iVar6 = 0;
    iVar1 = *(int *)((int)param_1 + 0xc) + 0x40;
    do {
      if (*(int *)(iVar1 + 0x44) == *(int *)((int)param_1 + 0x60)) {
        puVar10 = auStack_100;
        pcVar7 = s_sprites__s_spr_10077e3c;
        iVar13 = iVar1;
        FUN_100499f0(puVar10,(byte *)s_sprites__s_spr_10077e3c);
        uVar4 = (*DAT_100a4ff0)(auStack_100,puVar10,pcVar7,iVar13);
        *(undefined4 *)(*(int *)((int)param_1 + 0x70) + iVar6) = uVar4;
        iVar6 = iVar6 + 4;
      }
      iVar1 = iVar1 + 0x98;
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)((int)param_1 + 0x14));
  }
  iVar8 = FUN_1001c090(param_1,s_number_0_10078788);
  *(int *)((int)param_1 + 0x15a8) = iVar8;
  iVar8 = iVar8 * 0x10 + *(int *)((int)param_1 + 0x74);
  *(int *)((int)param_1 + 0x68) = *(int *)(iVar8 + 0xc) - *(int *)(iVar8 + 8);
  (**(code **)(*(int *)((int)param_1 + 0x80) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0xa8) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x1a8) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x1f0) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x1c0) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x20c) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x24c) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x334) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x574) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x58c) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x5a0) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x5c4) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x5f0) + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x604) + 8))();
  piVar2 = (int *)FUN_10012170();
  (**(code **)(*piVar2 + 8))();
  (**(code **)(*(int *)((int)param_1 + 0x6d8) + 8))();
  return;
}

