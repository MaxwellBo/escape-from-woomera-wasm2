
/* public: void __thiscall CBarnacle::WaitTillDead(void) */

void __thiscall CBarnacle::WaitTillDead(CBarnacle *this)

{
                    /* 0xc910  276  ?WaitTillDead@CBarnacle@@QAEXXZ */
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  FUN_10007fc0((int)this,0.1);
  FUN_10008240((int *)this);
  if (*(int *)(this + 0xd4) != 0) {
    *(undefined4 *)(*(int *)(this + 4) + 0x138) = 0;
    *(undefined4 *)(this + 0x74) = 0;
  }
  return;
}

