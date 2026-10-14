
/* public: __thiscall vgui::App::App(class vgui::App const &) */

void __thiscall vgui::App::App(App *this,App *param_1)

{
  int iVar1;
  App *pAVar2;
  App *pAVar3;
  
                    /* 0x11950  39  ??0App@vgui@@QAE@ABV01@@Z */
  this[4] = param_1[4];
  this[5] = param_1[5];
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined2 *)(this + 0x28) = *(undefined2 *)(param_1 + 0x28);
  this[0x2a] = param_1[0x2a];
  *(undefined2 *)(this + 0x2b) = *(undefined2 *)(param_1 + 0x2b);
  this[0x2d] = param_1[0x2d];
  *(undefined2 *)(this + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
  this[0x30] = param_1[0x30];
  *(undefined2 *)(this + 0x31) = *(undefined2 *)(param_1 + 0x31);
  this[0x33] = param_1[0x33];
  pAVar2 = param_1 + 0x34;
  pAVar3 = this + 0x34;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pAVar3 = *(undefined4 *)pAVar2;
    pAVar2 = pAVar2 + 4;
    pAVar3 = pAVar3 + 4;
  }
  *(undefined2 *)pAVar3 = *(undefined2 *)pAVar2;
  pAVar3[2] = pAVar2[2];
  pAVar2 = param_1 + 0x9b;
  pAVar3 = this + 0x9b;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pAVar3 = *(undefined4 *)pAVar2;
    pAVar2 = pAVar2 + 4;
    pAVar3 = pAVar3 + 4;
  }
  *(undefined2 *)pAVar3 = *(undefined2 *)pAVar2;
  pAVar3[2] = pAVar2[2];
  pAVar2 = param_1 + 0x102;
  pAVar3 = this + 0x102;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pAVar3 = *(undefined4 *)pAVar2;
    pAVar2 = pAVar2 + 4;
    pAVar3 = pAVar3 + 4;
  }
  *(undefined2 *)pAVar3 = *(undefined2 *)pAVar2;
  pAVar3[2] = pAVar2[2];
  pAVar2 = param_1 + 0x169;
  pAVar3 = this + 0x169;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pAVar3 = *(undefined4 *)pAVar2;
    pAVar2 = pAVar2 + 4;
    pAVar3 = pAVar3 + 4;
  }
  *(undefined2 *)pAVar3 = *(undefined2 *)pAVar2;
  pAVar3[2] = pAVar2[2];
  *(undefined4 *)(this + 0x1d0) = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)(this + 0x1d4) = *(undefined4 *)(param_1 + 0x1d4);
  *(undefined4 *)(this + 0x1d8) = *(undefined4 *)(param_1 + 0x1d8);
  *(undefined4 *)(this + 0x1dc) = *(undefined4 *)(param_1 + 0x1dc);
  this[0x1e0] = param_1[0x1e0];
  this[0x1e1] = param_1[0x1e1];
  *(undefined4 *)(this + 0x1e4) = *(undefined4 *)(param_1 + 0x1e4);
  pAVar2 = param_1 + 0x1e8;
  pAVar3 = this + 0x1e8;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pAVar3 = *(undefined4 *)pAVar2;
    pAVar2 = pAVar2 + 4;
    pAVar3 = pAVar3 + 4;
  }
  *(undefined4 *)(this + 0x220) = *(undefined4 *)(param_1 + 0x220);
  *(undefined4 *)(this + 0x224) = *(undefined4 *)(param_1 + 0x224);
  *(undefined4 *)(this + 0x228) = *(undefined4 *)(param_1 + 0x228);
  *(undefined ***)this = &_vftable_;
  return;
}

