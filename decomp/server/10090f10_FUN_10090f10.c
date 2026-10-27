
int * __thiscall FUN_10090f10(void *this,int param_1)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  
  for (piVar2 = (int *)FUN_100af060(0,(byte *)(*(int *)(DAT_10122044 + 0x98) +
                                              *(int *)((int)this + 0x160)),param_1);
      piVar2 != (int *)0x0;
      piVar2 = (int *)FUN_100af060((int)piVar2,
                                   (byte *)(*(int *)(DAT_10122044 + 0x98) +
                                           *(int *)((int)this + 0x160)),param_1)) {
    piVar3 = (int *)(**(code **)(*piVar2 + 0x74))();
    if ((piVar3 != (int *)0x0) && (iVar4 = FUN_10090e50(this,piVar3), iVar4 != 0)) {
      return piVar3;
    }
  }
  piVar2 = (int *)FUN_100aeba0(0,*(int *)((int)this + 4) + 8,*(undefined4 *)((int)this + 0x164));
  do {
    if (piVar2 == (int *)0x0) {
      return (int *)0x0;
    }
    pbVar6 = (byte *)(*(int *)((int)this + 0x160) + *(int *)(DAT_10122044 + 0x98));
    pbVar5 = (byte *)(*(int *)piVar2[1] + *(int *)(DAT_10122044 + 0x98));
    do {
      bVar1 = *pbVar5;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_10090fe8:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_10090fed;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_10090fe8;
      pbVar5 = pbVar5 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_10090fed:
    if ((iVar4 == 0) && ((*(byte *)((int *)piVar2[1] + 0x69) & 0x20) != 0)) {
      piVar3 = (int *)(**(code **)(*piVar2 + 0x74))();
      iVar4 = FUN_10090e50(this,piVar3);
      if (iVar4 != 0) {
        return piVar3;
      }
    }
    piVar2 = (int *)FUN_100aeba0((int)piVar2,*(int *)((int)this + 4) + 8,
                                 *(undefined4 *)((int)this + 0x164));
  } while( true );
}

