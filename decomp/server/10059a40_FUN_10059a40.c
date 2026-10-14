
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_10059a40(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  float10 fVar7;
  float10 fVar8;
  float10 extraout_ST0;
  longlong lVar9;
  
  iVar4 = (int)param_2;
  fVar7 = FUN_100588f0(DAT_10122044,(int)param_2,
                       (byte *)(*(int *)(DAT_10122044 + 0x98) +
                               *(int *)(*(int *)(param_1 + 4) + 0x1c8)));
  param_2 = (float)fVar7;
  iVar5 = *(int *)(*(int *)(param_1 + 4) + 0x184);
  if (iVar5 == 1) {
    param_2 = _DAT_100dd618 - param_2;
  }
  else if (iVar5 == 2) {
    param_2 = -param_2;
  }
  else if (iVar5 == 3) {
    param_2 = _DAT_100dd618 / param_2;
  }
  fVar7 = FUN_100588f0(DAT_10122044,iVar4,
                       (byte *)(*(int *)(*(int *)(param_1 + 4) + 0x1d0) +
                               *(int *)(DAT_10122044 + 0x98)));
  puVar6 = (undefined1 *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(*(int *)(param_1 + 4) + 0x1d4));
  fVar8 = FUN_100588f0(puVar6,iVar4,puVar6);
  iVar5 = *(int *)(*(int *)(param_1 + 4) + 0x1e8);
  fVar1 = (float)(fVar8 * (float10)(float)(fVar7 + (float10)param_2));
  if (iVar5 == 0) {
    puVar6 = *(undefined1 **)(*(int *)(param_1 + 4) + 0x1ec);
    if ((puVar6 != (undefined1 *)0x0) &&
       (fVar7 = FUN_100588f0(puVar6,iVar4,puVar6 + *(int *)(DAT_10122044 + 0x98)),
       fVar7 <= (float10)fVar1)) {
      return fVar7;
    }
    return (float10)fVar1;
  }
  puVar6 = (undefined1 *)(*(int *)(DAT_10122044 + 0x98) + iVar5);
  fVar7 = FUN_100588f0(puVar6,iVar4,puVar6);
  fVar2 = (float)fVar7;
  iVar5 = *(int *)(*(int *)(param_1 + 4) + 0x1ec);
  if (iVar5 == 0) {
    fVar7 = (float10)fVar1;
  }
  else {
    fVar7 = FUN_100588f0(DAT_10122044,iVar4,(byte *)(*(int *)(DAT_10122044 + 0x98) + iVar5));
    fVar3 = (float)fVar7;
    fVar7 = (float10)fVar1;
    if (((float10)fVar2 <= fVar7) && (fVar7 <= (float10)fVar3)) {
      return fVar7;
    }
    lVar9 = __ftol();
    iVar5 = (int)lVar9;
    if (iVar5 == 0) {
      if (extraout_ST0 < (float10)fVar2) {
        return (float10)fVar2;
      }
      return (float10)fVar3;
    }
    if (iVar5 == 1) {
      fVar7 = extraout_ST0;
      if (extraout_ST0 < (float10)fVar2) {
        do {
          fVar7 = ((float10)fVar3 - (float10)fVar2) + fVar7;
        } while (fVar7 < (float10)fVar2);
      }
      if (fVar7 <= (float10)fVar3) {
        return fVar7;
      }
      do {
        fVar7 = fVar7 - ((float10)fVar3 - (float10)fVar2);
      } while ((float10)fVar3 < fVar7);
      return fVar7;
    }
    fVar7 = extraout_ST0;
    if (iVar5 == 2) {
      while( true ) {
        for (; fVar7 < (float10)fVar2; fVar7 = ((float10)fVar3 + (float10)fVar2) - fVar7) {
        }
        if (fVar7 <= (float10)fVar3) break;
        fVar7 = ((float10)fVar3 + (float10)fVar3) - fVar7;
      }
      return fVar7;
    }
  }
  if ((float10)fVar2 < fVar7) {
    return fVar7;
  }
  return (float10)fVar2;
}

