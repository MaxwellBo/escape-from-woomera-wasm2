
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CDecal::TriggerDecal(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CDecal::TriggerDecal
          (CDecal *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,float param_4)

{
  int iVar1;
  short sVar2;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [48];
  int iStack_8;
  
                    /* 0xb5390  261  ?TriggerDecal@CDecal@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  iVar1 = *(int *)(this + 4);
  local_48 = *(float *)(iVar1 + 0x10) + _DAT_100dd5d8;
  local_4c = *(float *)(iVar1 + 0xc) + _DAT_100dd5d8;
  local_50 = *(float *)(iVar1 + 8) + _DAT_100dd5d8;
  local_3c = *(float *)(iVar1 + 0x10) - _DAT_100dd5d8;
  local_40 = *(float *)(iVar1 + 0xc) - _DAT_100dd5d8;
  local_44 = *(float *)(iVar1 + 8) - _DAT_100dd5d8;
  FUN_100afc60(&local_44,&local_50,1,*(undefined4 *)(iVar1 + 0x208),local_38);
  (*DAT_10121ec0)(0,0x17,0,0);
  (*DAT_10121ec8)(0xd);
  (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 8));
  (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 0xc));
  (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 0x10));
  (*DAT_10121ed0)(*(undefined4 *)(*(int *)(this + 4) + 0x110));
  sVar2 = (*DAT_10121f24)(iStack_8);
  (*DAT_10121ed0)((int)sVar2);
  if (sVar2 != 0) {
    if (iStack_8 != 0) {
      iStack_8 = iStack_8 + 0x80;
    }
    (*DAT_10121ed0)(*(undefined4 *)(iStack_8 + 0xb4));
  }
  (*DAT_10121ec4)();
  *(code **)(this + 0x74) = CBaseEntity::SUB_Remove;
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  return;
}

