
/* WARNING: Removing unreachable block (ram,0x1002a9fb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_1002a9d0(void *this,int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  
  if ((*(float *)(param_1 + 0x10) != (float)_DAT_100dd628) && (*(int *)(param_1 + 0x30) != 0)) {
    uVar2 = *(uint *)(*(int *)(param_1 + 0x30) + 0x7c);
    if (uVar2 != 0) {
      iVar5 = *(int *)(*(int *)((int)this + 4) + 0x1d0);
      if (iVar5 == 0) {
        return -(uint)((*(uint *)(*(int *)(uVar2 + 4) + 0x1a4) & 0x28) != 0) & uVar2;
      }
      iVar3 = *(int *)(DAT_10122044 + 0x98);
      pbVar7 = (byte *)(iVar3 + iVar5);
      pbVar4 = (byte *)(**(int **)(uVar2 + 4) + iVar3);
      pbVar6 = pbVar7;
      do {
        bVar1 = *pbVar4;
        bVar8 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_1002aa7e:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_1002aa83;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_1002aa7e;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_1002aa83:
      if (iVar5 == 0) {
        return uVar2;
      }
      pbVar6 = (byte *)((*(int **)(uVar2 + 4))[0x73] + iVar3);
      while( true ) {
        bVar1 = *pbVar6;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) break;
        if (bVar1 == 0) {
          _DAT_100dd628 = _DAT_100dd628;
          DAT_10121f1c = DAT_10121f1c;
          return uVar2;
        }
        bVar1 = pbVar6[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) break;
        pbVar6 = pbVar6 + 2;
        pbVar7 = pbVar7 + 2;
        if (bVar1 == 0) {
          return uVar2;
        }
      }
      return ~-(uint)(1 - bVar8 != (uint)(bVar8 != 0)) & uVar2;
    }
  }
  _DAT_100dd628 = _DAT_100dd628;
  DAT_10121f1c = DAT_10121f1c;
  return 0;
}

