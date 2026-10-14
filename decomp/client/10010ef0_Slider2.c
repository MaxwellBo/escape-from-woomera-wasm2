
/* public: __thiscall vgui::Slider2::Slider2(int,int,int,int,bool) */

Slider2 * __thiscall
vgui::Slider2::Slider2(Slider2 *this,int param_1,int param_2,int param_3,int param_4,bool param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  InputSignal *pIVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  
                    /* 0x10ef0  78  ??0Slider2@vgui@@QAE@HHHH_N@Z */
  vgui::Panel::Panel((Panel *)this,param_1,param_2,param_3,param_4);
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  uVar1 = 1;
  do {
    uVar6 = uVar1;
    uVar1 = uVar6 * 2;
  } while ((int)uVar1 < 4);
  puVar2 = operator_new(uVar6 * 8);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_10049aab(0);
  }
  puVar7 = puVar2;
  for (iVar5 = (uVar6 & 0x1fffffff) << 1; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined1 *)puVar7 = 0;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  *(uint *)(this + 0xdc) = uVar1;
  iVar5 = 0;
  if (0 < *(int *)(this + 0xd8)) {
    do {
      iVar3 = iVar5 + 1;
      puVar2[iVar5] = *(undefined4 *)(*(int *)(this + 0xe0) + -4 + iVar3 * 4);
      iVar5 = iVar3;
    } while (iVar3 < *(int *)(this + 0xd8));
  }
  FUN_10049a73(*(undefined **)(this + 0xe0));
  *(undefined4 **)(this + 0xe0) = puVar2;
  this[0xbc] = param_4._0_1_;
  *(undefined ***)this = &_vftable_;
  this[0xbd] = (Slider2)0x0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xe8) = 299;
  *(undefined4 *)(this + 0xf0) = 0;
  this[0xf4] = (Slider2)0x0;
  *(undefined4 *)(this + 0xf8) = 0;
  recomputeNobPosFromValue(this);
  pIVar4 = operator_new(8);
  if (pIVar4 != (InputSignal *)0x0) {
    *(undefined ***)pIVar4 = &PTR_FUN_1005e444;
    *(Slider2 **)(pIVar4 + 4) = this;
    vgui::Panel::addInputSignal((Panel *)this,pIVar4);
    return this;
  }
  vgui::Panel::addInputSignal((Panel *)this,(InputSignal *)0x0);
  return this;
}

