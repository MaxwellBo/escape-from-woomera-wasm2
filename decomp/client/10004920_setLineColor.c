
/* public: void __thiscall vgui::LineBorder::setLineColor(int,int,int,int) */

void __thiscall
vgui::LineBorder::setLineColor(LineBorder *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  LineBorder *pLVar2;
  Color local_c [12];
  
                    /* 0x4920  458  ?setLineColor@LineBorder@vgui@@QAEXHHHH@Z */
  iVar1 = vgui::Color::Color(local_c,param_1,param_2,param_3,param_4);
  pLVar2 = this + 0x3c;
  do {
    *pLVar2 = pLVar2[iVar1 - (int)(this + 0x38)];
    pLVar2 = pLVar2 + 1;
  } while (pLVar2 + (-4 - (int)(this + 0x38)) < (LineBorder *)&DAT_00000004);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(iVar1 + 8);
  return;
}

