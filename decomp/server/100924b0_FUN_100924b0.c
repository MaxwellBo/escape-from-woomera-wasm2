
void __fastcall FUN_100924b0(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  
  iVar2 = param_1[1];
  uVar3 = *(uint *)(iVar2 + 0x1a0);
  if ((uVar3 & 1) == 0) {
    if ((uVar3 & 2) == 0) {
      if (((uVar3 & 4) == 0) && ((uVar3 & 8) != 0)) {
        param_1[0x2e] = 0x3f4ccccd;
      }
      else {
        param_1[0x2e] = 0x3fa00000;
      }
    }
    else {
      param_1[0x2e] = 0x40000000;
    }
  }
  else {
    param_1[0x2e] = 0;
  }
  if (*(int *)(iVar2 + 0x1d4) != 0) {
    iVar4 = -1;
    pcVar5 = (char *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(iVar2 + 0x1d4));
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (iVar4 != -2) {
      *(undefined4 *)(iVar2 + 0x10c) = 0;
      *(undefined4 *)(param_1[1] + 0x108) = 0;
      param_1[0x1d] = (int)CAmbientGeneric::RampThink;
      FUN_10019680((int)param_1);
      param_1[0x1f] = (int)CAmbientGeneric::ToggleUse;
      param_1[0x48] = 0;
      if ((*(byte *)(param_1[1] + 0x1a0) & 0x20) != 0) {
        param_1[0x49] = 0;
        (**(code **)(*param_1 + 0x2c))();
        return;
      }
      param_1[0x49] = 1;
      (**(code **)(*param_1 + 0x2c))();
      return;
    }
  }
  (*DAT_10121efc)(4,s_ambient_generic___s__at___f___f__10116ea0,
                  *(int *)(iVar2 + 0x1cc) + *(int *)(DAT_10122044 + 0x98),
                  (double)*(float *)(iVar2 + 8),(double)*(float *)(iVar2 + 0xc),
                  (double)*(float *)(iVar2 + 0x10));
  (**(code **)(*param_1 + 8))();
  param_1[0x1d] = (int)CBaseEntity::SUB_Remove;
  return;
}

