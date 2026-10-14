
void __fastcall FUN_10033260(Label *param_1)

{
  int *piVar1;
  char cVar2;
  
  if (*(int *)(param_1 + 0xfc) != 0) {
    cVar2 = (**(code **)(*(int *)param_1 + 0x238))();
    piVar1 = *(int **)(param_1 + 0xfc);
    if (cVar2 == '\0') {
      piVar1[0x34] = 0;
      (**(code **)(*piVar1 + 0x30))();
    }
    else {
      piVar1[0x34] = 1;
      (**(code **)(*piVar1 + 0x30))();
    }
  }
  cVar2 = (**(code **)(*(int *)param_1 + 0x248))();
  if (cVar2 != '\0') {
    (**(code **)(*(int *)param_1 + 0x124))(7);
    vgui::Label::paint(param_1);
    return;
  }
  (**(code **)(*(int *)param_1 + 0x124))(3);
  vgui::Label::paint(param_1);
  return;
}

