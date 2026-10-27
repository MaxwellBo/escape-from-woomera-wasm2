
/* public: void __thiscall CGameText::TriggerThink(void) */

void __thiscall CGameText::TriggerThink(CGameText *this)

{
                    /* 0x5b640  262  ?TriggerThink@CGameText@@QAEXXZ */
  FUN_10098bd0(this,*(int **)(this + 0xe4),3,0);
  if ((*(byte *)(*(int *)(this + 4) + 0x1a0) & 2) != 0) {
    *(code **)(this + 0x74) = CBaseEntity::SUB_Remove;
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
  }
  return;
}

