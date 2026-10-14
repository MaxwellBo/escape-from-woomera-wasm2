
/* public: void __thiscall CScriptedSentence::DelayThink(void) */

void __thiscall CScriptedSentence::DelayThink(CScriptedSentence *this)

{
                    /* 0x90e20  65  ?DelayThink@CScriptedSentence@@QAEXXZ */
  *(undefined4 *)(this + 0x178) = 1;
  if (*(int *)(*(int *)(this + 4) + 0x1cc) == 0) {
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
  }
  *(code **)(this + 0x74) = FindThink;
  return;
}

