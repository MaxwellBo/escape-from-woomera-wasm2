
/* public: virtual void __thiscall vgui::ScrollBar2::validate(void) */

void __thiscall vgui::ScrollBar2::validate(ScrollBar2 *this)

{
  char cVar1;
  int iVar2;
  undefined4 unaff_EBX;
  int iVar3;
  ScrollBar2 *pSVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
                    /* 0x10e20  470  ?validate@ScrollBar2@vgui@@UAEXXZ */
  if (*(int *)(this + 0xc4) != 0) {
    iVar5 = 0;
    pSVar4 = this + 0xbc;
    iVar3 = 2;
    do {
      if (*(int **)pSVar4 != (int *)0x0) {
        cVar1 = (**(code **)(**(int **)pSVar4 + 0x28))();
        if (cVar1 != '\0') {
          cVar1 = (**(code **)(**(int **)(this + 0xc4) + 0x204))();
          if (cVar1 == '\0') {
            iVar2 = (**(code **)(**(int **)pSVar4 + 0x18))();
          }
          else {
            iVar2 = (**(code **)(**(int **)pSVar4 + 0x1c))();
          }
          iVar5 = iVar5 + iVar2;
        }
      }
      pSVar4 = pSVar4 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    (**(code **)(**(int **)(this + 0xc4) + 0x224))(iVar5);
  }
  puVar6 = local_8;
  (**(code **)(*(int *)this + 0xc))(local_4,puVar6);
  (**(code **)(*(int *)this + 8))(unaff_EBX,puVar6);
  return;
}

