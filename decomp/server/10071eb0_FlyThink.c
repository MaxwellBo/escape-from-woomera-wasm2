
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall COsprey::FlyThink(void) */

void __thiscall COsprey::FlyThink(COsprey *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x71eb0  109  ?FlyThink@COsprey@@QAEXXZ */
  FUN_10007fc0((int)this,0.0);
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  if ((*(int *)(this + 0x308) == 0) && (*(int *)(*(int *)(this + 4) + 0x1c8) != 0)) {
    uVar1 = FUN_100af030(0,(byte *)((int)DAT_10122044[0x26] + *(int *)(*(int *)(this + 4) + 0x1c8)))
    ;
    *(undefined4 *)(this + 0x308) = uVar1;
    FUN_10071c50((int)this);
  }
  if (*(float *)(this + 0x358) + *(float *)(this + 0x354) < *DAT_10122044) {
    if (*(float *)(*(int *)(*(int *)(this + 0x308) + 4) + 0x1f8) == _DAT_100dd5f8) {
      *(code **)(this + 0x74) = DeployThink;
    }
    iVar3 = 100;
    while( true ) {
      iVar2 = FUN_100af030(0,(byte *)(*(int *)(*(int *)(*(int *)(this + 0x308) + 4) + 0x1c8) +
                                     (int)DAT_10122044[0x26]));
      *(int *)(this + 0x308) = iVar2;
      iVar3 = iVar3 + -1;
      if (_DAT_100de4a8 <= *(float *)(*(int *)(iVar2 + 4) + 0x1f8)) break;
      iVar2 = FUN_100718e0((int)this);
      if ((iVar2 != 0) || (iVar3 < 1)) break;
    }
    FUN_10071c50((int)this);
  }
  FUN_10071fc0(this);
  FUN_10072da0((int)this);
  return;
}

