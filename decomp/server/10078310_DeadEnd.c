
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CFuncTrackTrain::DeadEnd(void) */

void __thiscall CFuncTrackTrain::DeadEnd(CFuncTrackTrain *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x78310  59  ?DeadEnd@CFuncTrackTrain@@QAEXXZ */
  iVar2 = *(int *)(this + 0xbc);
  (*DAT_10121efc)(2,s_TRAIN__s___Dead_end_101141b4,
                  *(int *)(*(int *)(this + 4) + 0x1cc) + *(int *)(DAT_10122044 + 0x98));
  if (iVar2 != 0) {
    iVar1 = iVar2;
    if (_DAT_100dd5f8 <= *(float *)(this + 0xfc)) {
      do {
        iVar2 = iVar1;
        iVar3 = 1;
        iVar1 = FUN_10073950(iVar2);
        iVar1 = FUN_10073820(iVar1,iVar3);
      } while (iVar1 != 0);
    }
    else {
      do {
        iVar2 = iVar1;
        iVar3 = 1;
        iVar1 = FUN_10073980(iVar2);
        iVar1 = FUN_10073820(iVar1,iVar3);
      } while (iVar1 != 0);
    }
  }
  FUN_100638f0((int)this,DAT_10121dd8,DAT_10121ddc,DAT_10121de0);
  if ((*(uint *)(*(int *)(this + 4) + 0x1a0) & 0x800000) == 0) {
    FUN_10063ac0((int)this,DAT_10121dd8,DAT_10121ddc,DAT_10121de0);
  }
  if (iVar2 == 0) {
    (*DAT_10121efc)(2,&DAT_1010541c);
  }
  else {
    (*DAT_10121efc)(2,s_at__s_101141ac,
                    *(int *)(*(int *)(iVar2 + 4) + 0x1cc) + *(int *)(DAT_10122044 + 0x98));
    iVar2 = *(int *)(*(int *)(iVar2 + 4) + 0x1d0);
    if (iVar2 != 0) {
      FUN_10098c10((uint *)(*(int *)(DAT_10122044 + 0x98) + iVar2),(int *)this,this,3,0);
      return;
    }
  }
  return;
}

