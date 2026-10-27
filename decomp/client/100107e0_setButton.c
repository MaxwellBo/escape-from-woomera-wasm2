
/* public: virtual void __thiscall vgui::ScrollBar2::setButton(class vgui::Button *,int) */

void __thiscall vgui::ScrollBar2::setButton(ScrollBar2 *this,Button *param_1,int param_2)

{
  undefined4 *puVar1;
  
                    /* 0x107e0  419  ?setButton@ScrollBar2@vgui@@UAEXPAVButton@2@H@Z */
  if (*(int *)(this + param_2 * 4 + 0xbc) != 0) {
    (**(code **)(*(int *)this + 0x4c))(*(int *)(this + param_2 * 4 + 0xbc));
  }
  *(Button **)(this + param_2 * 4 + 0xbc) = param_1;
  (**(code **)(*(int *)this + 0x44))(param_1);
  puVar1 = operator_new(0xc);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_1005e1f8;
    puVar1[1] = this;
    puVar1[2] = param_2;
  }
  (**(code **)(**(int **)(this + param_2 * 4 + 0xbc) + 0x240))(puVar1);
  (**(code **)(*(int *)this + 0x234))();
  return;
}

