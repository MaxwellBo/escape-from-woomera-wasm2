
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CLightning::StrikeThink(void) */

void __thiscall CLightning::StrikeThink(CLightning *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined1 auStack_38 [56];
  
                    /* 0x2a570  231  ?StrikeThink@CLightning@@QAEXXZ */
  if ((*(float *)(this + 0xc4) != _DAT_100dd5f8) && (*(float *)(this + 0xd8) != _DAT_100df2b0)) {
    if ((*(byte *)(*(int *)(this + 4) + 0x1a0) & 4) == 0) {
      (**(code **)(*(int *)this + 8))(*(float *)(this + 0xd8) + *(float *)(this + 0xc4));
    }
    else {
      iVar1 = *(int *)this;
      fVar6 = (float10)(*DAT_10121f74)(0,*(float *)(this + 0xd8));
      (**(code **)(iVar1 + 8))((float)(fVar6 + (float10)*(float *)(this + 0xc4)));
    }
  }
  *(undefined4 *)(this + 0xb8) = 1;
  if (*(int *)(this + 0xc0) == 0) {
    if (*(int *)(this + 0xbc) == 0) {
      FUN_1002ae90();
      return;
    }
    iVar1 = FUN_10029ad0((byte *)((int)DAT_10122044[0x26] + *(int *)(this + 0xbc)));
    if (iVar1 == 0) {
      (*DAT_10121efc)(1,s_env_beam__unknown_entity___s__10108108,
                      (int)DAT_10122044[0x26] + *(int *)(this + 0xbc));
      return;
    }
    FUN_1002aea0(this,(float *)(*(int *)(iVar1 + 4) + 8));
    return;
  }
  iVar2 = FUN_10029ad0((byte *)((int)DAT_10122044[0x26] + *(int *)(this + 0xbc)));
  iVar1 = FUN_10029ad0((byte *)((int)DAT_10122044[0x26] + *(int *)(this + 0xc0)));
  if (iVar2 == 0) {
    return;
  }
  if (iVar1 != 0) {
    iVar3 = FUN_1002a500(iVar2);
    if (((iVar3 != 0) || (iVar3 = FUN_1002a500(iVar1), iVar3 != 0)) &&
       ((*(byte *)(*(int *)(this + 4) + 0x1a0) & 8) != 0)) {
      return;
    }
    (*DAT_10121ec0)(0,0x17,0,0);
    iVar4 = FUN_1002a500(iVar2);
    iVar3 = iVar2;
    if ((iVar4 == 0) && (iVar4 = FUN_1002a500(iVar1), iVar4 == 0)) {
      if ((*(byte *)(*(int *)(this + 4) + 0x1a0) & 8) == 0) {
        uVar8 = 8;
      }
      else {
        uVar8 = 0x18;
      }
      (*DAT_10121ec8)(uVar8);
      uVar8 = (*DAT_10121f24)(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x208));
      (*DAT_10121ed0)(uVar8);
      uVar8 = (*DAT_10121f24)(*(undefined4 *)(*(int *)(iVar1 + 4) + 0x208));
      (*DAT_10121ed0)(uVar8);
    }
    else {
      iVar4 = FUN_1002a500(iVar1);
      if (iVar4 == 0) {
        iVar3 = iVar1;
        iVar1 = iVar2;
      }
      iVar2 = FUN_1002a500(iVar3);
      if (iVar2 == 0) {
        (*DAT_10121ec8)(1);
        uVar8 = (*DAT_10121f24)(*(undefined4 *)(*(int *)(iVar3 + 4) + 0x208));
        (*DAT_10121ed0)(uVar8);
        (*DAT_10121edc)(*(undefined4 *)(*(int *)(iVar1 + 4) + 8));
        (*DAT_10121edc)(*(undefined4 *)(*(int *)(iVar1 + 4) + 0xc));
        (*DAT_10121edc)(*(undefined4 *)(*(int *)(iVar1 + 4) + 0x10));
      }
      else {
        (*DAT_10121ec8)(0);
        (*DAT_10121edc)(*(undefined4 *)(*(int *)(iVar3 + 4) + 8));
        (*DAT_10121edc)(*(undefined4 *)(*(int *)(iVar3 + 4) + 0xc));
        (*DAT_10121edc)(*(undefined4 *)(*(int *)(iVar3 + 4) + 0x10));
        (*DAT_10121edc)(*(undefined4 *)(*(int *)(iVar1 + 4) + 8));
        (*DAT_10121edc)(*(undefined4 *)(*(int *)(iVar1 + 4) + 0xc));
        (*DAT_10121edc)(*(undefined4 *)(*(int *)(iVar1 + 4) + 0x10));
      }
    }
    (*DAT_10121ed0)(*(undefined4 *)(this + 0xdc));
    (*DAT_10121ec8)(*(undefined4 *)(this + 0xe4));
    lVar7 = __ftol();
    (*DAT_10121ec8)((int)lVar7);
    lVar7 = __ftol();
    (*DAT_10121ec8)((int)lVar7);
    (*DAT_10121ec8)(*(undefined4 *)(this + 200));
    (*DAT_10121ec8)(*(undefined4 *)(this + 0xcc));
    lVar7 = __ftol();
    (*DAT_10121ec8)((int)lVar7);
    lVar7 = __ftol();
    (*DAT_10121ec8)((int)lVar7);
    lVar7 = __ftol();
    (*DAT_10121ec8)((int)lVar7);
    lVar7 = __ftol();
    (*DAT_10121ec8)((int)lVar7);
    (*DAT_10121ec8)(*(undefined4 *)(this + 0xd4));
    (*DAT_10121ec4)();
    FUN_10029b30(this,(undefined4 *)(*(int *)(iVar3 + 4) + 8),
                 (undefined4 *)(*(int *)(iVar1 + 4) + 8));
    if ((*(float *)(*(int *)(this + 4) + 0x1e0) != _DAT_100dd5f8) ||
       (*(int *)(*(int *)(this + 4) + 0x1c8) != 0)) {
      FUN_100afc60(*(int *)(iVar3 + 4) + 8,*(int *)(iVar1 + 4) + 8,0,0,auStack_38);
      iVar1 = *(int *)(this + 4);
      if (*(float *)(iVar1 + 0x1e0) != _DAT_100dd5f8) {
        *(undefined4 *)(iVar1 + 0x1e0) = *(undefined4 *)(iVar1 + 0x1e0);
        *(float *)(*(int *)(this + 4) + 0x1e4) = *DAT_10122044 - _DAT_100dd618;
        FUN_1002ab00(this,(int)auStack_38);
      }
      if ((*(int *)(*(int *)(this + 4) + 0x1c8) != 0) &&
         (piVar5 = (int *)FUN_1002a9d0(this,(int)auStack_38), piVar5 != (int *)0x0)) {
        FUN_10098c10((uint *)((int)DAT_10122044[0x26] + *(int *)(*(int *)(this + 4) + 0x1c8)),piVar5
                     ,this,3,0);
      }
    }
    return;
  }
  return;
}

