
/* public: void __thiscall CEnvExplosion::Smoke(void) */

void __thiscall CEnvExplosion::Smoke(CEnvExplosion *this)

{
                    /* 0x35910  204  ?Smoke@CEnvExplosion@@QAEXXZ */
  if ((*(byte *)(*(int *)(this + 4) + 0x1a0) & 8) == 0) {
    (*DAT_10121ec0)(5,0x17,*(int *)(this + 4) + 8,0);
    (*DAT_10121ec8)(5);
    (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 8));
    (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 0xc));
    (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 0x10));
    (*DAT_10121ed0)((int)DAT_10131cf2);
    (*DAT_10121ec8)(this[0x30c]);
    (*DAT_10121ec8)(0xc);
    (*DAT_10121ec4)();
  }
  if ((*(byte *)(*(int *)(this + 4) + 0x1a0) & 2) == 0) {
    FUN_100b0ef0((int)this);
  }
  return;
}

