
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CFuncMortarField::FieldUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CFuncMortarField::FieldUse
          (CFuncMortarField *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
          float param_4)

{
  CBaseEntity *pCVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  float10 fVar5;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [20];
  undefined4 auStack_24 [9];
  
                    /* 0x626d0  100
                       ?FieldUse@CFuncMortarField@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  pCVar1 = param_1;
  fVar5 = (float10)(*DAT_10121f74)(*(undefined4 *)(*(int *)(this + 4) + 0xdc),
                                   *(undefined4 *)(*(int *)(this + 4) + 0xe8));
  fStack_5c = (float)fVar5;
  fVar5 = (float10)(*DAT_10121f74)(*(undefined4 *)(*(int *)(this + 4) + 0xe0),
                                   *(undefined4 *)(*(int *)(this + 4) + 0xec));
  fStack_58 = (float)fVar5;
  fStack_54 = *(float *)(*(int *)(this + 4) + 0xf0);
  if (*(int *)(this + 0x170) == 1) {
    if (param_1 != (CBaseEntity *)0x0) {
      fStack_5c = *(float *)(*(int *)(param_1 + 4) + 8);
      fStack_58 = *(float *)(*(int *)(param_1 + 4) + 0xc);
    }
  }
  else if (*(int *)(this + 0x170) == 2) {
    if (*(int *)(this + 0x15c) != 0) {
      iVar2 = FUN_100af030(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(this + 0x15c)));
      if (iVar2 != 0) {
        fStack_5c = *(float *)(*(int *)(this + 4) + 0xf4) * *(float *)(*(int *)(iVar2 + 4) + 0xac) +
                    *(float *)(*(int *)(this + 4) + 0xdc);
      }
    }
    if (*(int *)(this + 0x160) != 0) {
      iVar2 = FUN_100af030(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(this + 0x160)));
      if (iVar2 != 0) {
        fStack_58 = *(float *)(*(int *)(this + 4) + 0xf8) * *(float *)(*(int *)(iVar2 + 4) + 0xac) +
                    *(float *)(*(int *)(this + 4) + 0xe0);
      }
    }
  }
  uVar3 = (*DAT_10121f70)(0x5f,0x7c);
  FUN_10094b20(*(void **)(*(int *)(this + 4) + 0x208),*(void **)(*(int *)(this + 4) + 0x208),2,
               s_weapons_mortar_wav_10111740,0x3f800000,0,0,uVar3);
  iVar2 = 0;
  param_1 = (CBaseEntity *)0x40200000;
  if (0 < *(int *)(this + 0x16c)) {
    do {
      fStack_68 = fStack_5c;
      fStack_64 = fStack_58;
      fStack_60 = fStack_54;
      fVar5 = (float10)(*DAT_10121f74)(-*(float *)(this + 0x164),*(undefined4 *)(this + 0x164));
      fStack_68 = (float)(fVar5 + (float10)fStack_68);
      fVar5 = (float10)(*DAT_10121f74)(-*(float *)(this + 0x164),*(undefined4 *)(this + 0x164));
      fStack_64 = (float)(fVar5 + (float10)fStack_64);
      fStack_50 = fStack_68;
      fStack_48 = fStack_60 - _DAT_100de488;
      fStack_4c = fStack_64;
      FUN_100afc60(&fStack_68,&fStack_50,1,*(undefined4 *)(*(int *)(this + 4) + 0x208),auStack_38);
      uVar3 = 0;
      if (pCVar1 != (CBaseEntity *)0x0) {
        uVar3 = *(undefined4 *)(*(int *)(pCVar1 + 4) + 0x208);
      }
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      piVar4 = (int *)FUN_1001a1f0(0x10111754,auStack_24,&uStack_44,uVar3);
      (**(code **)(*piVar4 + 8))(param_1);
      fVar5 = (float10)(*DAT_10121f74)(0x3e4ccccd,0x3f000000);
      param_1 = (CBaseEntity *)(float)(fVar5 + (float10)(float)param_1);
      if (iVar2 == 0) {
        FUN_10095d30(0x20,auStack_24,400,0.3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x16c));
  }
  return;
}

