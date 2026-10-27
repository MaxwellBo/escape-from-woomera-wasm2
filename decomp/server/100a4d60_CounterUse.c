
/* public: void __thiscall CTriggerCounter::CounterUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CTriggerCounter::CounterUse
          (CTriggerCounter *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
          float param_4)

{
  CTriggerCounter *this_00;
  byte bVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  char *pcVar5;
  bool bVar6;
  
                    /* 0xa4d60  51
                       ?CounterUse@CTriggerCounter@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  this_00 = this + 0xc0;
  *(int *)(this + 0x128) = *(int *)(this + 0x128) + -1;
  FUN_10019420(this_00,(int)param_1);
  if (-1 < *(int *)(this + 0x128)) {
    iVar2 = FUN_10019460((uint *)this_00);
    pcVar5 = s_player_10101c54;
    pbVar4 = (byte *)(*(int *)(DAT_10122044 + 0x98) + **(int **)(iVar2 + 4));
    do {
      bVar1 = *pbVar4;
      bVar6 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_100a4dda:
        iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_100a4ddf;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar6 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_100a4dda;
      pbVar4 = pbVar4 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_100a4ddf:
    if ((iVar2 == 0) && ((*(byte *)(*(int *)(this + 4) + 0x1a0) & 1) == 0)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    iVar2 = *(int *)(this + 0x128);
    if (iVar2 == 0) {
      if (bVar6) {
        (*DAT_10121efc)(1,s_Sequence_completed__1011987c);
      }
      piVar3 = (int *)FUN_10019410((uint *)this_00);
      FUN_100a42c0(this,piVar3);
    }
    else if (bVar6) {
      if (iVar2 == 1) {
        (*DAT_10121efc)(1,s_Only_1_more_to_go____10119890);
        return;
      }
      if (iVar2 != 2) {
        if (iVar2 != 3) {
          (*DAT_10121efc)(1,s_There_are_more_to_go____101198d8);
          return;
        }
        (*DAT_10121efc)(1,s_Only_3_more_to_go____101198c0);
        return;
      }
      (*DAT_10121efc)(1,s_Only_2_more_to_go____101198a8);
      return;
    }
  }
  return;
}

