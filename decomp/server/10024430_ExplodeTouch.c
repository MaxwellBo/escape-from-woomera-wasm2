
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __thiscall CControllerZapBall::ExplodeTouch(class CBaseEntity *) */

void __thiscall CControllerZapBall::ExplodeTouch(CControllerZapBall *this,CBaseEntity *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_38 [5];
  undefined4 auStack_24 [9];
  
                    /* 0x24430  92  ?ExplodeTouch@CControllerZapBall@@AAEXPAVCBaseEntity@@@Z */
  if (*(float *)(*(int *)(param_1 + 4) + 0x16c) != _DAT_100dd5f8) {
    FUN_100afcf0(local_38);
    bVar1 = FUN_10019450((uint *)(this + 0x308));
    if (CONCAT31(extraout_var,bVar1) == 0) {
      uVar4 = *(undefined4 *)(this + 4);
    }
    else {
      iVar2 = FUN_10019460((uint *)(this + 0x308));
      uVar4 = *(undefined4 *)(iVar2 + 4);
    }
    FUN_100b2bd0();
    iVar2 = *(int *)param_1;
    FUN_1001fdd0((void *)(*(int *)(this + 4) + 0x20),(float *)&stack0xffffffa4);
    (**(code **)(iVar2 + 0x5c))(uVar4,DAT_10126ae4);
    FUN_100b2bf0(uVar4,uVar4);
    uVar4 = *(undefined4 *)(*(int *)(this + 4) + 0x208);
    uVar3 = (*DAT_10121f70)(0x5a,99);
    FUN_100af2c0(uVar4,auStack_24,s_weapons_electro4_wav_101064b0,0x3e99999a,0x3f4ccccd,0,uVar3);
  }
  FUN_100b0ef0((int)this);
  return;
}

