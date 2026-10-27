
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CBaseEntity::SUB_Remove(void) */

void __thiscall CBaseEntity::SUB_Remove(CBaseEntity *this)

{
                    /* 0x98910  191  ?SUB_Remove@CBaseEntity@@QAEXXZ */
  FUN_100987e0((int)this);
  if (_DAT_100dd5f8 < *(float *)(*(int *)(this + 4) + 0x160)) {
    *(undefined4 *)(*(int *)(this + 4) + 0x160) = 0;
    (*DAT_10121efc)(2,s_SUB_Remove_called_on_entity_with_1011786c);
  }
  (*DAT_10121e60)(*(undefined4 *)(*(int *)(this + 4) + 0x208));
  return;
}

