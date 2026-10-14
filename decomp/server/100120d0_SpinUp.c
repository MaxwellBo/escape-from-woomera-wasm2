
/* public: void __thiscall CFuncRotating::SpinUp(void) */

void __thiscall CFuncRotating::SpinUp(CFuncRotating *this)

{
  int iVar1;
  float fVar2;
  void *this_00;
  
                    /* 0x120d0  215  ?SpinUp@CFuncRotating@@QAEXXZ */
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  iVar1 = *(int *)(this + 4);
  fVar2 = *(float *)(iVar1 + 0x1f8) * *(float *)(this + 0xb8) + *(float *)(this + 0xcc);
  *(float *)(this + 0xcc) = fVar2;
  FUN_10063ac0((int)this,fVar2 * *(float *)(iVar1 + 0x44),fVar2 * *(float *)(iVar1 + 0x48),
               fVar2 * *(float *)(iVar1 + 0x4c));
  iVar1 = *(int *)(this + 4);
  if (*(float *)(iVar1 + 0x1f8) <= *(float *)(this + 0xcc)) {
    *(undefined4 *)(this + 0xd0) = 2;
    *(undefined4 *)(this + 0xcc) = *(undefined4 *)(iVar1 + 0x1f8);
    fVar2 = *(float *)(iVar1 + 0x1f8);
    FUN_10063ac0((int)this,fVar2 * *(float *)(iVar1 + 0x44),fVar2 * *(float *)(iVar1 + 0x48),
                 fVar2 * *(float *)(iVar1 + 0x4c));
    this_00 = (void *)(*(int *)(*(int *)(this + 4) + 500) + *(int *)(DAT_10122044 + 0x98));
    FUN_10094b20(this_00,*(undefined4 *)(*(int *)(this + 4) + 0x208),6,this_00,
                 *(undefined4 *)(this + 0xc0),*(undefined4 *)(this + 0xbc),0xc0,100);
    *(code **)(this + 0x74) = Rotate;
    Rotate(this);
    return;
  }
  FUN_10012050((int)this);
  return;
}

