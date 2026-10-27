
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CNihilanthHVR::ZapThink(void) */

void __thiscall CNihilanthHVR::ZapThink(CNihilanthHVR *this)

{
  CNihilanthHVR *pCVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  undefined3 extraout_var;
  int *piVar7;
  float *pfVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_14;
  
                    /* 0x69e70  279  ?ZapThink@CNihilanthHVR@@QAEXXZ */
  (**(code **)(*(int *)this + 8))();
  pCVar1 = this + 0x160;
  bVar6 = FUN_10019450((uint *)pCVar1);
  if (((((CONCAT31(extraout_var,bVar6) == 0) ||
        (iVar2 = *(int *)(this + 4), *(float *)(iVar2 + 8) < _DAT_100de774)) ||
       (_DAT_100de488 < *(float *)(iVar2 + 8))) ||
      ((*(float *)(iVar2 + 0xc) < _DAT_100de774 || (_DAT_100de488 < *(float *)(iVar2 + 0xc))))) ||
     ((*(float *)(iVar2 + 0x10) < _DAT_100de774 || (_DAT_100de488 < *(float *)(iVar2 + 0x10))))) {
    *(undefined4 *)(this + 0x78) = 0;
    FUN_100b0ef0((int)this);
    return;
  }
  if (SQRT(*(float *)(iVar2 + 0x28) * *(float *)(iVar2 + 0x28) +
           *(float *)(iVar2 + 0x24) * *(float *)(iVar2 + 0x24) +
           *(float *)(iVar2 + 0x20) * *(float *)(iVar2 + 0x20)) < _DAT_100de478) {
    fVar3 = *(float *)(iVar2 + 0x24) * _DAT_100ed294;
    fVar4 = *(float *)(iVar2 + 0x28) * _DAT_100ed294;
    *(float *)(iVar2 + 0x20) = *(float *)(iVar2 + 0x20) * _DAT_100ed294;
    *(float *)(iVar2 + 0x24) = fVar3;
    *(float *)(iVar2 + 0x28) = fVar4;
  }
  iVar2 = *(int *)(this + 4);
  piVar7 = (int *)FUN_10019460((uint *)pCVar1);
  pfVar8 = (float *)(**(code **)(*piVar7 + 0xf8))();
  fVar3 = *pfVar8 - *(float *)(iVar2 + 8);
  fVar5 = pfVar8[1] - *(float *)(iVar2 + 0xc);
  fVar4 = pfVar8[2] - *(float *)(iVar2 + 0x10);
  if (_DAT_100dd658 <= SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4)) {
    iVar2 = *(int *)(this + 4);
    uVar11 = __ftol();
    *(float *)(iVar2 + 0x130) =
         (float)(int)((longlong)
                      ((ulonglong)(uint)((int)uVar11 >> 0x1f) << 0x20 | uVar11 & 0xffffffff) % 0xb);
    (*DAT_10121ec0)();
    (*DAT_10121ec8)();
    uVar10 = (*DAT_10121f24)();
    (*DAT_10121ed0)(uVar10);
    (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 8));
    (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 0xc));
    (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 0x10));
    (*DAT_10121edc)(0x43000000);
    (*DAT_10121ec8)(0x80);
    (*DAT_10121ec8)(0x80);
    (*DAT_10121ec8)(0xff);
    (*DAT_10121ec8)(10);
    (*DAT_10121edc)(0x43000000);
    (*DAT_10121ec4)();
    return;
  }
  uVar10 = *(undefined4 *)(*(int *)(this + 4) + 0x208);
  piVar7 = (int *)FUN_10019460((uint *)pCVar1);
  puVar12 = &stack0xffffffb4;
  uVar13 = 0;
  uVar9 = (**(code **)(*piVar7 + 0xf8))();
  FUN_100afc60(*(int *)(this + 4) + 8,uVar9,(int)puVar12,uVar13,uVar10);
  if (iStack_14 == 0) {
    iStack_14 = (*DAT_10121f1c)();
    if (iStack_14 == 0) goto LAB_1006a07a;
  }
  piVar7 = *(int **)(iStack_14 + 0x7c);
  if ((piVar7 != (int *)0x0) && (*(float *)(piVar7[1] + 0x16c) != _DAT_100dd5f8)) {
    FUN_100b2bd0();
    iVar2 = *piVar7;
    FUN_10003850(&stack0xffffff8c,(undefined4 *)(*(int *)(this + 4) + 0x20));
    (**(code **)(iVar2 + 0x5c))(*(undefined4 *)(this + 4),DAT_10126aec);
    FUN_100b2bf0(*(undefined4 *)(this + 4),*(undefined4 *)(this + 4));
  }
LAB_1006a07a:
  (*DAT_10121ec0)();
  (*DAT_10121ec8)();
  uVar10 = (*DAT_10121f24)(*(undefined4 *)(*(int *)(this + 4) + 0x208));
  (*DAT_10121ed0)(uVar10);
  (*DAT_10121edc)(uStack_30);
  (*DAT_10121edc)(uStack_2c);
  (*DAT_10121edc)(uStack_28);
  (*DAT_10121ed0)((int)DAT_10131d06);
  (*DAT_10121ec8)(0);
  (*DAT_10121ec8)(10);
  (*DAT_10121ec8)(3);
  (*DAT_10121ec8)(0x14);
  (*DAT_10121ec8)(0x14);
  (*DAT_10121ec8)();
  (*DAT_10121ec8)();
  (*DAT_10121ec8)();
  (*DAT_10121ec8)();
  (*DAT_10121ec8)();
  (*DAT_10121ec4)();
  uVar10 = *(undefined4 *)(*(int *)(this + 4) + 0x208);
  uVar9 = (*DAT_10121f70)(0x8c,0xa0);
  FUN_100af2c0(uVar10,&uStack_30,s_weapons_electro4_wav_101064b0,0x3f000000,0x3f4ccccd,0,uVar9);
  *(undefined4 *)(this + 0x78) = 0;
  FUN_100b0ef0((int)this);
  (**(code **)(*(int *)this + 8))();
  return;
}

