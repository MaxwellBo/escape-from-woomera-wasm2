
Label * __fastcall FUN_100379e0(Label *param_1)

{
  Image *this;
  TextImage *pTVar1;
  undefined4 uVar2;
  undefined4 in_stack_ffffffd4;
  undefined4 uVar3;
  char *pcVar4;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_10057ca1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  vgui::Label::Label(param_1,s_);
  pcVar4 = (char *)0x2c;
  *(undefined ***)param_1 = &PTR_setPos_10062724;
  uVar3 = 0x10037a14;
  this = operator_new(0x2c);
  local_4 = 0;
  if (this == (Image *)0x0) {
    this = (Image *)0x0;
  }
  else {
    vgui::Image::Image(this);
    *(undefined ***)this = &PTR_FUN_100626c4;
    pTVar1 = operator_new(0x48);
    local_4._0_1_ = 1;
    if (pTVar1 == (TextImage *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = vgui::TextImage::TextImage(pTVar1,s_);
    }
    pcVar4 = (char *)0x48;
    local_4._0_1_ = 0;
    *(undefined4 *)(this + 0x24) = uVar3;
    uVar3 = 0x10037a69;
    pTVar1 = operator_new(0x48);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (pTVar1 == (TextImage *)0x0) {
      *(undefined4 *)(this + 0x28) = 0;
    }
    else {
      pcVar4 = s_;
      uVar3 = 0x10037a85;
      uVar2 = vgui::TextImage::TextImage(pTVar1,s_);
      *(undefined4 *)(this + 0x28) = uVar2;
    }
  }
  local_4 = 0xffffffff;
  *(Image **)(param_1 + 0xd0) = this;
  vgui::Color::Color((Color *)&stack0xffffffd4,0xff,0xaa,0,0);
  FUN_10037c30(*(void **)(param_1 + 0xd0),in_stack_ffffffd4,uVar3,pcVar4);
  *(undefined4 *)(param_1 + 0xd4) = 0xfffffffe;
  param_1[0xe4] = (Label)0x1;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  ExceptionList = local_c;
  return param_1;
}

