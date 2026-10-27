
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100347d0(void *this,undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iStack0000000c;
  
  if (*(int *)((int)this + 0x124) == 0) {
    FUN_10034a00((int)this);
  }
  iVar1 = *(int *)(*(int *)((int)this + 0x124) + 4);
  *(undefined4 *)(iVar1 + 8) = *param_2;
  *(undefined4 *)(iVar1 + 0xc) = param_2[1];
  *(undefined4 *)(iVar1 + 0x10) = param_2[2];
  lVar2 = __ftol();
  *(float *)(*(int *)(*(int *)((int)this + 0x124) + 4) + 0x14c) = (float)(int)lVar2;
  lVar2 = __ftol();
  *(float *)(*(int *)(*(int *)((int)this + 0x124) + 4) + 0x144) = (float)(int)lVar2;
  if (*(int *)((int)this + 0x138) == 1) {
    fsin((float10)*DAT_10122044 * (float10)_DAT_100dd63c);
    lVar2 = __ftol();
    iVar1 = *(int *)((int)this + 0x124);
    lVar3 = __ftol();
    *(float *)(*(int *)(iVar1 + 4) + 0x150) = (float)(int)lVar3;
    lVar3 = __ftol();
    iStack0000000c = (int)lVar3;
    *(float *)(*(int *)(iVar1 + 4) + 0x154) = (float)iStack0000000c;
    *(float *)(*(int *)(iVar1 + 4) + 0x158) = (float)(int)lVar2;
  }
  else {
    fsin((float10)*DAT_10122044 * (float10)_DAT_100dd63c);
    lVar2 = __ftol();
    iVar1 = *(int *)((int)this + 0x124);
    lVar3 = __ftol();
    *(float *)(*(int *)(iVar1 + 4) + 0x150) = (float)(int)lVar3;
    lVar3 = __ftol();
    iStack0000000c = (int)lVar3;
    *(float *)(*(int *)(iVar1 + 4) + 0x154) = (float)iStack0000000c;
    *(float *)(*(int *)(iVar1 + 4) + 0x158) = (float)(int)lVar2;
  }
  FUN_100afe10(*(int *)((int)this + 300),param_2);
  iVar1 = *(int *)(*(int *)((int)this + 300) + 4);
  *(float *)(iVar1 + 0x130) = DAT_10122044[1] * _DAT_100de45c + *(float *)(iVar1 + 0x130);
  iVar1 = *(int *)(*(int *)((int)this + 300) + 4);
  if (*(float *)(*(int *)((int)this + 300) + 0xbc) < *(float *)(iVar1 + 0x130)) {
    *(undefined4 *)(iVar1 + 0x130) = 0;
  }
  iVar1 = *(int *)(*(int *)((int)this + 0x128) + 4);
  *(undefined4 *)(iVar1 + 8) = *param_2;
  *(undefined4 *)(iVar1 + 0xc) = param_2[1];
  *(undefined4 *)(iVar1 + 0x10) = param_2[2];
  return;
}

