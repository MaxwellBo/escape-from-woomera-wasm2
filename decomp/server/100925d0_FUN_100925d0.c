
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100925d0(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar4 = (char *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1[1] + 0x1d4));
  if (*(int *)(param_1[1] + 0x1d4) != 0) {
    uVar3 = 0xffffffff;
    pcVar5 = pcVar4;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if ((1 < ~uVar3 - 1) && (*pcVar4 != '!')) {
      (*DAT_10121e0c)(pcVar4);
    }
  }
  FUN_10092c10((int)param_1);
  if (((*(byte *)(param_1[1] + 0x1a0) & 0x10) == 0) && (param_1[0x49] != 0)) {
    param_1[0x48] = 1;
  }
  iVar2 = *(int *)(param_1[1] + 0x1c8);
  if (iVar2 != 0) {
    iVar2 = FUN_100af030(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + iVar2));
    if (iVar2 == 0) {
      (*DAT_10121efc)(1,s_WARNING__ambient_generic___s__ca_10116ed8,
                      *(int *)(param_1[1] + 0x1cc) + *(int *)(DAT_10122044 + 0x98),
                      *(int *)(param_1[1] + 0x1c8) + *(int *)(DAT_10122044 + 0x98));
    }
    else {
      param_1[0x4a] = *(int *)(*(int *)(iVar2 + 4) + 0x208);
    }
  }
  if (param_1[0x48] != 0) {
    if (param_1[0x4a] != 0) {
      param_1[0x1d] = (int)CAmbientGeneric::StartPlayFrom;
      (**(code **)(*param_1 + 8))(0x3dcccccd);
      return;
    }
    FUN_100af2c0(*(undefined4 *)(param_1[1] + 0x208),(undefined4 *)(param_1[1] + 8),pcVar4,
                 (float)param_1[0x42] * (float)_DAT_100dfb88,param_1[0x2e],0x100,param_1[0x3e]);
    (**(code **)(*param_1 + 8))(0x3dcccccd);
  }
  return;
}

