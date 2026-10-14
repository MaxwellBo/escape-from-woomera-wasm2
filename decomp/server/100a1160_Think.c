
/* public: virtual void __thiscall CStateWatcher::Think(void) */

void __thiscall CStateWatcher::Think(CStateWatcher *this)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  uint uVar3;
  
                    /* 0xa1160  245  ?Think@CStateWatcher@@UAEXXZ */
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  uVar3 = *(uint *)(*(int *)(this + 4) + 0x1a0) & 0x200;
  bVar1 = FUN_100a1210(this,0);
  uVar2 = *(uint *)(*(int *)(this + 4) + 0x1a0);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    uVar2 = uVar2 & 0xfffffdff;
  }
  else {
    uVar2 = uVar2 | 0x200;
  }
  *(uint *)(*(int *)(this + 4) + 0x1a0) = uVar2;
  uVar2 = *(uint *)(*(int *)(this + 4) + 0x1a0);
  if ((uVar2 & 0x200) != uVar3) {
    if (uVar3 == 0) {
      if ((uVar2 & 2) == 0) {
        if ((uVar2 & 1) != 0) {
          FUN_10098e40(this,(int *)this,3,0);
          return;
        }
        FUN_10098e40(this,(int *)this,1,0);
      }
    }
    else if ((uVar2 & 4) == 0) {
      if ((uVar2 & 1) != 0) {
        FUN_10098e40(this,(int *)this,3,0);
        return;
      }
      FUN_10098e40(this,(int *)this,0,0);
      return;
    }
  }
  return;
}

