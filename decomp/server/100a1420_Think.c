
/* public: virtual void __thiscall CWatcherCount::Think(void) */

void __thiscall CWatcherCount::Think(CWatcherCount *this)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  
                    /* 0xa1420  248  ?Think@CWatcherCount@@UAEXXZ */
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  iVar3 = 0;
  for (iVar1 = FUN_100af030(0,(byte *)(*(int *)(*(int *)(this + 4) + 0x1e8) +
                                      *(int *)(DAT_10122044 + 0x98))); iVar1 != 0;
      iVar1 = FUN_100af030(iVar1,(byte *)(*(int *)(*(int *)(this + 4) + 0x1e8) +
                                         *(int *)(DAT_10122044 + 0x98)))) {
    iVar3 = iVar3 + 1;
  }
  iVar1 = *(int *)(this + 4);
  if ((*(uint *)(iVar1 + 0x1a0) & 0x8000) == 0) {
    *(uint *)(iVar1 + 0x1a0) = *(uint *)(iVar1 + 0x1a0) | 0x8000;
    iVar1 = *(int *)(this + 4);
    if ((*(byte *)(iVar1 + 0x1a0) & 1) == 0) goto LAB_100a15c4;
    if (*(int *)(iVar1 + 0x184) <= iVar3) {
      iVar1 = *(int *)(iVar1 + 0x1d4);
      goto LAB_100a15b0;
    }
    puVar2 = (uint *)(*(int *)(iVar1 + 0x1d0) + *(int *)(DAT_10122044 + 0x98));
  }
  else if ((float)iVar3 <= *(float *)(iVar1 + 0x164)) {
    if (*(float *)(iVar1 + 0x164) <= (float)iVar3) goto LAB_100a15c4;
    if ((*(int *)(iVar1 + 0x184) <= iVar3) &&
       (*(float *)(iVar1 + 0x164) < (float)*(int *)(iVar1 + 0x184))) {
      FUN_10098c10((uint *)(*(int *)(iVar1 + 0x1d4) + *(int *)(DAT_10122044 + 0x98)),(int *)this,
                   this,3,0);
    }
    puVar2 = (uint *)(*(int *)(*(int *)(this + 4) + 0x1f0) + *(int *)(DAT_10122044 + 0x98));
  }
  else {
    if ((iVar3 < *(int *)(iVar1 + 0x184)) &&
       ((float)*(int *)(iVar1 + 0x184) <= *(float *)(iVar1 + 0x164))) {
      FUN_10098c10((uint *)(*(int *)(iVar1 + 0x1d0) + *(int *)(DAT_10122044 + 0x98)),(int *)this,
                   this,3,0);
    }
    iVar1 = *(int *)(*(int *)(this + 4) + 0x1ec);
LAB_100a15b0:
    puVar2 = (uint *)(iVar1 + *(int *)(DAT_10122044 + 0x98));
  }
  FUN_10098c10(puVar2,(int *)this,this,3,0);
LAB_100a15c4:
  *(float *)(*(int *)(this + 4) + 0x164) = (float)iVar3;
  return;
}

