
/* public: void __thiscall CRpgRocket::RocketTouch(class CBaseEntity *) */

void __thiscall CRpgRocket::RocketTouch(CRpgRocket *this,CBaseEntity *param_1)

{
  int *piVar1;
  
                    /* 0x8b440  185  ?RocketTouch@CRpgRocket@@QAEXPAVCBaseEntity@@@Z */
  if (*(int *)(this + 0x314) != 0) {
    piVar1 = (int *)(*(int *)(this + 0x314) + 0x128);
    *piVar1 = *piVar1 + -1;
  }
  FUN_10094b20(*(void **)(*(int *)(this + 4) + 0x208),*(void **)(*(int *)(this + 4) + 0x208),2,
               s_weapons_rocket1_wav_10102cec,0,0,0x20,100);
  CGrenade::ExplodeTouch((CGrenade *)this,param_1);
  return;
}

