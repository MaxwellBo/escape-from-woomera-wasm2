
void __thiscall FUN_10090c20(void *this,int param_1)

{
  if (*(int *)((int)this + 0x178) != 0) {
    FUN_10019420((void *)((int)this + 0xc0),param_1);
    *(code **)((int)this + 0x74) = CScriptedSentence::FindThink;
    (**(code **)(*(int *)this + 8))(0);
  }
  return;
}

