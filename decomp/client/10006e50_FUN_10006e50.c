
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006e50(int param_1)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  longlong lVar10;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  char acStack_100 [256];
  
  uStack_10c = *(undefined4 *)(param_1 + 8);
  uStack_108 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(ushort *)(param_1 + 0x38);
  uVar3 = *(undefined4 *)(param_1 + 4);
  uStack_104 = *(undefined4 *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x40);
  fVar5 = (float)_DAT_1005acc0;
  lVar10 = __ftol();
  switch((uVar2 & 0x7000) >> 0xc) {
  case 1:
    pcVar8 = s_plats_ttrain1_wav_100769c4;
    break;
  case 2:
    pcVar8 = s_plats_ttrain2_wav_100769b0;
    break;
  case 3:
    pcVar8 = s_plats_ttrain3_wav_1007699c;
    break;
  case 4:
    pcVar8 = s_plats_ttrain4_wav_10076988;
    break;
  case 5:
    pcVar8 = s_plats_ttrain6_wav_10076974;
    break;
  case 6:
    pcVar8 = s_plats_ttrain7_wav_10076960;
    break;
  default:
    uVar6 = 0xffffffff;
    pcVar8 = s_;
    do {
      pcVar9 = pcVar8;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar8 = pcVar9 + -uVar6;
    pcVar9 = acStack_100;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    return;
  }
  uVar6 = 0xffffffff;
  do {
    pcVar9 = pcVar8;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar8 = pcVar9 + -uVar6;
  pcVar9 = acStack_100;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  if (iVar4 == 0) {
    (**(code **)(DAT_100a5140 + 4))
              (uVar3,&uStack_10c,6,acStack_100,(float)(uVar2 & 0x3f) * fVar5,0x3f4ccccd,0x80,
               (int)lVar10);
    return;
  }
  (**(code **)(DAT_100a5140 + 8))(uVar3,6,acStack_100);
  return;
}

