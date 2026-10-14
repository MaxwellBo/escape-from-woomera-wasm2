
/* public: void __thiscall CNihilanthHVR::ZapTouch(class CBaseEntity *) */

void __thiscall CNihilanthHVR::ZapTouch(CNihilanthHVR *this,CBaseEntity *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
                    /* 0x6a280  280  ?ZapTouch@CNihilanthHVR@@QAEXPAVCBaseEntity@@@Z */
  uVar1 = *(undefined4 *)(*(int *)(this + 4) + 0x208);
  uVar3 = (*DAT_10121f70)(0x5a,0x5f);
  FUN_100af2c0(uVar1,(undefined4 *)(*(int *)(this + 4) + 8),s_weapons_electro4_wav_101064b0,
               0x3f800000,0x3f4ccccd,0,uVar3);
  FUN_1001fe50(this,*(float *)(this + 4),*(float *)(this + 4),50.0,0,0x100);
  iVar2 = *(int *)(this + 4);
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  FUN_100b0ef0((int)this);
  (**(code **)(*(int *)this + 8))(0x3e4ccccd);
  return;
}

