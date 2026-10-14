
void FUN_10094da0(void)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *pvVar5;
  void *extraout_ECX_02;
  uint uVar6;
  void *extraout_ECX_03;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  int local_20c;
  int iStack_208;
  int iStack_204;
  char local_200 [512];
  
  if (DAT_10131050 == 0) {
    DAT_10131054 = (void *)0x0;
    puVar2 = &DAT_1012f448;
    for (iVar4 = 0x680; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    puVar2 = (undefined4 *)&DAT_10130e48;
    for (iVar4 = 0x80; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    pcVar9 = local_200;
    for (iVar4 = 0x80; iVar4 != 0; iVar4 = iVar4 + -1) {
      pcVar9[0] = '\0';
      pcVar9[1] = '\0';
      pcVar9[2] = '\0';
      pcVar9[3] = '\0';
      pcVar9 = pcVar9 + 4;
    }
    iVar4 = (*DAT_10121f84)(s_sound_materials_txt_10115284,&local_20c);
    if (iVar4 != 0) {
      iStack_208 = iVar4;
      puVar2 = FUN_10094d00(iVar4,local_20c,&iStack_204,(undefined4 *)local_200,0x1ff);
      pvVar5 = extraout_ECX;
      while ((puVar2 != (undefined4 *)0x0 && ((int)DAT_10131054 < 0x200))) {
        iVar8 = 0;
        cVar1 = local_200[0];
        while ((cVar1 != '\0' &&
               (uVar3 = FUN_100c862b((void *)(int)local_200[iVar8],(int)local_200[iVar8]),
               pvVar5 = extraout_ECX_00, uVar3 != 0))) {
          cVar1 = local_200[iVar8 + 1];
          iVar8 = iVar8 + 1;
        }
        cVar1 = local_200[iVar8];
        if (((cVar1 != '\0') && (cVar1 != '/')) &&
           (uVar3 = FUN_100c8558(pvVar5,(int)cVar1), uVar3 != 0)) {
          uVar3 = FUN_100c9263((int)local_200[iVar8]);
          pvVar5 = DAT_10131054;
          *(char *)((int)DAT_10131054 + 0x10130e48) = (char)uVar3;
          cVar1 = local_200[iVar8 + 1];
          while ((iVar7 = iVar8 + 1, cVar1 != '\0' &&
                 (uVar3 = FUN_100c862b(pvVar5,(int)cVar1), pvVar5 = extraout_ECX_01, uVar3 != 0))) {
            cVar1 = local_200[iVar8 + 2];
            iVar8 = iVar7;
          }
          if (local_200[iVar8 + 1] != '\0') {
            do {
              uVar3 = FUN_100c862b(pvVar5,(int)local_200[iVar7]);
              if (uVar3 != 0) break;
              iVar4 = iVar7 + 1;
              iVar7 = iVar7 + 1;
              pvVar5 = extraout_ECX_02;
            } while (local_200[iVar4] != '\0');
            iVar4 = iStack_208;
            if (local_200[iVar7] != '\0') {
              if (iVar8 + 0xd <= iVar7) {
                iVar7 = iVar8 + 0xd;
              }
              local_200[iVar7] = '\0';
              iVar7 = (int)DAT_10131054 * 0xd;
              DAT_10131054 = (void *)((int)DAT_10131054 + 1);
              uVar3 = 0xffffffff;
              pcVar9 = local_200 + iVar8 + 1;
              do {
                pcVar10 = pcVar9;
                if (uVar3 == 0) break;
                uVar3 = uVar3 - 1;
                pcVar10 = pcVar9 + 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar10;
              } while (cVar1 != '\0');
              uVar3 = ~uVar3;
              pcVar9 = pcVar10 + -uVar3;
              pcVar10 = (char *)((int)&DAT_1012f448 + iVar7);
              for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar10 = pcVar10 + 4;
              }
              for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
                *pcVar10 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar10 = pcVar10 + 1;
              }
            }
          }
        }
        puVar2 = FUN_10094d00(iVar4,local_20c,&iStack_204,(undefined4 *)local_200,0x1ff);
        pvVar5 = extraout_ECX_03;
      }
      (*DAT_10121f88)(iVar4);
      DAT_10131050 = 1;
    }
  }
  return;
}

