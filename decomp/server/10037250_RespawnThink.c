
/* public: void __thiscall CBreakable::RespawnThink(void) */

void __thiscall CBreakable::RespawnThink(CBreakable *this)

{
  int iVar1;
  int local_8 [2];
  
                    /* 0x37250  179  ?RespawnThink@CBreakable@@QAEXXZ */
  iVar1 = FUN_100ae980(local_8,2,(float *)(*(int *)(this + 4) + 0xdc),
                       (float *)(*(int *)(this + 4) + 0xe8),0x28);
  if (iVar1 != 0) {
    *(code **)(this + 0x74) = RespawnThink;
    (**(code **)(*(int *)this + 8))(0x40000000);
    return;
  }
  if ((*(byte *)(*(int *)(this + 4) + 0x1a0) & 8) != 0) {
    *(code **)(this + 0x74) = RespawnFadeThink;
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
    *(undefined4 *)(*(int *)(this + 4) + 0x14c) = 0;
    if (*(int *)(this + 0xec) == 0) {
      *(undefined4 *)(*(int *)(this + 4) + 0x148) = 2;
      *(undefined4 *)(this + 0xe8) = 0xff;
    }
  }
  *(undefined4 *)(*(int *)(this + 4) + 0x10c) = 4;
  *(uint *)(*(int *)(this + 4) + 0x118) = *(uint *)(*(int *)(this + 4) + 0x118) & 0xffffff7f;
  *(float *)(*(int *)(this + 4) + 0x160) = (float)*(int *)(this + 0xe4);
  *(code **)(this + 0x7c) = BreakUse;
  if ((*(byte *)(*(int *)(this + 4) + 0x1a0) & 1) == 0) {
    *(undefined4 *)(*(int *)(this + 4) + 0x16c) = 0x3f800000;
  }
  FUN_10098c10((uint *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(*(int *)(this + 4) + 0x1d0)),
               (int *)this,this,3,0);
  return;
}

