
/* public: void __thiscall CScriptedSentence::DurationThink(void) */

void __thiscall CScriptedSentence::DurationThink(CScriptedSentence *this)

{
                    /* 0x90df0  83  ?DurationThink@CScriptedSentence@@QAEXXZ */
  *(undefined4 *)(this + 0x17c) = 0;
  (**(code **)(*(int *)this + 8))(*(undefined4 *)(this + 0x16c));
  *(code **)(this + 0x74) = DelayThink;
  return;
}

