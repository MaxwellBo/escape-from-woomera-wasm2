
/* WARNING: Removing unreachable block (ram,0x10029a93) */
/* WARNING: Removing unreachable block (ram,0x10029aa7) */
/* public: void __thiscall CBeam::TriggerTouch(class CBaseEntity *) */

void __thiscall CBeam::TriggerTouch(CBeam *this,CBaseEntity *param_1)

{
                    /* 0x29a70  263  ?TriggerTouch@CBeam@@QAEXPAVCBaseEntity@@@Z */
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a4) & 0x28) != 0) {
    if (*(int *)(*(int *)(this + 4) + 0x198) != 0) {
      (**(code **)(**(int **)(*(int *)(*(int *)(this + 4) + 0x198) + 0x7c) + 0xe4))
                (param_1,this,3,0);
    }
    (*DAT_10121efc)(1,s_Firing_targets____10108058);
  }
  return;
}

