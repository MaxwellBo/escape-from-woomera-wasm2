
/* public: void __thiscall CBaseButton::ButtonUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CBaseButton::ButtonUse
          (CBaseButton *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
          float param_4)

{
  int iVar1;
  void *this_00;
  
                    /* 0x17010  32  ?ButtonUse@CBaseButton@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  if ((*(int *)(this + 0xdc) != 2) && (*(int *)(this + 0xdc) != 3)) {
    FUN_10019420(this + 0xc0,(int)param_1);
    if (*(int *)(this + 0xdc) == 0) {
      if ((*(int *)(this + 0x15c) == 0) &&
         (iVar1 = *(int *)(this + 4), (*(byte *)(iVar1 + 0x1a0) & 0x20) != 0)) {
        this_00 = (void *)(*(int *)(iVar1 + 0x1e8) + *(int *)(DAT_10122044 + 0x98));
        FUN_10094b20(this_00,*(undefined4 *)(iVar1 + 0x208),2,this_00,0x3f800000,0x3f4ccccd,0,100);
        ButtonReturn(this);
        return;
      }
    }
    else {
      FUN_10017260(this);
    }
  }
  return;
}

