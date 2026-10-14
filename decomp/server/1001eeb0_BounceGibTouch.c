
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CGib::BounceGibTouch(class CBaseEntity *) */

void __thiscall CGib::BounceGibTouch(CGib *this,CBaseEntity *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  undefined1 local_38 [56];
  
                    /* 0x1eeb0  21  ?BounceGibTouch@CGib@@QAEXPAVCBaseEntity@@@Z */
  iVar3 = *(int *)(this + 4);
  if ((*(uint *)(iVar3 + 0x1a4) & 0x200) != 0) {
    fVar1 = *(float *)(iVar3 + 0x24) * _DAT_100e0ed4;
    fVar2 = *(float *)(iVar3 + 0x28) * _DAT_100e0ed4;
    *(float *)(iVar3 + 0x20) = *(float *)(iVar3 + 0x20) * _DAT_100e0ed4;
    *(float *)(iVar3 + 0x24) = fVar1;
    *(float *)(iVar3 + 0x28) = fVar2;
    *(undefined4 *)(*(int *)(this + 4) + 0x50) = 0;
    *(undefined4 *)(*(int *)(this + 4) + 0x58) = 0;
    *(undefined4 *)(*(int *)(this + 4) + 0x5c) = 0;
    *(undefined4 *)(*(int *)(this + 4) + 100) = 0;
    return;
  }
  if (((DAT_10121de8 != 1) && (0 < *(int *)(this + 0xbc))) && (*(int *)(this + 0xb8) != -1)) {
    local_50 = *(undefined4 *)(iVar3 + 8);
    local_4c = *(undefined4 *)(iVar3 + 0xc);
    local_3c = *(float *)(iVar3 + 0x10) + _DAT_100de45c;
    local_48 = local_3c - _DAT_100e0ed0;
    local_44 = local_50;
    local_40 = local_4c;
    FUN_100afc60(&local_44,&local_50,1,*(undefined4 *)(iVar3 + 0x208),local_38);
    FUN_100b0400((int)local_38,*(int *)(this + 0xb8));
    *(int *)(this + 0xbc) = *(int *)(this + 0xbc) + -1;
  }
  if (*(int *)(this + 0xc0) != 9) {
    iVar3 = (*DAT_10121f70)(0,2);
    if (iVar3 == 0) {
      fVar4 = ABS((float10)*(float *)(*(int *)(this + 4) + 0x28)) * (float10)_DAT_100e0ec8;
      if ((float10)_DAT_100dd628 < fVar4) {
        fVar4 = (float10)_DAT_100dd628;
      }
      FUN_10036ce0(*(undefined4 *)(*(int *)(this + 4) + 0x208),*(undefined4 *)(this + 0xc0),
                   (float)(fVar4 * (float10)_DAT_100dd600));
    }
  }
  return;
}

