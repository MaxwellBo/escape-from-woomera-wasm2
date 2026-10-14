
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CFuncTrain::Wait(void) */

void __thiscall CFuncTrain::Wait(CFuncTrain *this)

{
  void *pvVar1;
  
                    /* 0x756e0  272  ?Wait@CFuncTrain@@QAEXXZ */
  if (*(int **)(this + 0x164) != (int *)0x0) {
    FUN_1007add0(*(int **)(this + 0x164));
  }
  if (*(int *)(*(int *)(this + 0x168) + 0x1d4) != 0) {
    FUN_10098c10((uint *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(*(int *)(this + 0x168) + 0x1d4)),
                 (int *)this,this,3,0);
    if ((*(byte *)(*(int *)(this + 0x168) + 0x1a0) & 4) != 0) {
      *(undefined4 *)(*(int *)(this + 0x168) + 0x1d4) = 0;
    }
  }
  if (((*(byte *)(*(int *)(this + 0x168) + 0x1a0) & 1) == 0) &&
     ((*(byte *)(*(int *)(this + 4) + 0x1a0) & 1) == 0)) {
    if (*(float *)(this + 0xe8) != _DAT_100dd5f8) {
      *(undefined4 *)(this + 0x170) = 0;
      FUN_10063ac0((int)this,DAT_10121dd8,DAT_10121ddc,DAT_10121de0);
      FUN_100638f0((int)this,DAT_10121dd8,DAT_10121ddc,DAT_10121de0);
      (**(code **)(*(int *)this + 8))(*(undefined4 *)(this + 0xe8));
      pvVar1 = *(void **)(*(int *)(this + 4) + 0x1e8);
      if (pvVar1 != (void *)0x0) {
        FUN_10094b20(pvVar1,*(undefined4 *)(*(int *)(this + 4) + 0x208),6,
                     (char *)(*(int *)(DAT_10122044 + 0x98) + (int)pvVar1),0,0,0x20,100);
      }
      pvVar1 = *(void **)(*(int *)(this + 4) + 0x1ec);
      if (pvVar1 != (void *)0x0) {
        FUN_10094b20(pvVar1,*(undefined4 *)(*(int *)(this + 4) + 0x208),2,
                     (char *)(*(int *)(DAT_10122044 + 0x98) + (int)pvVar1),
                     *(undefined4 *)(this + 0x160),0x3f4ccccd,0,100);
      }
      *(code **)(this + 0x74) = Next;
      return;
    }
    Next(this);
    return;
  }
  *(uint *)(*(int *)(this + 4) + 0x1a0) = *(uint *)(*(int *)(this + 4) + 0x1a0) | 1;
  *(undefined4 *)(this + 0x170) = 0;
  pvVar1 = *(void **)(*(int *)(this + 4) + 0x1e8);
  if (pvVar1 != (void *)0x0) {
    FUN_10094b20(pvVar1,*(undefined4 *)(*(int *)(this + 4) + 0x208),6,
                 (char *)(*(int *)(DAT_10122044 + 0x98) + (int)pvVar1),0,0,0x20,100);
  }
  pvVar1 = *(void **)(*(int *)(this + 4) + 0x1ec);
  if (pvVar1 != (void *)0x0) {
    FUN_10094b20(pvVar1,*(undefined4 *)(*(int *)(this + 4) + 0x208),2,
                 (char *)(*(int *)(DAT_10122044 + 0x98) + (int)pvVar1),*(undefined4 *)(this + 0x160)
                 ,0x3f4ccccd,0,100);
  }
  FUN_100638f0((int)this,DAT_10121dd8,DAT_10121ddc,DAT_10121de0);
  FUN_10063ac0((int)this,DAT_10121dd8,DAT_10121ddc,DAT_10121de0);
  FUN_10019680((int)this);
  return;
}

