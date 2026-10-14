
/* public: void __thiscall CLaserSpot::Revive(void) */

void __thiscall CLaserSpot::Revive(CLaserSpot *this)

{
                    /* 0x8b190  184  ?Revive@CLaserSpot@@QAEXXZ */
  *(uint *)(*(int *)(this + 4) + 0x118) = *(uint *)(*(int *)(this + 4) + 0x118) & 0xffffff7f;
  *(undefined4 *)(this + 0x74) = 0;
  return;
}

