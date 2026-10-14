
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CDecal::StaticDecal(void) */

void __thiscall CDecal::StaticDecal(CDecal *this)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [48];
  int local_8;
  
                    /* 0xb54b0  227  ?StaticDecal@CDecal@@QAEXXZ */
  iVar1 = *(int *)(this + 4);
  local_48 = *(float *)(iVar1 + 0x10) + _DAT_100dd5d8;
  local_4c = *(float *)(iVar1 + 0xc) + _DAT_100dd5d8;
  local_50 = *(float *)(iVar1 + 8) + _DAT_100dd5d8;
  local_3c = *(float *)(iVar1 + 0x10) - _DAT_100dd5d8;
  local_40 = *(float *)(iVar1 + 0xc) - _DAT_100dd5d8;
  local_44 = *(float *)(iVar1 + 8) - _DAT_100dd5d8;
  FUN_100afc60(&local_44,&local_50,1,*(undefined4 *)(iVar1 + 0x208),local_38);
  sVar2 = (*DAT_10121f24)(local_8);
  if (sVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = uRam000000b4;
    if (local_8 != 0) {
      uVar3 = *(undefined4 *)(local_8 + 0x134);
    }
  }
  (*DAT_10121fc4)(*(int *)(this + 4) + 8,*(undefined4 *)(*(int *)(this + 4) + 0x110),(int)sVar2,
                  uVar3);
  CBaseEntity::SUB_Remove((CBaseEntity *)this);
  return;
}

