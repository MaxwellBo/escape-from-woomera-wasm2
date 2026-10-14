
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __thiscall CControllerHeadBall::HuntThink(void) */

void __thiscall CControllerHeadBall::HuntThink(CControllerHeadBall *this)

{
  CControllerHeadBall *pCVar1;
  CControllerHeadBall *pCVar2;
  float fVar3;
  bool bVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int *piVar5;
  float *pfVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_18;
  
                    /* 0x23830  123  ?HuntThink@CControllerHeadBall@@AAEXXZ */
  (**(code **)(*(int *)this + 8))();
  *(float *)(*(int *)(this + 4) + 0x14c) = *(float *)(*(int *)(this + 4) + 0x14c) - _DAT_100dd5d8;
  (*DAT_10121ec0)();
  (*DAT_10121ec8)();
  (*DAT_10121f24)();
  (*DAT_10121ed0)();
  (*DAT_10121edc)();
  (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 0xc));
  (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 0x10));
  (*DAT_10121edc)();
  fVar15 = 3.57331e-43;
  (*DAT_10121ec8)();
  fVar14 = 3.57331e-43;
  (*DAT_10121ec8)();
  (*DAT_10121ec8)();
  (*DAT_10121ec8)();
  (*DAT_10121edc)();
  (*DAT_10121ec4)();
  if ((*DAT_10122044 - *(float *)(*(int *)(this + 4) + 0x1e4) <= _DAT_100dd5d8) &&
     (_DAT_100ddb10 <= *(float *)(*(int *)(this + 4) + 0x14c))) {
    pCVar1 = this + 0x160;
    bVar4 = FUN_10019450((uint *)pCVar1);
    if (CONCAT31(extraout_var,bVar4) != 0) {
      pCVar2 = this + 0x31c;
      bVar4 = FUN_10019450((uint *)pCVar2);
      if (((((CONCAT31(extraout_var_00,bVar4) != 0) &&
            (iVar9 = *(int *)(this + 4), _DAT_100de774 <= *(float *)(iVar9 + 8))) &&
           (*(float *)(iVar9 + 8) <= _DAT_100de488)) &&
          ((_DAT_100de774 <= *(float *)(iVar9 + 0xc) && (*(float *)(iVar9 + 0xc) <= _DAT_100de488)))
          ) && ((_DAT_100de774 <= *(float *)(iVar9 + 0x10) &&
                (*(float *)(iVar9 + 0x10) <= _DAT_100de488)))) {
        piVar5 = (int *)FUN_10019460((uint *)pCVar1);
        puVar12 = &stack0xffffff9c;
        (**(code **)(*piVar5 + 0xf8))();
        FUN_10023c60(this,(float)puVar12,fVar14,fVar15);
        iVar9 = *(int *)(this + 4);
        piVar5 = (int *)FUN_10019460((uint *)pCVar1);
        pfVar6 = (float *)(**(code **)(*piVar5 + 0xf8))();
        fVar14 = *pfVar6 - *(float *)(iVar9 + 8);
        fVar3 = pfVar6[1] - *(float *)(iVar9 + 0xc);
        fVar15 = pfVar6[2] - *(float *)(iVar9 + 0x10);
        if (_DAT_100ddb10 <= SQRT(fVar14 * fVar14 + fVar3 * fVar3 + fVar15 * fVar15)) {
          return;
        }
        uVar10 = *(undefined4 *)(*(int *)(this + 4) + 0x208);
        piVar5 = (int *)FUN_10019460((uint *)pCVar1);
        puVar12 = &stack0xffffffb0;
        uVar13 = 0;
        uVar7 = (**(code **)(*piVar5 + 0xf8))();
        FUN_100afc60(*(int *)(this + 4) + 8,uVar7,(int)puVar12,uVar13,uVar10);
        if (((iStack_18 != 0) || (iStack_18 = (*DAT_10121f1c)(), iStack_18 != 0)) &&
           ((piVar5 = *(int **)(iStack_18 + 0x7c), piVar5 != (int *)0x0 &&
            (*(float *)(piVar5[1] + 0x16c) != _DAT_100dd5f8)))) {
          FUN_100b2bd0();
          iVar9 = *piVar5;
          FUN_10003850(&stack0xffffff88,(undefined4 *)(*(int *)(this + 4) + 0x20));
          uVar10 = DAT_10126adc;
          iVar8 = FUN_10019460((uint *)pCVar2);
          (**(code **)(iVar9 + 0x5c))(*(undefined4 *)(iVar8 + 4),uVar10);
          iVar9 = FUN_10019460((uint *)pCVar2);
          FUN_100b2bf0(*(undefined4 *)(this + 4),*(undefined4 *)(iVar9 + 4));
        }
        (*DAT_10121ec0)();
        (*DAT_10121ec8)();
        uVar10 = (*DAT_10121f24)(*(undefined4 *)(*(int *)(this + 4) + 0x208));
        (*DAT_10121ed0)(uVar10);
        (*DAT_10121edc)(uStack_34);
        (*DAT_10121edc)(uStack_30);
        (*DAT_10121edc)(uStack_2c);
        (*DAT_10121ed0)((int)DAT_10131d06);
        (*DAT_10121ec8)(0);
        (*DAT_10121ec8)(10);
        (*DAT_10121ec8)(3);
        (*DAT_10121ec8)(0x14);
        (*DAT_10121ec8)(0);
        (*DAT_10121ec8)();
        (*DAT_10121ec8)();
        (*DAT_10121ec8)();
        (*DAT_10121ec8)();
        (*DAT_10121ec8)();
        (*DAT_10121ec4)();
        uVar10 = *(undefined4 *)(*(int *)(this + 4) + 0x208);
        uVar7 = (*DAT_10121f70)(0x8c,0xa0);
        FUN_100af2c0(uVar10,&uStack_34,s_weapons_electro4_wav_101064b0,0x3f000000,0x3f4ccccd,0,uVar7
                    );
        lVar11 = __ftol();
        *(int *)(this + 0x30c) = (int)lVar11;
        *(code **)(this + 0x74) = DieThink;
        (**(code **)(*(int *)this + 8))();
        return;
      }
    }
  }
  *(undefined4 *)(this + 0x78) = 0;
  FUN_100b0ef0((int)this);
  return;
}

