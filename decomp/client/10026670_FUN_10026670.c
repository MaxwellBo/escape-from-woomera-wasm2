
void FUN_10026670(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined *extraout_ECX;
  undefined *extraout_ECX_00;
  undefined *puVar6;
  undefined *this;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  void *extraout_ECX_03;
  void *this_00;
  uint uVar7;
  undefined *extraout_ECX_04;
  void *extraout_ECX_05;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined4 uStack_20c;
  int iStack_208;
  undefined4 uStack_204;
  char local_200 [512];
  
  if (DAT_100acc44 == 0) {
    puVar10 = &DAT_100ab034;
    for (iVar5 = 0x680; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    puVar10 = (undefined4 *)&DAT_100aca34;
    for (iVar5 = 0x80; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    pcVar9 = local_200;
    for (iVar5 = 0x80; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar9[0] = '\0';
      pcVar9[1] = '\0';
      pcVar9[2] = '\0';
      pcVar9[3] = '\0';
      pcVar9 = pcVar9 + 4;
    }
    DAT_100acc3c = 0;
    uVar2 = (**(code **)(DAT_100acc38 + 0x4f5a0))(s_sound_materials_txt_10079664);
    uStack_204 = uVar2;
    iVar5 = (**(code **)(DAT_100acc38 + 0x4f5a4))(s_sound_materials_txt_10079664,5,0);
    if (iVar5 != 0) {
      uStack_20c = 0;
      iStack_208 = iVar5;
      iVar3 = (**(code **)(DAT_100acc38 + 0x4f5ac))(iVar5,uVar2,&uStack_20c,local_200,0x1ff);
      this = extraout_ECX;
      while ((iVar3 != 0 && (DAT_100acc3c < 0x200))) {
        iVar3 = 0;
        puVar6 = PTR_DAT_1007bae8;
        cVar1 = local_200[0];
        while (PTR_DAT_1007bae8 = puVar6, cVar1 != '\0') {
          if (DAT_1007bcf4 < 2) {
            uVar4 = (byte)puVar6[local_200[iVar3] * 2] & 8;
          }
          else {
            uVar4 = FUN_1004b6c6(this,(int)local_200[iVar3],8);
            puVar6 = extraout_ECX_00;
          }
          this = puVar6;
          if (uVar4 == 0) break;
          iVar8 = iVar3 + 1;
          iVar3 = iVar3 + 1;
          puVar6 = PTR_DAT_1007bae8;
          cVar1 = local_200[iVar8];
        }
        cVar1 = local_200[iVar3];
        if ((cVar1 != '\0') && (cVar1 != '/')) {
          if (DAT_1007bcf4 < 2) {
            uVar4 = *(ushort *)(PTR_DAT_1007bae8 + cVar1 * 2) & 0x103;
          }
          else {
            uVar4 = FUN_1004b6c6(this,(int)cVar1,0x103);
          }
          if (uVar4 != 0) {
            uVar4 = FUN_1004b58b((int)local_200[iVar3]);
            (&DAT_100aca34)[DAT_100acc3c] = (char)uVar4;
            cVar1 = local_200[iVar3 + 1];
            this_00 = extraout_ECX_01;
            while (iVar8 = iVar3 + 1, cVar1 != '\0') {
              if (DAT_1007bcf4 < 2) {
                this_00 = (void *)(int)cVar1;
                uVar4 = (byte)PTR_DAT_1007bae8[(int)this_00 * 2] & 8;
              }
              else {
                uVar4 = FUN_1004b6c6(this_00,(int)cVar1,8);
                this_00 = extraout_ECX_02;
              }
              if (uVar4 == 0) break;
              cVar1 = local_200[iVar3 + 2];
              iVar3 = iVar8;
            }
            if (local_200[iVar3 + 1] != '\0') {
              do {
                if (DAT_1007bcf4 < 2) {
                  this_00 = (void *)(int)local_200[iVar8];
                  uVar4 = (byte)PTR_DAT_1007bae8[(int)this_00 * 2] & 8;
                }
                else {
                  uVar4 = FUN_1004b6c6(this_00,(int)local_200[iVar8],8);
                  this_00 = extraout_ECX_03;
                }
              } while ((uVar4 == 0) &&
                      (iVar5 = iVar8 + 1, iVar8 = iVar8 + 1, local_200[iVar5] != '\0'));
              iVar5 = iStack_208;
              if (local_200[iVar8] != '\0') {
                if (iVar3 + 0xd <= iVar8) {
                  iVar8 = iVar3 + 0xd;
                }
                local_200[iVar8] = '\0';
                iVar8 = DAT_100acc3c * 0xd;
                DAT_100acc3c = DAT_100acc3c + 1;
                uVar4 = 0xffffffff;
                pcVar9 = local_200 + iVar3 + 1;
                do {
                  pcVar11 = pcVar9;
                  if (uVar4 == 0) break;
                  uVar4 = uVar4 - 1;
                  pcVar11 = pcVar9 + 1;
                  cVar1 = *pcVar9;
                  pcVar9 = pcVar11;
                } while (cVar1 != '\0');
                uVar4 = ~uVar4;
                pcVar9 = pcVar11 + -uVar4;
                pcVar11 = (char *)((int)&DAT_100ab034 + iVar8);
                for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
                  pcVar9 = pcVar9 + 4;
                  pcVar11 = pcVar11 + 4;
                }
                for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                  *pcVar11 = *pcVar9;
                  pcVar9 = pcVar9 + 1;
                  pcVar11 = pcVar11 + 1;
                }
              }
            }
          }
        }
        iVar3 = (**(code **)(DAT_100acc38 + 0x4f5ac))(iVar5,uStack_204,&uStack_20c,local_200,0x1ff);
        this = extraout_ECX_04;
      }
      (**(code **)(DAT_100acc38 + 0x4f5a8))(iVar5);
      FUN_10026600(extraout_ECX_05);
      DAT_100acc44 = 1;
    }
  }
  return;
}

