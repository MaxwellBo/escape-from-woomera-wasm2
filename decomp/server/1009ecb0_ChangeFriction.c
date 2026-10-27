
/* public: void __thiscall CFrictionModifier::ChangeFriction(class CBaseEntity *) */

void __thiscall CFrictionModifier::ChangeFriction(CFrictionModifier *this,CBaseEntity *param_1)

{
  int iVar1;
  
                    /* 0x9ecb0  42  ?ChangeFriction@CFrictionModifier@@QAEXPAVCBaseEntity@@@Z */
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x108);
  if ((iVar1 != 0xb) && (iVar1 != 10)) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x120) = *(undefined4 *)(this + 0xb8);
  }
  return;
}

