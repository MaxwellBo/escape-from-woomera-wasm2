
/* WARNING: Removing unreachable block (ram,0x1002d52a) */
/* WARNING: Removing unreachable block (ram,0x1002d558) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_1002d490(int param_1,float param_2,float *param_3,float *param_4,int param_5,byte param_6)

{
  int iVar1;
  float fVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  char *pcVar7;
  int iStack_c;
  
  pcVar3 = (char *)param_4;
  iVar1 = *(int *)(param_1 + 0x44);
  iStack_c = 0;
  if (0 < *(int *)(iVar1 + 0x94)) {
    param_4 = param_3;
    pfVar6 = (float *)(*(int *)(iVar1 + 0x98) + iVar1 + 8);
    pcVar7 = pcVar3;
    do {
      fVar2 = pfVar6[3];
      if ((int)fVar2 < 4) {
        if (((uint)pfVar6[-1] & 0x8000) == 0) {
          fVar2 = ((float)(byte)pcVar3[(int)fVar2] * param_2 +
                  ((float)_DAT_10059a10 - param_2) * (float)*(byte *)((int)fVar2 + param_5)) *
                  (float)_DAT_1005ac80;
          if (fVar2 < _DAT_10059a18) {
            fVar2 = _DAT_10059a18;
          }
          if ((float)_DAT_10059a10 < fVar2) goto LAB_1002d621;
          goto LAB_1002d629;
        }
        uVar4 = (uint)(byte)pcVar3[(int)fVar2] - (uint)*(byte *)((int)fVar2 + param_5);
        uVar5 = (int)uVar4 >> 0x1f;
        if ((int)((uVar4 ^ uVar5) - uVar5) < 0x81) {
          fVar2 = ((float)(byte)pcVar3[(int)fVar2] * param_2 +
                  ((float)_DAT_10059a10 - param_2) * (float)*(byte *)((int)fVar2 + param_5)) *
                  (float)_DAT_100601c8 + *pfVar6;
        }
        else {
          fVar2 = (((float)(byte)(*pcVar7 + 0x80) * param_2 +
                   (_DAT_10059eb0 - param_2) * (float)(byte)(pcVar7[param_5 - (int)pcVar3] + 0x80))
                  - _DAT_1005aca8) * (float)_DAT_100601c8 + *pfVar6;
        }
      }
      else {
        fVar2 = (float)param_6 * (float)_DAT_10060330;
        if ((float)_DAT_10059a10 < fVar2) {
LAB_1002d621:
          fVar2 = _DAT_10059eb0;
        }
LAB_1002d629:
        fVar2 = fVar2 * pfVar6[1] + ((float)_DAT_10059a10 - fVar2) * *pfVar6;
      }
      switch((uint)pfVar6[-1] & 0x7fff) {
      case 1:
      case 2:
      case 4:
        *param_4 = fVar2;
        break;
      default:
        break;
      case 8:
      case 0x10:
      case 0x20:
        *param_4 = fVar2 * (float)_DAT_100601e0;
      }
      param_4 = param_4 + 1;
      iStack_c = iStack_c + 1;
      pcVar7 = pcVar7 + 1;
      pfVar6 = pfVar6 + 6;
    } while (iStack_c < *(int *)(*(int *)(param_1 + 0x44) + 0x94));
  }
  return;
}

