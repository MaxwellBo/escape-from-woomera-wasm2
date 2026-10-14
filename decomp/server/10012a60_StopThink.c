
/* public: void __thiscall CPendulum::StopThink(void) */

void __thiscall CPendulum::StopThink(CPendulum *this)

{
                    /* 0x12a60  229  ?StopThink@CPendulum@@QAEXXZ */
  FUN_100635b0((int)this);
  *(undefined4 *)(*(int *)(this + 4) + 0x1f8) = 0;
  FUN_10019680((int)this);
  FUN_10063ac0((int)this,DAT_10121dd8,DAT_10121ddc,DAT_10121de0);
  return;
}

