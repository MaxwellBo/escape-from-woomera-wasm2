
/* public: void __thiscall CFuncTrainControls::Find(void) */

void __thiscall CFuncTrainControls::Find(CFuncTrainControls *this)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  void *this_00;
  bool bVar5;
  
                    /* 0x78b60  103  ?Find@CFuncTrainControls@@QAEXXZ */
  this_00 = (void *)0x0;
  do {
    this_00 = (void *)FUN_100af030((int)this_00,
                                   (byte *)(*(int *)(DAT_10122044 + 0x98) +
                                           *(int *)(*(int *)(this + 4) + 0x1c8)));
    if (this_00 == (void *)0x0) goto LAB_10078be1;
    pcVar4 = s_func_tracktrain_10114240;
    pbVar2 = (byte *)(**(int **)((int)this_00 + 4) + *(int *)(DAT_10122044 + 0x98));
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_10078bd4:
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_10078bd9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_10078bd4;
      pbVar2 = pbVar2 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_10078bd9:
  } while (iVar3 != 0);
  if (this_00 != (void *)0x0) {
    FUN_10078460(this_00,*(int *)(this + 4));
    FUN_100b0ef0((int)this);
    return;
  }
LAB_10078be1:
  (*DAT_10121efc)(1,s_TrackTrainControls__No_train__s_10114250,
                  *(int *)(DAT_10122044 + 0x98) + *(int *)(*(int *)(this + 4) + 0x1c8));
  return;
}

