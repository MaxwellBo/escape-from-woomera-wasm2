
/* public: virtual void __thiscall vgui::ScrollBar2::setSize(int,int) */

void __thiscall vgui::ScrollBar2::setSize(ScrollBar2 *this,int param_1,int param_2)

{
  char cVar1;
  int unaff_EBX;
  int unaff_retaddr;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
                    /* 0x104d0  465  ?setSize@ScrollBar2@vgui@@UAEXHH@Z */
  vgui::Panel::setSize((Panel *)this,param_1,param_2);
  if (((*(int *)(this + 0xc4) != 0) && (*(int *)(this + 0xbc) != 0)) && (*(int *)(this + 0xc0) != 0)
     ) {
    piVar4 = &param_2;
    piVar3 = &param_1;
    (**(code **)(*(int *)this + 0xe8))(piVar3,piVar4);
    cVar1 = (**(code **)(**(int **)(this + 0xc4) + 0x204))();
    if (cVar1 != '\0') {
      iVar2 = 0;
      (**(code **)(**(int **)(this + 0xc4) + 0x10))
                (0,unaff_EBX,unaff_EBX,unaff_retaddr + unaff_EBX * -2);
      (**(code **)(**(int **)(this + 0xbc) + 0x10))(0,0,piVar3,piVar3);
      (**(code **)(**(int **)(this + 0xc0) + 0x10))(0,unaff_EBX - iVar2,iVar2,iVar2);
      return;
    }
    iVar2 = 0;
    (**(code **)(**(int **)(this + 0xc4) + 0x10))
              (unaff_retaddr,0,unaff_EBX + unaff_retaddr * -2,unaff_retaddr);
    (**(code **)(**(int **)(this + 0xbc) + 0x10))(0,0,piVar4,piVar4);
    (**(code **)(**(int **)(this + 0xc0) + 0x10))(unaff_retaddr - iVar2,0,iVar2,iVar2);
  }
  return;
}

