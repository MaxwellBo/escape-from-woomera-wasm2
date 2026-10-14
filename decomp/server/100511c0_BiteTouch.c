
/* public: void __thiscall CIchthyosaur::BiteTouch(class CBaseEntity *) */

void __thiscall CIchthyosaur::BiteTouch(CIchthyosaur *this,CBaseEntity *param_1)

{
  undefined4 uVar1;
  CBaseEntity *pCVar2;
  
                    /* 0x511c0  17  ?BiteTouch@CIchthyosaur@@QAEXPAVCBaseEntity@@@Z */
  pCVar2 = (CBaseEntity *)FUN_10019410((uint *)(this + 0x160));
  if (param_1 == pCVar2) {
    uVar1 = *DAT_10122044;
    *(undefined4 *)(this + 0x33c) = 1;
    *(undefined4 *)(this + 0x338) = uVar1;
  }
  return;
}

