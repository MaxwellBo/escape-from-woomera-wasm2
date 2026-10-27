
undefined4 __thiscall FUN_10078510(void *this,int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar1 = *(int *)((int)this + 4);
  fVar2 = *(float *)(param_1 + 8) - *(float *)(iVar1 + 8);
  fVar3 = *(float *)(param_1 + 0xc) - *(float *)(iVar1 + 0xc);
  fVar4 = *(float *)(param_1 + 0x10) - *(float *)(iVar1 + 0x10);
  if ((*(byte *)(iVar1 + 0x1a0) & 2) == 0) {
    FUN_100af200(iVar1 + 0x50);
    fVar5 = fVar2 * *(float *)(DAT_10122044 + 0x28) +
            fVar3 * *(float *)(DAT_10122044 + 0x2c) + fVar4 * *(float *)(DAT_10122044 + 0x30);
    fVar6 = -(fVar2 * *(float *)(DAT_10122044 + 0x40) +
             fVar3 * *(float *)(DAT_10122044 + 0x44) + fVar4 * *(float *)(DAT_10122044 + 0x48));
    fVar2 = fVar2 * *(float *)(DAT_10122044 + 0x34) +
            fVar3 * *(float *)(DAT_10122044 + 0x38) + fVar4 * *(float *)(DAT_10122044 + 0x3c);
    if ((((*(float *)((int)this + 0xd4) <= fVar5) && (*(float *)((int)this + 0xd8) <= fVar6)) &&
        (*(float *)((int)this + 0xdc) <= fVar2)) &&
       (((fVar5 <= *(float *)((int)this + 0xe0) && (fVar6 <= *(float *)((int)this + 0xe4))) &&
        (fVar2 <= *(float *)((int)this + 0xe8))))) {
      return 1;
    }
  }
  return 0;
}

