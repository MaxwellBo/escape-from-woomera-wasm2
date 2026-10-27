
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CHornet::DieTouch(class CBaseEntity *) */

void __thiscall CHornet::DieTouch(CHornet *this,CBaseEntity *param_1)

{
  int iVar1;
  void *extraout_ECX;
  void *this_00;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  
                    /* 0x4e630  74  ?DieTouch@CHornet@@QAEXPAVCBaseEntity@@@Z */
  if ((param_1 == (CBaseEntity *)0x0) ||
     (*(float *)(*(int *)(param_1 + 4) + 0x16c) == _DAT_100dd5f8)) goto LAB_1004e702;
  iVar1 = (*DAT_10121f70)(0,2);
  if (iVar1 == 0) {
    pvVar3 = *(void **)(*(int *)(this + 4) + 0x208);
    pcVar4 = s_hornet_ag_hornethit1_wav_1010ed50;
    this_00 = extraout_ECX;
LAB_1004e6d3:
    FUN_10094b20(this_00,pvVar3,2,pcVar4,0x3f800000,0x3f4ccccd,0,100);
  }
  else {
    if (iVar1 == 1) {
      this_00 = *(void **)(*(int *)(this + 4) + 0x208);
      pcVar4 = s_hornet_ag_hornethit2_wav_1010ed34;
      pvVar3 = this_00;
      goto LAB_1004e6d3;
    }
    if (iVar1 == 2) {
      this_00 = *(void **)(this + 4);
      pcVar4 = s_hornet_ag_hornethit3_wav_1010ed18;
      pvVar3 = *(void **)((int)this_00 + 0x208);
      goto LAB_1004e6d3;
    }
  }
  iVar1 = *(int *)(this + 4);
  iVar2 = *(int *)(iVar1 + 0x198);
  if (iVar2 != 0) {
    iVar2 = iVar2 + 0x80;
  }
  (**(code **)(*(int *)param_1 + 0x60))(iVar1,iVar2,*(undefined4 *)(iVar1 + 0x1e0),2);
LAB_1004e702:
  *(undefined4 *)(*(int *)(this + 4) + 0xb4) = 0;
  *(undefined4 *)(*(int *)(this + 4) + 0x10c) = 0;
  *(code **)(this + 0x74) = CBaseEntity::SUB_Remove;
  (**(code **)(*(int *)this + 8))(0x3f800000);
  return;
}

