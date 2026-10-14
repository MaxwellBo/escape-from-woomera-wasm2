
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1002e420(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  float *pfVar6;
  byte *pbVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  bool bVar11;
  float10 fVar12;
  float fVar13;
  int iVar14;
  float *pfVar15;
  byte *pbVar16;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  if (*(int *)(param_1[0x11] + 0xa4) <= *(int *)(param_1[0xc] + 0x2dc)) {
    *(undefined4 *)(param_1[0xc] + 0x2dc) = 0;
  }
  iVar8 = *(int *)(param_1[0xc] + 0x2dc) * 0xb0 + *(int *)(param_1[0x11] + 0xa8) + param_1[0x11];
  (**(code **)(*param_1 + 0x2c))(iVar8);
  iVar10 = param_1[0xd];
  iVar2 = (**(code **)(*param_1 + 0x10))(iVar10,iVar8);
  fVar13 = (float)(double)CONCAT44(uStack_40,uStack_44);
  (**(code **)(*param_1 + 0x44))(&DAT_100ae0c8,&DAT_100b02f8,iVar8,iVar2,fVar13);
  if (1 < *(int *)(iVar8 + 0x78)) {
    iVar2 = iVar2 + *(int *)(param_1[0x11] + 0x8c) * 0xc;
    (**(code **)(*param_1 + 0x44))(&DAT_100b21a4,&DAT_100b0af8,iVar8,iVar2,fVar13);
    fVar12 = (float10)(**(code **)(*param_1 + 0x28))();
    (**(code **)(*param_1 + 0x34))
              (&DAT_100b02f8,&DAT_100ae0c8,&DAT_100b0af8,&DAT_100b21a4,
               ((float)*(byte *)(param_1[0xc] + 0xb40) * ((float)_DAT_10059a10 - (float)fVar12) +
               (float)*(byte *)(param_1[0xc] + 0x31c) * (float)fVar12) * (float)_DAT_1005ac80);
    if (*(int *)(iVar8 + 0x78) == 4) {
      iVar2 = iVar2 + *(int *)(param_1[0x11] + 0x8c) * 0xc;
      iVar5 = iVar8;
      iVar14 = iVar2;
      (**(code **)(*param_1 + 0x44))(&DAT_100afcf8,&DAT_100af4f8,iVar8,iVar2,fVar13);
      iVar2 = iVar2 + *(int *)(param_1[0x11] + 0x8c) * 0xc;
      (**(code **)(*param_1 + 0x44))(&DAT_100aeec8,&DAT_100b18f8,iVar8,iVar2,fVar13);
      fVar13 = ((float)*(byte *)(param_1[0xc] + 0xb40) * (float)(double)CONCAT44(iVar14,iVar5) +
               (float)*(byte *)(param_1[0xc] + 0x31c) * fVar13) * (float)_DAT_1005ac80;
      (**(code **)(*param_1 + 0x34))(&DAT_100af4f8,&DAT_100afcf8,&DAT_100b18f8,&DAT_100aeec8,fVar13)
      ;
      (**(code **)(*param_1 + 0x34))
                (&DAT_100b02f8,&DAT_100ae0c8,&DAT_100af4f8,&DAT_100afcf8,
                 ((float)*(byte *)(param_1[0xc] + 0xb41) * (float)(double)CONCAT44(iVar2,iVar8) +
                 (float)*(byte *)(param_1[0xc] + 0x31d) * fVar13) * (float)_DAT_1005ac80);
    }
  }
  if (((param_1[6] != 0) && (iVar2 = param_1[0xc], *(float *)(iVar2 + 0xb14) != _DAT_10059a18)) &&
     ((float)*(double *)(param_1 + 2) < *(float *)(iVar2 + 0xb14) + (float)_DAT_1005acd0)) {
    iVar8 = param_1[0x11];
    if (*(int *)(iVar2 + 0xb34) < *(int *)(iVar8 + 0xa4)) {
      iVar8 = *(int *)(iVar2 + 0xb34) * 0xb0 + *(int *)(iVar8 + 0xa8) + iVar8;
      iVar2 = (**(code **)(*param_1 + 0x10))(param_1[0xd],iVar8);
      (**(code **)(*param_1 + 0x44))
                (&DAT_100ad2c8,&DAT_100ae6c8,iVar8,iVar2,*(undefined4 *)(param_1[0xc] + 0xb38));
      if (1 < *(int *)(iVar8 + 0x78)) {
        iVar2 = iVar2 + *(int *)(param_1[0x11] + 0x8c) * 0xc;
        (**(code **)(*param_1 + 0x44))
                  (&DAT_100b21a4,&DAT_100b0af8,iVar8,iVar2,*(undefined4 *)(param_1[0xc] + 0xb38));
        (**(code **)(*param_1 + 0x34))
                  (&DAT_100ae6c8,&DAT_100ad2c8,&DAT_100b0af8,&DAT_100b21a4,
                   (float)*(byte *)(param_1[0xc] + 0xb18) * (float)_DAT_1005ac80);
        if (*(int *)(iVar8 + 0x78) == 4) {
          iVar2 = iVar2 + *(int *)(param_1[0x11] + 0x8c) * 0xc;
          (**(code **)(*param_1 + 0x44))
                    (&DAT_100afcf8,&DAT_100af4f8,iVar8,iVar2,*(undefined4 *)(param_1[0xc] + 0xb38));
          (**(code **)(*param_1 + 0x44))
                    (&DAT_100aeec8,&DAT_100b18f8,iVar8,iVar2 + *(int *)(param_1[0x11] + 0x8c) * 0xc,
                     *(undefined4 *)(param_1[0xc] + 0xb38));
          (**(code **)(*param_1 + 0x34))
                    (&DAT_100af4f8,&DAT_100afcf8,&DAT_100b18f8,&DAT_100aeec8,
                     (float)*(byte *)(param_1[0xc] + 0xb18) * (float)_DAT_1005ac80);
          (**(code **)(*param_1 + 0x34))
                    (&DAT_100ae6c8,&DAT_100ad2c8,&DAT_100af4f8,&DAT_100afcf8,
                     (float)*(byte *)(param_1[0xc] + 0xb19) * (float)_DAT_1005ac80);
        }
      }
      (**(code **)(*param_1 + 0x34))
                (&DAT_100b02f8,&DAT_100ae0c8,&DAT_100ae6c8,&DAT_100ad2c8,
                 (float)_DAT_10059a10 -
                 ((float)*(double *)(param_1 + 2) - *(float *)(param_1[0xc] + 0xb14)) *
                 (float)_DAT_10059a08);
      goto LAB_1002e849;
    }
  }
  *(int *)(param_1[0xc] + 0xb38) = iVar10;
LAB_1002e849:
  iVar2 = param_1[0x11];
  pbVar7 = (byte *)(*(int *)(iVar2 + 0x90) + iVar2);
  pbVar4 = pbVar7;
  if ((param_1[0xe] != 0) && (iVar10 = *(int *)(param_1[0xe] + 0x17c), iVar10 != 0)) {
    iVar2 = iVar10 * 0xb0 + *(int *)(iVar2 + 0xa8) + iVar2;
    pbVar16 = pbVar7;
    uVar3 = (**(code **)(*param_1 + 0x10))(param_1[0xd],iVar2);
    (**(code **)(*param_1 + 0x44))
              (&DAT_100b21a4,&DAT_100b0af8,iVar2,uVar3,*(undefined4 *)(param_1[0xe] + 0x180));
    iVar2 = 0;
    if (0 < *(int *)(param_1[0x11] + 0x8c)) {
      iVar10 = 0;
      iVar8 = 0;
      do {
        pcVar9 = s_Bip01_Spine_10079b0c;
        pbVar4 = pbVar7;
        do {
          bVar1 = *pbVar4;
          bVar11 = bVar1 < (byte)*pcVar9;
          if (bVar1 != *pcVar9) {
LAB_1002e8f9:
            iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_1002e8fe;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar11 = bVar1 < (byte)pcVar9[1];
          if (bVar1 != pcVar9[1]) goto LAB_1002e8f9;
          pbVar4 = pbVar4 + 2;
          pcVar9 = pcVar9 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_1002e8fe:
        pbVar4 = pbVar16;
        if (iVar5 == 0) break;
        *(undefined4 *)((int)&DAT_100ae0c8 + iVar8) = *(undefined4 *)((int)&DAT_100b21a4 + iVar8);
        *(undefined4 *)((int)&DAT_100ae0cc + iVar8) = *(undefined4 *)((int)&DAT_100b21a8 + iVar8);
        *(undefined4 *)((int)&DAT_100ae0d0 + iVar8) = *(undefined4 *)((int)&DAT_100b21ac + iVar8);
        *(undefined4 *)((int)&DAT_100b02f8 + iVar10) = *(undefined4 *)((int)&DAT_100b0af8 + iVar10);
        *(undefined4 *)((int)&DAT_100b02fc + iVar10) = *(undefined4 *)((int)&DAT_100b0afc + iVar10);
        *(undefined4 *)((int)&DAT_100b0300 + iVar10) = *(undefined4 *)((int)&DAT_100b0b00 + iVar10);
        *(undefined4 *)((int)&DAT_100b0304 + iVar10) = *(undefined4 *)((int)&DAT_100b0b04 + iVar10);
        iVar2 = iVar2 + 1;
        pbVar7 = pbVar7 + 0x70;
        iVar10 = iVar10 + 0x10;
        iVar8 = iVar8 + 0xc;
      } while (iVar2 < *(int *)(param_1[0x11] + 0x8c));
    }
  }
  iVar10 = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_1[0x11] + 0x8c)) {
    pfVar15 = (float *)&DAT_100b02f8;
    pbVar4 = pbVar4 + 0x20;
    do {
      FUN_1002d280(pfVar15,(float *)&stack0xffffffb0);
      if (*(int *)pbVar4 == -1) {
        iVar8 = (*DAT_100b2198)();
        if (iVar8 == 0) {
          pfVar6 = (float *)param_1[0x1029];
        }
        else {
          pfVar6 = (float *)param_1[0x1028];
        }
        FUN_1002cf20(pfVar6,(float *)&stack0xffffffb0,(float *)(iVar10 + param_1[0x102a]));
        FUN_1002cf20((float *)param_1[0x1028],(float *)&stack0xffffffb0,
                     (float *)(param_1[0x102b] + iVar10));
        (**(code **)(*param_1 + 0x30))(param_1[0xc],iVar10 + param_1[0x102a]);
      }
      else {
        FUN_1002cf20((float *)(*(int *)pbVar4 * 0x30 + param_1[0x102a]),(float *)&stack0xffffffb0,
                     (float *)(iVar10 + param_1[0x102a]));
        FUN_1002cf20((float *)(*(int *)pbVar4 * 0x30 + param_1[0x102b]),(float *)&stack0xffffffb0,
                     (float *)(iVar10 + param_1[0x102b]));
      }
      pfVar15 = pfVar15 + 4;
      iVar2 = iVar2 + 1;
      iVar10 = iVar10 + 0x30;
      pbVar4 = pbVar4 + 0x70;
    } while (iVar2 < *(int *)(param_1[0x11] + 0x8c));
  }
  return;
}

