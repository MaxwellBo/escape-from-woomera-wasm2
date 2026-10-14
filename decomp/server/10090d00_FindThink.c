
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CScriptedSentence::FindThink(void) */

void __thiscall CScriptedSentence::FindThink(CScriptedSentence *this)

{
  byte bVar1;
  void *this_00;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  
                    /* 0x90d00  105  ?FindThink@CScriptedSentence@@QAEXXZ */
  if (*(int *)(this + 0x160) == 0) {
    this_00 = (void *)FUN_100aec40(0,s_player_10101c54);
    if (this_00 == (void *)0x0) {
      (*DAT_10121efc)(1,s_ScriptedSentence__can_t_find__pl_10116184);
      return;
    }
    *(undefined4 *)(this + 0x17c) = 1;
    pbVar4 = (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(this + 0x15c));
    FUN_1007e210(this_00,pbVar4,(uint)(*pbVar4 != 0x21),0);
    bVar1 = *(byte *)(*(int *)(this + 4) + 0x1a0);
  }
  else {
    iVar2 = FUN_10019410((uint *)(this + 0xc0));
    piVar3 = FUN_10090f10(this,iVar2);
    if (piVar3 == (int *)0x0) {
      (**(code **)(*(int *)this + 8))(*(float *)(this + 0x16c) + (float)_DAT_100dd648);
      return;
    }
    *(undefined4 *)(this + 0x17c) = 1;
    FUN_10091050(this,piVar3);
    bVar1 = *(byte *)(*(int *)(this + 4) + 0x1a0);
  }
  if ((bVar1 & 1) != 0) {
    FUN_100b0ef0((int)this);
  }
  *(code **)(this + 0x74) = DurationThink;
  (**(code **)(*(int *)this + 8))(*(undefined4 *)(this + 0x168));
  *(undefined4 *)(this + 0x178) = 0;
  return;
}

