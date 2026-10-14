
/* public: void __thiscall CBasePlayerItem::DefaultTouch(class CBaseEntity *) */

void __thiscall CBasePlayerItem::DefaultTouch(CBasePlayerItem *this,CBaseEntity *param_1)

{
  char cVar1;
  int iVar2;
  
                    /* 0xb3710  62  ?DefaultTouch@CBasePlayerItem@@QAEXPAVCBaseEntity@@@Z */
  cVar1 = (**(code **)(*(int *)this + 0x164))(param_1);
  if (cVar1 == '\0') {
    iVar2 = (**(code **)(*(int *)param_1 + 0xcc))();
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*DAT_10121db8 + 0x74))(param_1,this);
      if (iVar2 == 0) {
        if (DAT_10124850 != 0) {
          FUN_100b0ef0((int)this);
          return;
        }
      }
      else {
        iVar2 = (**(code **)(*(int *)param_1 + 0x88))(this);
        if (iVar2 != 0) {
          (**(code **)(*(int *)this + 0x14c))(param_1);
          FUN_10094b20(*(void **)(param_1 + 4),*(undefined4 *)((int)*(void **)(param_1 + 4) + 0x208)
                       ,3,s_items_gunpickup2_wav_1010fab8,0x3f800000,0x3f4ccccd,0,100);
        }
        FUN_10098e40(this,(int *)param_1,3,0);
      }
    }
  }
  return;
}

