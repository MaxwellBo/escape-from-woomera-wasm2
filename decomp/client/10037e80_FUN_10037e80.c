
void __thiscall FUN_10037e80(Label *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  Color aCStack_c [4];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  vgui::Label::setFgColor(param_1,param_2,param_3,param_4,param_5);
  vgui::Color::Color(aCStack_c,param_2,param_3,param_4,param_5);
  (**(code **)(**(int **)(param_1 + 0xd0) + 0xc))(&vgui::Color::_vftable_,uStack_8,uStack_4);
  FUN_10037c30(*(void **)(param_1 + 0xd0),&vgui::Color::_vftable_,unaff_EBP,unaff_EBX);
  if ((*(int *)(param_1 + 0xcc) != 0) && (param_1[0xe4] != (Label)0x0)) {
    (**(code **)(**(int **)(param_1 + 0xcc) + 0xc))(&vgui::Color::_vftable_,unaff_EBP,unaff_EBX);
  }
  (**(code **)(*(int *)param_1 + 0x30))();
  return;
}

