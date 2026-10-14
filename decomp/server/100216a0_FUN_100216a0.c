
void __thiscall FUN_100216a0(void *this,undefined4 param_1,int param_2)

{
  if (*(CBaseEntity **)((int)this + 0x34c) != (CBaseEntity *)0x0) {
    CBaseEntity::SUB_StartFadeOut(*(CBaseEntity **)((int)this + 0x34c));
    *(undefined4 *)((int)this + 0x34c) = 0;
  }
  if (*(CBaseEntity **)((int)this + 0x350) != (CBaseEntity *)0x0) {
    CBaseEntity::SUB_StartFadeOut(*(CBaseEntity **)((int)this + 0x350));
    *(undefined4 *)((int)this + 0x350) = 0;
  }
  FUN_100962f0(this,param_1,param_2);
  return;
}

