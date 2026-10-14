
/* public: void __thiscall CTriggerHevCharge::AnnounceThink(void) */

void __thiscall CTriggerHevCharge::AnnounceThink(CTriggerHevCharge *this)

{
  int *this_00;
  int iVar1;
  byte abStack_40 [64];
  
                    /* 0xa3bb0  12  ?AnnounceThink@CTriggerHevCharge@@QAEXXZ */
  iVar1 = *(int *)(*(int *)(this + 4) + 0x194);
  if ((((iVar1 != 0) || (iVar1 = (*DAT_10121f1c)(0), iVar1 != 0)) &&
      (this_00 = *(int **)(iVar1 + 0x7c), this_00 != (int *)0x0)) &&
     (iVar1 = (**(code **)(*this_00 + 0xcc))(), iVar1 != 0)) {
    __ftol();
    FUN_100c8506(abStack_40,(byte *)s__HEV__1dP_1010fad0);
    FUN_1007e210(this_00,abStack_40,0,0);
    return;
  }
  (*DAT_10121efc)(4,s_trigger_hevcharge__invalid_playe_101197c0);
  return;
}

