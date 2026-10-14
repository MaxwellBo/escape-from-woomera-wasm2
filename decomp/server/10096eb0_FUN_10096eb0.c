
undefined4 __thiscall FUN_10096eb0(void *this,float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  undefined3 extraout_var;
  void *pvVar4;
  uint *puVar5;
  int iVar6;
  
  bVar3 = FUN_10019450((uint *)((int)this + 0x308));
  if (CONCAT31(extraout_var,bVar3) != 0) {
    pvVar4 = (void *)FUN_10019410((uint *)((int)this + 0x308));
    if (pvVar4 != (void *)0x0) {
      this = pvVar4;
    }
    iVar6 = 0;
    puVar5 = (uint *)((int)this + 0x310);
    do {
      pvVar4 = this;
      if (iVar6 < 4) {
        pvVar4 = (void *)FUN_10019410(puVar5);
      }
      if ((pvVar4 != (void *)0x0) &&
         (fVar1 = *param_1 - *(float *)(*(int *)((int)pvVar4 + 4) + 8),
         fVar2 = param_1[1] - *(float *)(*(int *)((int)pvVar4 + 4) + 0xc),
         SQRT(fVar2 * fVar2 + fVar1 * fVar1) <= param_2)) {
        return 1;
      }
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 2;
    } while (iVar6 < 5);
  }
  return 0;
}

