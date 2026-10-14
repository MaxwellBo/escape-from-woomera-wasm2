
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CGunTarget::Wait(void) */

void __thiscall CGunTarget::Wait(CGunTarget *this)

{
  int *piVar1;
  float10 fVar2;
  
                    /* 0x7a0f0  273  ?Wait@CGunTarget@@QAEXXZ */
  piVar1 = (int *)FUN_10019410((uint *)(this + 0x168));
  if (piVar1 == (int *)0x0) {
    (**(code **)(*(int *)this + 0x164))();
    return;
  }
  if (*(int *)(piVar1[1] + 0x1d4) != 0) {
    FUN_10098c10((uint *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(piVar1[1] + 0x1d4)),(int *)this,
                 this,3,0);
    if ((*(byte *)(piVar1[1] + 0x1a0) & 4) != 0) {
      *(undefined4 *)(piVar1[1] + 0x1d4) = 0;
    }
  }
  fVar2 = (float10)(**(code **)(*piVar1 + 0x94))();
  *(float *)(this + 0xe8) = (float)fVar2;
  *(undefined4 *)(*(int *)(this + 4) + 0x1c8) = *(undefined4 *)(piVar1[1] + 0x1c8);
  *(code **)(this + 0x74) = Next;
  if (*(float *)(this + 0xe8) != _DAT_100dd5f8) {
    (**(code **)(*(int *)this + 8))(*(float *)(this + 0xe8));
    return;
  }
  Next(this);
  return;
}

