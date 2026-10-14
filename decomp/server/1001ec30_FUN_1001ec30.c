
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1001ec30(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  
  if ((*(uint *)((int)this + 0x2a0) & 0x80) != 0) {
    iVar1 = FUN_1001eb10(this,param_2);
    if (iVar1 == 0) {
      return;
    }
    FUN_1001eb40(this);
    return;
  }
  *(uint *)((int)this + 0x2a0) = *(uint *)((int)this + 0x2a0) | 0x80;
  FUN_10094b20(*(void **)((int)this + 4),*(undefined4 *)((int)*(void **)((int)this + 4) + 0x208),1,
               s_common_null_wav_10103c74,0x3f800000,0x3f4ccccd,0,100);
  *(undefined4 *)((int)this + 0x1dc) = 8;
  *(uint *)((int)this + 0x15c) = *(uint *)((int)this + 0x15c) | 0x100;
  iVar1 = *(int *)(*(int *)((int)this + 4) + 0x198);
  if (((iVar1 != 0) || (iVar1 = (*DAT_10121f1c)(0), iVar1 != 0)) &&
     (*(int **)(iVar1 + 0x7c) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar1 + 0x7c) + 0x50))(*(undefined4 *)((int)this + 4));
  }
  iVar1 = FUN_1001eb10(this,param_2);
  if (iVar1 == 0) {
    if ((*(byte *)(*(int *)((int)this + 4) + 0x1a4) & 0x20) != 0) {
      *(undefined4 *)((int)this + 0x78) = 0;
      (**(code **)(*(int *)this + 0x13c))();
    }
    if (*(float *)(*(int *)((int)this + 4) + 0x160) < _DAT_100e0ec0) {
      *(undefined4 *)(*(int *)((int)this + 4) + 0x160) = 0;
    }
    *(undefined4 *)((int)this + 0x1dc) = 8;
    return;
  }
  FUN_1001eb40(this);
  return;
}

