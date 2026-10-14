
/* public: virtual void __thiscall vgui::Slider2::privateCursorMoved(int,int,class vgui::Panel *) */

void __thiscall
vgui::Slider2::privateCursorMoved(Slider2 *this,int param_1,int param_2,Panel *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int unaff_EDI;
  int *piStack_18;
  int *piStack_14;
  undefined1 auStack_4 [4];
  
                    /* 0x117a0  342  ?privateCursorMoved@Slider2@vgui@@UAEXHHPAVPanel@2@@Z */
  if (this[0xbd] != (Slider2)0x0) {
    piStack_14 = (int *)0x100117bd;
    piVar2 = (int *)(**(code **)(*(int *)this + 0x14c))();
    piStack_14 = &param_2;
    piStack_18 = &param_1;
    (**(code **)(*piVar2 + 0x34))();
    (**(code **)(*(int *)this + 0x8c))();
    (**(code **)(*(int *)this + 0xe8))(&piStack_14,&piStack_18);
    if (this[0xbc] == (Slider2)0x0) {
      iVar3 = (*(int *)(this + 200) - *(int *)(this + 0xd0)) + (int)piStack_14;
      iVar1 = (*(int *)(this + 0xcc) - *(int *)(this + 0xd0)) + (int)piStack_14;
      *(int *)(this + 0xc0) = iVar3;
      *(int *)(this + 0xc4) = iVar1;
      if ((int)&stack0x00000000 < iVar1) {
        *(BADSPACEBASE **)(this + 0xc4) = register0x00000010;
        *(undefined1 **)(this + 0xc0) = &stack0x00000000 + (iVar3 - iVar1);
      }
      iVar1 = *(int *)(this + 0xc0);
    }
    else {
      iVar3 = (*(int *)(this + 200) - *(int *)(this + 0xd4)) + unaff_EDI;
      iVar1 = (*(int *)(this + 0xcc) - *(int *)(this + 0xd4)) + unaff_EDI;
      *(int *)(this + 0xc0) = iVar3;
      *(int *)(this + 0xc4) = iVar1;
      if ((int)auStack_4 < iVar1) {
        *(undefined1 **)(this + 0xc4) = auStack_4;
        *(undefined1 **)(this + 0xc0) = auStack_4 + (iVar3 - iVar1);
      }
      iVar1 = *(int *)(this + 0xc0);
    }
    if (iVar1 < 0) {
      *(undefined4 *)(this + 0xc0) = 0;
      *(int *)(this + 0xc4) = *(int *)(this + 0xc4) - iVar1;
    }
    (**(code **)(*(int *)this + 0x22c))();
    (**(code **)(*(int *)this + 0x30))();
    (**(code **)(*(int *)this + 0x23c))();
  }
  return;
}

