
void __thiscall FUN_10037f50(void *this,SchemeColor param_1)

{
  int iVar1;
  Color aCStack_18 [4];
  undefined4 uStack_14;
  
  uStack_14 = 0x10037f5f;
  vgui::Label::setFgColor(this,param_1);
  iVar1 = **(int **)((int)this + 0xd0);
  vgui::Color::Color(aCStack_18,param_1);
  (**(code **)(iVar1 + 0xc))();
  return;
}

