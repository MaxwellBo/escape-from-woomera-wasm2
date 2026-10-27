
/* public: __thiscall vgui::ScrollBar2::ScrollBar2(int,int,int,int,bool) */

ScrollBar2 * __thiscall
vgui::ScrollBar2::ScrollBar2
          (ScrollBar2 *this,int param_1,int param_2,int param_3,int param_4,bool param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  Slider2 *pSVar4;
  Button *pBVar5;
  Image *pIVar6;
  Label *this_00;
  int iVar7;
  undefined4 *extraout_EDX;
  undefined4 *puVar8;
  void *unaff_EBX;
  void *pvStack_c;
  code *local_8;
  undefined4 uStack_4;
  
                    /* 0xffe0  74  ??0ScrollBar2@vgui@@QAE@HHHH_N@Z */
  uStack_4 = 0xffffffff;
  local_8 = FUN_10057872;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  vgui::Panel::Panel((Panel *)this,param_1,param_2,param_3,param_4);
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  uVar1 = 1;
  do {
    uVar2 = uVar1;
    uVar1 = uVar2 * 2;
  } while ((int)uVar1 < 4);
  puVar3 = operator_new(uVar2 << 3);
  puVar8 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    FUN_10049aab(0);
    puVar8 = extraout_EDX;
  }
  for (iVar7 = (uVar2 & 0x1fffffff) << 1; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined1 *)puVar8 = 0;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  *(undefined4 **)(this + 0xcc) = puVar3;
  iVar7 = 0;
  if (0 < *(int *)(this + 200)) {
    do {
      iVar7 = iVar7 + 1;
      *(undefined4 *)(param_1 + -4 + iVar7 * 4) =
           *(undefined4 *)(*(int *)(this + 0xd0) + -4 + iVar7 * 4);
    } while (iVar7 < *(int *)(this + 200));
  }
  FUN_10049a73(*(undefined **)(this + 0xd0));
  *(int *)(this + 0xd0) = param_1;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  if ((char)param_4 == '\0') {
    pSVar4 = operator_new(0xfc);
    local_8 = (code *)0x3;
    if (pSVar4 == (Slider2 *)0x0) {
      pSVar4 = (Slider2 *)0x0;
    }
    else {
      pSVar4 = (Slider2 *)Slider2::Slider2(pSVar4,param_4,0,param_3 + param_4 * -2,param_4,false);
    }
    local_8 = (code *)0xffffffff;
    setSlider(this,pSVar4);
    pBVar5 = operator_new(0x134);
    local_8 = (code *)0x4;
    if (pBVar5 == (Button *)0x0) {
      pBVar5 = (Button *)0x0;
    }
    else {
      vgui::Button::Button(pBVar5,s_,0,0,param_4 + 1,param_4 + 1);
      vgui::Color::Color((Color *)&stack0xffffffd4,0x3c,0x3c,0x3c,0);
      vgui::LineBorder::LineBorder((LineBorder *)(pBVar5 + 0xf0));
      *(undefined ***)pBVar5 = &PTR_setPos_1005dd58;
      pIVar6 = (Image *)FUN_100348c0(s_gfx_vgui_320_arrowlt_tga_100778c4);
      if (pIVar6 != (Image *)0x0) {
        iVar7 = *(int *)pIVar6;
        vgui::Color::Color((Color *)&stack0xffffffd4,0x8c,0x8c,0x8c,0);
        (**(code **)(iVar7 + 0xc))();
        vgui::Label::setImage((Label *)pBVar5,pIVar6);
        param_4 = uVar1;
      }
      vgui::Panel::setBorder((Panel *)pBVar5,(Border *)(pBVar5 + 0xf0));
    }
    local_8 = (code *)0xffffffff;
    setButton(this,pBVar5,0);
    this_00 = operator_new(0x134);
    local_8 = (code *)0x5;
    if (this_00 == (Label *)0x0) goto LAB_1001041e;
    vgui::Button::Button((Button *)this_00,s_,param_3 - param_4,0,param_4 + 1U,param_4 + 1U);
    vgui::Color::Color((Color *)&stack0xffffffd4,0x3c,0x3c,0x3c,0);
    vgui::LineBorder::LineBorder((LineBorder *)(this_00 + 0xf0));
    *(undefined ***)this_00 = &PTR_setPos_1005dd58;
    pIVar6 = (Image *)FUN_100348c0(s_gfx_vgui_320_arrowrt_tga_100778a8);
  }
  else {
    pSVar4 = operator_new(0xfc);
    local_8 = (code *)0x0;
    if (pSVar4 == (Slider2 *)0x0) {
      pSVar4 = (Slider2 *)0x0;
    }
    else {
      pSVar4 = (Slider2 *)
               Slider2::Slider2(pSVar4,0,param_3 + -1,param_3,param_4 + param_3 * -2 + 2,true);
    }
    local_8 = (code *)0xffffffff;
    setSlider(this,pSVar4);
    pBVar5 = operator_new(0x134);
    local_8 = (code *)0x1;
    if (pBVar5 == (Button *)0x0) {
      pBVar5 = (Button *)0x0;
    }
    else {
      vgui::Button::Button(pBVar5,s_,0,0,param_3,param_3);
      vgui::Color::Color((Color *)&stack0xffffffd4,0x3c,0x3c,0x3c,0);
      vgui::LineBorder::LineBorder((LineBorder *)(pBVar5 + 0xf0));
      *(undefined ***)pBVar5 = &PTR_setPos_1005dd58;
      pIVar6 = (Image *)FUN_100348c0(s_gfx_vgui_arrowup_tga_100778f8);
      if (pIVar6 != (Image *)0x0) {
        iVar7 = *(int *)pIVar6;
        vgui::Color::Color((Color *)&stack0xffffffd4,0x8c,0x8c,0x8c,0);
        (**(code **)(iVar7 + 0xc))();
        vgui::Label::setImage((Label *)pBVar5,pIVar6);
        param_4 = uVar1;
      }
      vgui::Panel::setBorder((Panel *)pBVar5,(Border *)(pBVar5 + 0xf0));
    }
    local_8 = (code *)0xffffffff;
    setButton(this,pBVar5,0);
    this_00 = operator_new(0x134);
    local_8 = (code *)0x2;
    if (this_00 == (Label *)0x0) {
LAB_1001041e:
      this_00 = (Label *)0x0;
      goto LAB_10010420;
    }
    vgui::Button::Button((Button *)this_00,s_,0,param_4 - param_3,param_3,param_3);
    vgui::Color::Color((Color *)&stack0xffffffd4,0x3c,0x3c,0x3c,0);
    vgui::LineBorder::LineBorder((LineBorder *)(this_00 + 0xf0));
    *(undefined ***)this_00 = &PTR_setPos_1005dd58;
    pIVar6 = (Image *)FUN_100348c0(s_gfx_vgui_arrowdown_tga_100778e0);
  }
  if (pIVar6 != (Image *)0x0) {
    iVar7 = *(int *)pIVar6;
    vgui::Color::Color((Color *)&stack0xffffffd4,0x8c,0x8c,0x8c,0);
    (**(code **)(iVar7 + 0xc))();
    vgui::Label::setImage(this_00,pIVar6);
  }
  vgui::Panel::setBorder((Panel *)this_00,(Border *)(this_00 + 0xf0));
LAB_10010420:
  local_8 = (code *)0xffffffff;
  setButton(this,(Button *)this_00,1);
  vgui::Panel::setPaintBorderEnabled((Panel *)this,true);
  vgui::Panel::setPaintBackgroundEnabled((Panel *)this,true);
  vgui::Panel::setPaintEnabled((Panel *)this,true);
  setButtonPressedScrollValue(this,0xf);
  validate(this);
  ExceptionList = unaff_EBX;
  return this;
}

