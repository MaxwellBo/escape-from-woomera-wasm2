
void __thiscall FUN_1009d020(void *this,char param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  char *pcVar11;
  undefined4 *puVar12;
  longlong lVar13;
  int iStack_204;
  byte local_200 [512];
  
  uVar7 = 0xffffffff;
  DAT_101312f0 = 0;
  pcVar2 = (char *)((int)this + 0x18);
  do {
    pcVar11 = pcVar2;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar11 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar11;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pbVar9 = (byte *)(pcVar11 + -uVar7);
  pbVar10 = local_200;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pbVar10 = *(undefined4 *)pbVar9;
    pbVar9 = pbVar9 + 4;
    pbVar10 = pbVar10 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pbVar10 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    pbVar10 = pbVar10 + 1;
  }
  pcVar2 = (char *)FUN_100c9413(local_200,&DAT_10118090);
  while ((pcVar2 != (char *)0x0 && (*pcVar2 != '\0'))) {
    iVar3 = (**(code **)(*(int *)this + 0xcc))(pcVar2);
    if (iVar3 < 0) {
      uVar7 = 0xffffffff;
      do {
        pcVar11 = pcVar2;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar11 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar11;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pcVar2 = pcVar11 + -uVar7;
      pcVar11 = (char *)(&DAT_10131068 + DAT_101312f0 * 4);
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar11 = pcVar11 + 4;
      }
      DAT_101312f0 = DAT_101312f0 + 1;
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar11 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar11 = pcVar11 + 1;
      }
    }
    pcVar2 = (char *)FUN_100c9413((byte *)0x0,&DAT_10118090);
  }
  if (DAT_101312f0 < 2) {
    DAT_101312f0 = 0;
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  puVar12 = &DAT_10131268;
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  iStack_204 = 1;
  if (0 < *(int *)(DAT_10122044 + 0x90)) {
    do {
      piVar4 = (int *)FUN_100af1c0(iStack_204);
      if (piVar4 != (int *)0x0) {
        pcVar2 = (char *)(**(code **)(*piVar4 + 0xd4))();
        iVar5 = (**(code **)(*(int *)this + 0xcc))(pcVar2);
        iVar3 = DAT_101312f0;
        if (iVar5 < 0) {
          if (*(int *)((int)this + 0x14) == 0) {
            iVar5 = DAT_101312f0 * 4;
            puVar12 = &DAT_10131268 + DAT_101312f0;
            DAT_101312f0 = DAT_101312f0 + 1;
            *puVar12 = 0;
            _strncpy((char *)(&DAT_10131068 + iVar5),pcVar2,0x10);
            iVar5 = iVar3;
          }
          if (-1 < iVar5) goto LAB_1009d178;
        }
        else {
LAB_1009d178:
          lVar13 = __ftol();
          (&DAT_10131268)[iVar5] = (int)lVar13;
        }
        if (param_1 != '\0') {
          iVar3 = *(int *)this;
          uVar6 = (**(code **)(*piVar4 + 0xd4))();
          iVar3 = (**(code **)(iVar3 + 0xd4))(uVar6);
          if (iVar3 != 0) {
            (*DAT_10121ec0)(2,DAT_101248b4,0,0);
            uVar6 = (*DAT_10121f24)(*(undefined4 *)(piVar4[1] + 0x208));
            (*DAT_10121ec8)(uVar6);
            uVar6 = (**(code **)(*piVar4 + 0xd4))();
            (*DAT_10121ee0)(uVar6);
            (*DAT_10121ec4)();
          }
        }
      }
      iStack_204 = iStack_204 + 1;
    } while (iStack_204 <= *(int *)(DAT_10122044 + 0x90));
  }
  return;
}

