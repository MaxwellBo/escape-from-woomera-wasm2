
void __thiscall FUN_10017eb0(void *this,float param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  char *pcVar4;
  int *this_00;
  bool bVar5;
  
  this_00 = (int *)0x0;
  do {
    this_00 = (int *)FUN_100af100((int)this_00,
                                  *(int *)(DAT_10122044 + 0x98) +
                                  *(int *)(*(int *)((int)this + 4) + 0x1c8));
    if ((this_00 == (int *)0x0) || (*(int *)(this_00[1] + 0x208) == 0)) {
      return;
    }
    iVar2 = (*DAT_10121f20)(*(int *)(this_00[1] + 0x208));
    if (iVar2 == 0) {
      return;
    }
    pcVar4 = s_momentary_rot_button_10104cf4;
    pbVar3 = (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)this_00[1]);
    do {
      bVar1 = *pbVar3;
      bVar5 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_10017f3e:
        iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_10017f43;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar5 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_10017f3e;
      pbVar3 = pbVar3 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_10017f43:
    if (iVar2 == 0) {
      if (param_2 == 0) {
        FUN_10018240(this_00,param_1);
      }
      else {
        FUN_10017f80(this_00);
      }
    }
  } while( true );
}

