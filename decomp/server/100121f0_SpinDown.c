
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CFuncRotating::SpinDown(void) */

void __thiscall CFuncRotating::SpinDown(CFuncRotating *this)

{
  int iVar1;
  void *this_00;
  float fVar2;
  longlong lVar3;
  
                    /* 0x121f0  213  ?SpinDown@CFuncRotating@@QAEXXZ */
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  iVar1 = *(int *)(this + 4);
  fVar2 = *(float *)(this + 0xcc) - *(float *)(iVar1 + 0x1f8) * *(float *)(this + 0xb8);
  *(float *)(this + 0xcc) = fVar2;
  FUN_10063ac0((int)this,fVar2 * *(float *)(iVar1 + 0x44),fVar2 * *(float *)(iVar1 + 0x48),
               fVar2 * *(float *)(iVar1 + 0x4c));
  if (*(float *)(this + 0xcc) <= _DAT_100dd5f8) {
    *(undefined4 *)(this + 0xd0) = 0;
    *(undefined4 *)(this + 0xcc) = 0;
    FUN_10063ac0((int)this,DAT_10121dd8,DAT_10121ddc,DAT_10121de0);
    iVar1 = *(int *)(this + 4);
    lVar3 = __ftol();
    this_00 = *(void **)(iVar1 + 0x208);
    FUN_10094b20(this_00,this_00,6,(char *)(*(int *)(iVar1 + 500) + *(int *)(DAT_10122044 + 0x98)),0
                 ,0,0x20,(int)lVar3);
    *(code **)(this + 0x74) = Rotate;
    Rotate(this);
    return;
  }
  FUN_10012050((int)this);
  return;
}

