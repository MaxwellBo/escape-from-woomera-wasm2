
int __thiscall FUN_10073de0(void *this,float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  float local_4;
  
  fVar1 = param_1 - *(float *)(*(int *)((int)this + 4) + 8);
  fVar2 = param_2 - *(float *)(*(int *)((int)this + 4) + 0xc);
  local_4 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
  pvVar3 = (void *)FUN_10073950((int)this);
  iVar5 = 0;
  pvVar4 = this;
  for (; (pvVar3 != (void *)0x0 && (pvVar3 != this)); pvVar3 = (void *)FUN_10073950((int)pvVar3)) {
    iVar5 = iVar5 + 1;
    if (9999 < iVar5) {
      (*DAT_10121efc)(4,s_Bad_sequence_of_path_tracks_from_1011379c,
                      *(int *)(DAT_10122044 + 0x98) + *(int *)(*(int *)((int)this + 4) + 0x1cc));
      return 0;
    }
    fVar1 = param_1 - *(float *)(*(int *)((int)pvVar3 + 4) + 8);
    fVar2 = param_2 - *(float *)(*(int *)((int)pvVar3 + 4) + 0xc);
    fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
    if (fVar1 < local_4) {
      pvVar4 = pvVar3;
      local_4 = fVar1;
    }
  }
  return (int)pvVar4;
}

