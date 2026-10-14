
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_100553b0(int param_1,void *param_2)

{
  int iVar1;
  float fVar2;
  void *this;
  char *pcVar3;
  void *pvVar4;
  byte abStack_40 [64];
  
  iVar1 = *(int *)((int)param_2 + 4);
  if ((*(float *)(iVar1 + 0x1bc) < _DAT_100dd61c) && ((*(uint *)(iVar1 + 0x168) & 0x80000000) != 0))
  {
    if (*(float *)(*(int *)(param_1 + 4) + 0x1bc) == _DAT_100dd5f8) {
      fVar2 = _DAT_10126b6c + *(float *)(iVar1 + 0x1bc);
    }
    else {
      fVar2 = *(float *)(iVar1 + 0x1bc) + *(float *)(*(int *)(param_1 + 4) + 0x1bc);
    }
    *(float *)(iVar1 + 0x1bc) = fVar2;
    this = *(void **)((int)param_2 + 4);
    fVar2 = _DAT_100dd61c;
    if (*(float *)((int)this + 0x1bc) < _DAT_100dd61c) {
      fVar2 = *(float *)((int)this + 0x1bc);
    }
    *(float *)((int)this + 0x1bc) = fVar2;
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x1e8);
    if (iVar1 == 0) {
      pcVar3 = s_items_gunpickup2_wav_1010fab8;
      pvVar4 = *(void **)(*(int *)((int)param_2 + 4) + 0x208);
    }
    else {
      pcVar3 = (char *)(*(int *)(DAT_10122044 + 0x98) + iVar1);
      this = *(void **)(*(int *)((int)param_2 + 4) + 0x208);
      pvVar4 = this;
    }
    FUN_10094b20(this,pvVar4,3,pcVar3,0x3f800000,0x3f4ccccd,0,100);
    (*DAT_10121ec0)(1,DAT_101248d0,0,*(undefined4 *)(*(int *)((int)param_2 + 4) + 0x208));
    (*DAT_10121ee0)(*(int *)(DAT_10122044 + 0x98) + **(int **)(param_1 + 4));
    (*DAT_10121ec4)();
    __ftol();
    FUN_100c8506(abStack_40,(byte *)s__HEV__1dP_1010fad0);
    FUN_1007e210(param_2,abStack_40,0,0x1e);
    return 1;
  }
  return 0;
}

