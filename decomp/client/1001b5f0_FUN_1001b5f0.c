
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1001b5f0(void *this,float param_1,uint param_2)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  
  uVar1 = *(uint *)((int)this + 0xfc);
  iVar7 = 0;
  puVar6 = &DAT_10078598;
  pfVar9 = (float *)((int)this + 0x40);
  do {
    if (((*(uint *)((int)this + 0xfc) & *puVar6) != 0) &&
       (pfVar9[-1] = param_1 + _DAT_10059ea0, *pfVar9 == _DAT_10059a18)) {
      *pfVar9 = param_1;
    }
    if ((*puVar6 & ~uVar1 & param_2) != 0) {
      fVar2 = param_1 + _DAT_10059ea0;
      pfVar9[1] = (float)((int)(DAT_100a957c + (DAT_100a957c >> 0x1f & 7U)) >> 3);
      iVar4 = DAT_100a9578;
      iVar3 = DAT_100a4dd0;
      pfVar9[-1] = fVar2;
      iVar8 = 0;
      pfVar9[2] = (float)(iVar3 + iVar4 * -2);
      piVar5 = (int *)((int)this + 0x48);
      do {
        if ((iVar8 != iVar7) && (*piVar5 != 0)) {
          *piVar5 = *piVar5 - DAT_100a9578;
        }
        iVar8 = iVar8 + 1;
        piVar5 = piVar5 + 4;
      } while (iVar8 < 0xc);
    }
    puVar6 = puVar6 + 1;
    iVar7 = iVar7 + 1;
    pfVar9 = pfVar9 + 4;
  } while ((int)puVar6 < 0x100785c8);
  *(uint *)((int)this + 0xfc) = *(uint *)((int)this + 0xfc) | param_2;
  return;
}

