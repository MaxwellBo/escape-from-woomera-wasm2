
void __thiscall FUN_10007d70(void *this,int param_1)

{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  bool bVar7;
  
  piVar3 = (int *)FUN_100af060(0,(byte *)(*(int *)(DAT_10122044 + 0x98) +
                                         *(int *)(*(int *)((int)this + 4) + 0x1c8)),param_1);
  if ((piVar3 == (int *)0x0) || (iVar4 = (**(code **)(*piVar3 + 0x24))(), iVar4 == 0)) {
    (*DAT_10121efc)(4,s_trigger_changealias__s__alias____101020f4,
                    *(int *)(*(int *)((int)this + 4) + 0x1cc) + *(int *)(DAT_10122044 + 0x98),
                    *(int *)(*(int *)((int)this + 4) + 0x1c8) + *(int *)(DAT_10122044 + 0x98));
    return;
  }
  pcVar6 = s__locus_10102138;
  pbVar1 = (byte *)(*(int *)(*(int *)((int)this + 4) + 0x1d0) + *(int *)(DAT_10122044 + 0x98));
  pbVar5 = pbVar1;
  do {
    bVar2 = *pbVar5;
    bVar7 = bVar2 < (byte)*pcVar6;
    if (bVar2 != *pcVar6) {
LAB_10007dfa:
      iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_10007dff;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar5[1];
    bVar7 = bVar2 < (byte)pcVar6[1];
    if (bVar2 != pcVar6[1]) goto LAB_10007dfa;
    pbVar5 = pbVar5 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_10007dff:
  if ((iVar4 != 0) && ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 1) != 0)) {
    param_1 = FUN_100aef20(0,pbVar1);
  }
  if (param_1 == 0) {
    (**(code **)(*piVar3 + 0x120))(*(undefined4 *)(*(int *)((int)this + 4) + 0x1d0));
    return;
  }
  (**(code **)(*piVar3 + 0x11c))(param_1);
  return;
}

