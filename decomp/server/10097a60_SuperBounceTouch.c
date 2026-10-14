
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __thiscall CSqueakGrenade::SuperBounceTouch(class CBaseEntity *) */

void __thiscall CSqueakGrenade::SuperBounceTouch(CSqueakGrenade *this,CBaseEntity *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  void *extraout_ECX;
  void *this_00;
  float10 fVar3;
  longlong lVar4;
  void *pvVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 local_38 [12];
  int local_8;
  
                    /* 0x97a60  233  ?SuperBounceTouch@CSqueakGrenade@@AAEXPAVCBaseEntity@@@Z */
  FUN_100afcf0(local_38);
  iVar2 = *(int *)(*(int *)(this + 4) + 0x198);
  if ((iVar2 == 0) || (*(int *)(*(int *)(param_1 + 4) + 0x208) != iVar2)) {
    *(undefined4 *)(*(int *)(this + 4) + 0x198) = 0;
    *(undefined4 *)(*(int *)(this + 4) + 0x50) = 0;
    *(undefined4 *)(*(int *)(this + 4) + 0x58) = 0;
    if (*(float *)(this + 800) <= *DAT_10122044) {
      if ((((*(float *)(*(int *)(param_1 + 4) + 0x16c) != _DAT_100dd5f8) &&
           (*(float *)(this + 700) < *DAT_10122044)) &&
          (local_8 == *(int *)(*(int *)(param_1 + 4) + 0x208))) &&
         (*(int *)(local_8 + 0x134) != *(int *)(*(int *)(this + 4) + 0xb4))) {
        FUN_100b2bd0();
        iVar2 = *(int *)param_1;
        FUN_10003850(&stack0xffffffa8,DAT_10122044 + 10);
        (**(code **)(iVar2 + 0x5c))(*(undefined4 *)(this + 4),DAT_10126af8);
        bVar1 = FUN_10019450((uint *)(this + 0x330));
        if (CONCAT31(extraout_var,bVar1) == 0) {
          uVar7 = *(undefined4 *)(this + 4);
          uVar8 = uVar7;
        }
        else {
          iVar2 = FUN_10019460((uint *)(this + 0x330));
          uVar7 = *(undefined4 *)(this + 4);
          uVar8 = *(undefined4 *)(iVar2 + 4);
        }
        FUN_100b2bf0(uVar7,uVar8);
        *(float *)(*(int *)(this + 4) + 0x1e0) =
             DAT_10126afc + *(float *)(*(int *)(this + 4) + 0x1e0);
        lVar4 = __ftol();
        FUN_10094b20(*(void **)(this + 4),*(undefined4 *)((int)*(void **)(this + 4) + 0x208),1,
                     s_squeek_sqk_deploy1_wav_10117498,0x3f800000,0x3f4ccccd,0,(int)lVar4);
        *(float *)(this + 700) = *DAT_10122044 + (float)_DAT_100dd648;
      }
      *(float *)(this + 800) = *DAT_10122044 + (float)_DAT_100dfb80;
      *(float *)(this + 0x31c) = *DAT_10122044;
      iVar2 = (**(code **)(*DAT_10121db8 + 0x18))();
      if ((iVar2 == 0) || (_DAT_10131060 <= *DAT_10122044)) {
        iVar2 = *(int *)(this + 4);
        if ((*(uint *)(iVar2 + 0x1a4) & 0x200) == 0) {
          fVar3 = (float10)(*DAT_10121f74)();
          if ((float10)_DAT_100ee928 < fVar3) {
            if ((float10)_DAT_100ee920 < fVar3) {
              lVar4 = __ftol();
              uVar7 = (undefined4)lVar4;
              this_00 = *(void **)(*(int *)(this + 4) + 0x208);
              pcVar6 = s_squeek_sqk_hunt3_wav_101174b0;
              pvVar5 = this_00;
            }
            else {
              lVar4 = __ftol();
              uVar7 = (undefined4)lVar4;
              this_00 = *(void **)(this + 4);
              pcVar6 = s_squeek_sqk_hunt2_wav_101174c8;
              pvVar5 = *(void **)((int)this_00 + 0x208);
            }
          }
          else {
            lVar4 = __ftol();
            uVar7 = (undefined4)lVar4;
            pcVar6 = s_squeek_sqk_hunt1_wav_101174e0;
            this_00 = extraout_ECX;
            pvVar5 = *(void **)(*(int *)(this + 4) + 0x208);
          }
          FUN_10094b20(this_00,pvVar5,2,pcVar6,0x3f800000,0x3f4ccccd,0,uVar7);
          iVar2 = *(int *)(this + 4);
          fVar9 = 0.25;
          uVar7 = 0x100;
        }
        else {
          fVar9 = 0.1;
          uVar7 = 100;
        }
        FUN_10095d30(1,(undefined4 *)(iVar2 + 8),uVar7,fVar9);
        _DAT_10131060 = *DAT_10122044 + (float)_DAT_100dd648;
      }
    }
  }
  return;
}

