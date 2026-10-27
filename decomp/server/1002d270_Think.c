
/* private: virtual void __thiscall CEnvModel::Think(void) */

void __thiscall CEnvModel::Think(CEnvModel *this)

{
  uint uVar1;
  int iVar2;
  
                    /* 0x2d270  244  ?Think@CEnvModel@@EAEXXZ */
  FUN_10007fc0((int)this,0.0);
  if ((*(int *)(this + 0xd4) != 0) && (*(int *)(this + 0xd8) == 0)) {
    uVar1 = *(uint *)(*(int *)(this + 4) + 0x1a0);
    if ((uVar1 & 1) == 0) {
      iVar2 = *(int *)(this + 0xe4);
    }
    else {
      iVar2 = *(int *)(this + 0xe8);
    }
    if (iVar2 != 2) {
      return;
    }
    if ((uVar1 & 1) == 0) {
      uVar1 = uVar1 | 1;
    }
    else {
      uVar1 = uVar1 & 0xfffffffe;
    }
    *(uint *)(*(int *)(this + 4) + 0x1a0) = uVar1;
    FUN_1002d2e0(this);
  }
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  return;
}

