
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CMortar::MortarExplode(void) */

void __thiscall CMortar::MortarExplode(CMortar *this)

{
  int iVar1;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  undefined1 auStack_38 [20];
  float afStack_24 [9];
  
                    /* 0x62a20  153  ?MortarExplode@CMortar@@QAEXXZ */
  (*DAT_10121ec0)(0,0x17,0,0);
  (*DAT_10121ec8)(0);
  (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 8));
  (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 0xc));
  (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 0x10));
  (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 8));
  (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 0xc));
  (*DAT_10121edc)(*(float *)(*(int *)(this + 4) + 0x10) + _DAT_100ddaf0);
  (*DAT_10121ed0)(*(undefined4 *)(this + 0x30c));
  (*DAT_10121ec8)(0);
  (*DAT_10121ec8)(0);
  (*DAT_10121ec8)(1);
  (*DAT_10121ec8)(0x28);
  (*DAT_10121ec8)(0);
  (*DAT_10121ec8)(0xff);
  (*DAT_10121ec8)(0xa0);
  (*DAT_10121ec8)(100);
  (*DAT_10121ec8)(0x80);
  (*DAT_10121ec8)(0);
  (*DAT_10121ec4)();
  iVar1 = *(int *)(this + 4);
  fStack_48 = *(float *)(iVar1 + 0x10) - _DAT_100ddaf0;
  uStack_4c = *(undefined4 *)(iVar1 + 0xc);
  uStack_50 = *(undefined4 *)(iVar1 + 8);
  fStack_3c = *(float *)(iVar1 + 0x10) + _DAT_100ddaf0;
  uStack_40 = *(undefined4 *)(iVar1 + 0xc);
  uStack_44 = *(undefined4 *)(iVar1 + 8);
  FUN_100afc60(&uStack_44,&uStack_50,0,*(undefined4 *)(iVar1 + 0x208),auStack_38);
  FUN_10042d50(this,(int)auStack_38,0x800040);
  FUN_100af360(afStack_24,25.0,0x43160000,0x3f800000,750.0);
  return;
}

