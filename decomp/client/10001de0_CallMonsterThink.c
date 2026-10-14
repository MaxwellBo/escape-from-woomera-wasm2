
/* public: void __thiscall CBaseMonster::CallMonsterThink(void) */

void __thiscall CBaseMonster::CallMonsterThink(CBaseMonster *this)

{
                    /* 0x1de0  217  ?CallMonsterThink@CBaseMonster@@QAEXXZ */
                    /* WARNING: Could not recover jumptable at 0x10001de2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 300))();
  return;
}

