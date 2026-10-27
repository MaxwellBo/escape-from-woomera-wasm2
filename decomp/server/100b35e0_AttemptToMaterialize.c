
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CBasePlayerItem::AttemptToMaterialize(void) */

void __thiscall CBasePlayerItem::AttemptToMaterialize(CBasePlayerItem *this)

{
  float10 fVar1;
  CBasePlayerItem *pCVar2;
  CBasePlayerItem *pCVar3;
  
                    /* 0xb35e0  13  ?AttemptToMaterialize@CBasePlayerItem@@QAEXXZ */
  pCVar2 = this;
  pCVar3 = this;
  fVar1 = (float10)(**(code **)(*DAT_10121db8 + 0x84))(this);
  if (fVar1 == (float10)_DAT_100dd5f8) {
    Materialize(this);
    return;
  }
  (**(code **)(*(int *)this + 8))((float)fVar1,pCVar2,(float)fVar1,pCVar3);
  return;
}

