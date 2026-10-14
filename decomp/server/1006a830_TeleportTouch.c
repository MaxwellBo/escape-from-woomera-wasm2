
/* public: void __thiscall CNihilanthHVR::TeleportTouch(class CBaseEntity *) */

void __thiscall CNihilanthHVR::TeleportTouch(CNihilanthHVR *this,CBaseEntity *param_1)

{
  bool bVar1;
  CBaseEntity *pCVar2;
  undefined3 extraout_var;
  int *piVar3;
  undefined3 extraout_var_00;
  
                    /* 0x6a830  240  ?TeleportTouch@CNihilanthHVR@@QAEXPAVCBaseEntity@@@Z */
  pCVar2 = (CBaseEntity *)FUN_10019410((uint *)(this + 0x160));
  if (param_1 == pCVar2) {
    bVar1 = FUN_10019450((uint *)(this + 0x168));
    if (CONCAT31(extraout_var,bVar1) != 0) {
      piVar3 = (int *)FUN_10019460((uint *)(this + 0x168));
      (**(code **)(*piVar3 + 0xe4))(pCVar2,pCVar2,1,0x3f800000);
    }
    bVar1 = FUN_10019450((uint *)(this + 0x31c));
    if ((CONCAT31(extraout_var_00,bVar1) != 0) && (pCVar2 != (CBaseEntity *)0x0)) {
      piVar3 = (int *)FUN_10019460((uint *)(this + 0x31c));
      (**(code **)(*piVar3 + 0xe0))(pCVar2);
    }
  }
  else {
    FUN_10067f70(*(int *)(this + 0x318));
  }
  *(undefined4 *)(this + 0x78) = 0;
  FUN_10094b20(*(void **)(this + 4),*(undefined4 *)((int)*(void **)(this + 4) + 0x208),1,
               s_x_x_teleattack1_wav_10112530,0,0,0x20,100);
  FUN_100b0ef0((int)this);
  return;
}

