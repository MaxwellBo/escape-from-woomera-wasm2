
void __fastcall FUN_10033620(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  Color aCStack_14 [8];
  undefined4 uStack_c;
  
  if (param_1[0x4b] != 0) {
    uStack_c = 0x10033636;
    cVar1 = (**(code **)(*param_1 + 0x248))();
    if (cVar1 == '\0') {
      iVar2 = *(int *)param_1[0x4b];
      iVar3 = 0x80;
    }
    else {
      iVar2 = *(int *)param_1[0x4b];
      iVar3 = 0;
    }
    vgui::Color::Color(aCStack_14,0xff,0xff,0xff,iVar3);
    (**(code **)(iVar2 + 0xc))();
    (**(code **)(*(int *)param_1[0x4b] + 0x5c))(param_1);
  }
  return;
}

