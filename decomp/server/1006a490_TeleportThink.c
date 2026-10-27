
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CNihilanthHVR::TeleportThink(void) */

void __thiscall CNihilanthHVR::TeleportThink(CNihilanthHVR *this)

{
  CNihilanthHVR *pCVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  undefined3 extraout_var;
  int *piVar5;
  int iVar6;
  float *pfVar7;
  undefined3 extraout_var_00;
  undefined4 uVar8;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this_00;
  void *this_01;
  ulonglong uVar9;
  float in_stack_ffffffcc;
  float in_stack_ffffffd0;
  float fVar10;
  
                    /* 0x6a490  239  ?TeleportThink@CNihilanthHVR@@QAEXXZ */
  (**(code **)(*(int *)this + 8))();
  pCVar1 = this + 0x160;
  bVar4 = FUN_10019450((uint *)pCVar1);
  this_01 = extraout_ECX;
  if (CONCAT31(extraout_var,bVar4) != 0) {
    piVar5 = (int *)FUN_10019460((uint *)pCVar1);
    iVar6 = (**(code **)(*piVar5 + 0xb8))();
    this_01 = extraout_ECX_00;
    if ((((iVar6 != 0) && (iVar6 = *(int *)(this + 4), _DAT_100de774 <= *(float *)(iVar6 + 8))) &&
        (*(float *)(iVar6 + 8) <= _DAT_100de488)) &&
       (((_DAT_100de774 <= *(float *)(iVar6 + 0xc) && (*(float *)(iVar6 + 0xc) <= _DAT_100de488)) &&
        ((_DAT_100de774 <= *(float *)(iVar6 + 0x10) && (*(float *)(iVar6 + 0x10) <= _DAT_100de488)))
        ))) {
      piVar5 = (int *)FUN_10019460((uint *)pCVar1);
      pfVar7 = (float *)(**(code **)(*piVar5 + 0xf8))();
      fVar10 = *pfVar7 - *(float *)(iVar6 + 8);
      fVar3 = pfVar7[1] - *(float *)(iVar6 + 0xc);
      fVar2 = pfVar7[2] - *(float *)(iVar6 + 0x10);
      if (_DAT_100ddaf4 <= SQRT(fVar10 * fVar10 + fVar3 * fVar3 + fVar2 * fVar2)) {
        fVar10 = 2.655491e-29;
        piVar5 = (int *)FUN_10019460((uint *)pCVar1);
        (**(code **)(*piVar5 + 0xf8))(&stack0xffffffcc);
        FUN_1006af40(this,in_stack_ffffffcc,in_stack_ffffffd0,fVar10);
      }
      else {
        FUN_10094b20(this_00,*(undefined4 *)(*(int *)(this + 4) + 0x208),1,
                     s_x_x_teleattack1_wav_10112530,0,0,0x20,100);
        FUN_100b0ef0((int)this);
        bVar4 = FUN_10019450((uint *)(this + 0x168));
        if (CONCAT31(extraout_var_00,bVar4) != 0) {
          piVar5 = (int *)FUN_10019460((uint *)(this + 0x168));
          iVar6 = *piVar5;
          FUN_10019410((uint *)pCVar1);
          uVar8 = FUN_10019410((uint *)pCVar1);
          (**(code **)(iVar6 + 0xe4))(uVar8);
        }
        bVar4 = FUN_10019450((uint *)(this + 0x31c));
        if (CONCAT31(extraout_var_01,bVar4) != 0) {
          bVar4 = FUN_10019450((uint *)pCVar1);
          if (CONCAT31(extraout_var_02,bVar4) != 0) {
            piVar5 = (int *)FUN_10019460((uint *)(this + 0x31c));
            iVar6 = *piVar5;
            FUN_10019410((uint *)pCVar1);
            (**(code **)(iVar6 + 0xe0))();
          }
        }
      }
      (*DAT_10121ec0)(0);
      (*DAT_10121ec8)(0x1c);
      uVar8 = (*DAT_10121f24)(*(undefined4 *)(*(int *)(this + 4) + 0x208));
      (*DAT_10121ed0)(uVar8);
      (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 8));
      (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 0xc));
      (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 0x10));
      (*DAT_10121edc)(0x43800000);
      (*DAT_10121ec8)(0);
      (*DAT_10121ec8)(0xff);
      (*DAT_10121ec8)(0);
      (*DAT_10121ec8)(10);
      (*DAT_10121edc)(0x43800000);
      (*DAT_10121ec4)();
      iVar6 = *(int *)(this + 4);
      uVar9 = __ftol();
      *(float *)(iVar6 + 0x130) =
           (float)(int)((longlong)
                        ((ulonglong)(uint)((int)uVar9 >> 0x1f) << 0x20 | uVar9 & 0xffffffff) % 0x14)
      ;
      return;
    }
  }
  FUN_10094b20(this_01,*(undefined4 *)(*(int *)(this + 4) + 0x208),1,s_x_x_teleattack1_wav_10112530,
               0,0,0x20,100);
  FUN_100b0ef0((int)this);
  return;
}

