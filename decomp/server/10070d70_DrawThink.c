
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CNodeViewer::DrawThink(void) */

void __thiscall CNodeViewer::DrawThink(CNodeViewer *this)

{
  int iVar1;
  longlong lVar2;
  
                    /* 0x70d70  81  ?DrawThink@CNodeViewer@@QAEXXZ */
  (**(code **)(*(int *)this + 8))(0);
  iVar1 = 0;
  do {
    if (*(int *)(this + 0xbc) == *(int *)(this + 0xc0)) {
      FUN_100b0ef0((int)this);
      return;
    }
    (*DAT_10121ec0)(0,0x17,0,0);
    (*DAT_10121ec8)(0);
    (*DAT_10121edc)(*(undefined4 *)
                     (DAT_1012278c + *(int *)(this + *(int *)(this + 0xbc) * 4 + 0xc4) * 0x58));
    (*DAT_10121edc)(*(undefined4 *)
                     (DAT_1012278c + 4 + *(int *)(this + *(int *)(this + 0xbc) * 4 + 0xc4) * 0x58));
    (*DAT_10121edc)(*(float *)(DAT_1012278c + 8 +
                              *(int *)(this + *(int *)(this + 0xbc) * 4 + 0xc4) * 0x58) +
                    _DAT_100de45c);
    (*DAT_10121edc)(*(undefined4 *)
                     (DAT_1012278c + *(int *)(this + *(int *)(this + 0xbc) * 4 + 0x2c4) * 0x58));
    (*DAT_10121edc)(*(undefined4 *)
                     (DAT_1012278c + 4 + *(int *)(this + *(int *)(this + 0xbc) * 4 + 0x2c4) * 0x58))
    ;
    (*DAT_10121edc)(*(float *)(DAT_1012278c + 8 +
                              *(int *)(this + *(int *)(this + 0xbc) * 4 + 0x2c4) * 0x58) +
                    _DAT_100de45c);
    (*DAT_10121ed0)((int)DAT_10131d06);
    (*DAT_10121ec8)(0);
    (*DAT_10121ec8)(0);
    (*DAT_10121ec8)(0xfa);
    (*DAT_10121ec8)(0x28);
    (*DAT_10121ec8)(0);
    lVar2 = __ftol();
    (*DAT_10121ec8)((int)lVar2);
    lVar2 = __ftol();
    (*DAT_10121ec8)((int)lVar2);
    lVar2 = __ftol();
    (*DAT_10121ec8)((int)lVar2);
    (*DAT_10121ec8)(0x80);
    (*DAT_10121ec8)(0);
    (*DAT_10121ec4)();
    iVar1 = iVar1 + 1;
    *(int *)(this + 0xbc) = *(int *)(this + 0xbc) + 1;
  } while (iVar1 < 10);
  return;
}

