
void __fastcall FUN_100376d0(Panel *param_1)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  vgui::Color::Color((Color *)&uStack_c);
  (**(code **)(*(int *)param_1 + 0x13c))(&uStack_c);
  if (*(int *)(*(int *)(DAT_100a5178 + 0xaac) + 0x9b8) == *(int *)(param_1 + 0xd4)) {
    (**(code **)(*(int *)param_1 + 300))(0x86,0x5b,0x13,0);
  }
  vgui::Panel::paintBackground(param_1);
  (**(code **)(*(int *)param_1 + 0x128))(&vgui::Color::_vftable_,uStack_c,uStack_8);
  return;
}

