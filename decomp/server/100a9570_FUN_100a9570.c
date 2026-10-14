
void __thiscall FUN_100a9570(void *this,int param_1)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  
  piVar2 = (int *)FUN_100af060(0,(byte *)(*(int *)(DAT_10122044 + 0x98) +
                                         *(int *)(*(int *)((int)this + 4) + 0x1c8)),param_1);
  if (piVar2 != (int *)0x0) {
    pcVar5 = s__locus_10102138;
    pbVar3 = (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)((int)this + 200));
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_100a95e7:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_100a95ec;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_100a95e7;
      pbVar3 = pbVar3 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_100a95ec:
    if (iVar4 == 0) {
      if (param_1 == 0) {
        (*DAT_10121efc)(4,s_trigger_changetarget___s__requir_10119db4,
                        *(int *)(*(int *)((int)this + 4) + 0x1cc) + *(int *)(DAT_10122044 + 0x98));
      }
      else {
        *(undefined4 *)(piVar2[1] + 0x1c8) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1cc);
      }
    }
    else {
      *(int *)(piVar2[1] + 0x1c8) = *(int *)((int)this + 200);
    }
    iVar4 = (**(code **)(*piVar2 + 0x74))();
    if (iVar4 != 0) {
      *(undefined4 *)(iVar4 + 8) = 0;
    }
  }
  return;
}

