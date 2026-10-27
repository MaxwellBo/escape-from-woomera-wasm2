
/* public: void __thiscall CBasePlayerItem::DestroyItem(void) */

void __thiscall CBasePlayerItem::DestroyItem(CBasePlayerItem *this)

{
                    /* 0xb3b70  68  ?DestroyItem@CBasePlayerItem@@QAEXXZ */
  if (*(int **)(this + 0xdc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xdc) + 0x8c))(this);
  }
  (**(code **)(*(int *)this + 0x148))();
  return;
}

