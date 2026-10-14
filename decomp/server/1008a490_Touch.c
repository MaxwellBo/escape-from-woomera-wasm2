
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __thiscall CRoach::Touch(class CBaseEntity *) */

void __thiscall CRoach::Touch(CRoach *this,CBaseEntity *param_1)

{
  int iVar1;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  undefined1 auStack_38 [56];
  
                    /* 0x8a490  255  ?Touch@CRoach@@UAEXPAVCBaseEntity@@@Z */
  iVar1 = *(int *)(param_1 + 4);
  if (((*(float *)(iVar1 + 0x20) != DAT_10121dd8) || (*(float *)(iVar1 + 0x24) != DAT_10121ddc)) ||
     (*(float *)(iVar1 + 0x28) != DAT_10121de0)) {
    iVar1 = (**(code **)(*(int *)param_1 + 0xcc))();
    if (iVar1 != 0) {
      iVar1 = *(int *)(this + 4);
      uStack_50 = *(undefined4 *)(iVar1 + 8);
      uStack_4c = *(undefined4 *)(iVar1 + 0xc);
      fStack_3c = *(float *)(iVar1 + 0x10) + _DAT_100de45c;
      fStack_48 = fStack_3c - _DAT_100e0ed0;
      uStack_44 = uStack_50;
      uStack_40 = uStack_4c;
      FUN_100afc60(&uStack_44,&uStack_50,1,*(undefined4 *)(iVar1 + 0x208),auStack_38);
      iVar1 = (*DAT_10121f70)(0,5);
      FUN_100b0450((int)auStack_38,iVar1 + 0x13);
      (**(code **)(*(int *)this + 0x60))
                (*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),
                 *(undefined4 *)(*(int *)(this + 4) + 0x160),1);
    }
  }
  return;
}

