
void __thiscall FUN_100196f0(void *this,float param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (((*(int *)((int)this + 0x10) == 0) && (*(int *)((int)this + 0x18) == 0)) &&
     (iVar3 = *(int *)((int)this + 4), (*(byte *)(iVar3 + 0x1a4) & 0x20) == 0)) {
    if (*(int *)(iVar3 + 0x108) == 7) {
      fVar1 = *(float *)(iVar3 + 0x100);
    }
    else {
      fVar1 = *DAT_10122044;
    }
    *(float *)(iVar3 + 0x104) = param_1 + fVar1;
    uVar2 = *(undefined4 *)(*(int *)((int)this + 4) + 0x104);
    *(undefined4 *)((int)this + 0x54) = uVar2;
    *(undefined4 *)((int)this + 0x58) = uVar2;
    return;
  }
  if (*(int *)(*(int *)((int)this + 4) + 0x108) == 7) {
    fVar1 = *(float *)(*(int *)((int)this + 4) + 0x100);
  }
  else {
    fVar1 = *DAT_10122044;
  }
  *(float *)((int)this + 0x54) = param_1 + fVar1;
  FUN_100196a0((int)this);
  FUN_100632b0((int)this,param_2);
  return;
}

