
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_1002c070(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  float *pfVar2;
  undefined4 *this_00;
  int iVar3;
  float local_c [3];
  
  if ((((*(uint *)(*(int *)((int)this + 4) + 0x1a0) & 0x400) == 0) ||
      (*(int *)((int)this + 0xb8) == 0)) || (*(int *)((int)this + 0xbc) == 0)) {
    if (*(int *)((int)this + 0xb8) != 0) {
      FUN_10063390(*(int *)((int)this + 0xb8));
    }
    iVar3 = param_4;
    if (*(int *)((int)this + 0xbc) != 0) {
      FUN_10063390(*(int *)((int)this + 0xbc));
    }
    iVar1 = *(int *)((int)this + 4);
    this_00 = (undefined4 *)(iVar3 + 0x14);
    *(undefined4 *)(iVar1 + 8) = param_1;
    *(undefined4 *)(iVar1 + 0xc) = param_2;
    *(undefined4 *)(iVar1 + 0x10) = param_3;
    iVar1 = *(int *)((int)this + 4);
    *(undefined4 *)(iVar1 + 0x50) = *this_00;
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(iVar3 + 0x18);
    *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(iVar3 + 0x1c);
  }
  else {
    pfVar2 = (float *)FUN_10002250(&param_1,local_c,
                                   (float *)(*(int *)(*(int *)((int)this + 0xb8) + 4) + 8));
    FUN_100638f0(*(int *)((int)this + 0xb8),*pfVar2 * _DAT_100dd63c,pfVar2[1] * _DAT_100dd63c,
                 pfVar2[2] * _DAT_100dd63c);
    iVar3 = param_4;
    this_00 = (undefined4 *)(param_4 + 0x14);
    pfVar2 = (float *)FUN_10002250(this_00,local_c,
                                   (float *)(*(int *)(*(int *)((int)this + 0xbc) + 4) + 8));
    FUN_100638f0(*(int *)((int)this + 0xbc),*pfVar2 * _DAT_100dd63c,pfVar2[1] * _DAT_100dd63c,
                 pfVar2[2] * _DAT_100dd63c);
  }
  FUN_1002ab00(this,iVar3);
  FUN_10029b30(this,&param_1,this_00);
  return;
}

