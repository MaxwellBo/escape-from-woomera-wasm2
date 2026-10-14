
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100749c0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  *(int *)((int)this + 0xb8) = param_1;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x10c) = 1;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x108) = 0;
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)((int)this + 4);
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 8);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
  iVar1 = *(int *)((int)this + 0xb8);
  local_14 = *(float *)(*(int *)(iVar1 + 4) + 0xe0) + _DAT_100e0eec;
  local_18 = *(float *)(*(int *)(iVar1 + 4) + 0xdc) + _DAT_100e0eec;
  iVar2 = *(int *)(iVar1 + 4);
  local_4 = *(float *)(iVar2 + 0xf0) + _DAT_100de45c;
  local_8 = *(float *)(iVar2 + 0xec) + _DAT_100e0eec;
  local_c = *(float *)(iVar2 + 0xe8) + _DAT_100e0eec;
  local_10 = local_4 - ((*(float *)(iVar1 + 0x100) - *(float *)(iVar1 + 0x10c)) + _DAT_100de45c);
  iVar2 = *(int *)(iVar1 + 4);
  if (*(float *)(iVar2 + 0xf4) <= _DAT_100ddaf8) {
    local_18 = (*(float *)(iVar2 + 0xe8) + *(float *)(iVar2 + 0xdc)) * _DAT_100dd614;
    local_c = local_18 + _DAT_100dd618;
  }
  iVar1 = *(int *)(iVar1 + 4);
  if (*(float *)(iVar1 + 0xf8) <= _DAT_100ddaf8) {
    local_14 = (*(float *)(iVar1 + 0xec) + *(float *)(iVar1 + 0xe0)) * _DAT_100dd614;
    local_8 = local_14 + _DAT_100dd618;
  }
  FUN_100afdc0(*(int *)((int)this + 4),&local_18,&local_c);
  return;
}

