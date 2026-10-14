
/* protected: virtual void __thiscall vgui::Slider2::paintBackground(void) */

void __thiscall vgui::Slider2::paintBackground(Slider2 *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
                    /* 0x11590  340  ?paintBackground@Slider2@vgui@@MAEXXZ */
  puVar5 = local_8;
  puVar6 = local_4;
  (**(code **)(*(int *)this + 0xe8))(local_8,puVar6);
  if (this[0xbc] != (Slider2)0x0) {
    uVar4 = 0x28;
    uVar3 = 0x28;
    (**(code **)(*(int *)this + 0x178))(0x28,0x28,0x28,0);
    (**(code **)(*(int *)this + 0x180))(0,0,uVar3,uVar4);
    uVar3 = 0;
    (**(code **)(*(int *)this + 0x178))(0,0,0,0);
    (**(code **)(*(int *)this + 0x180))
              (0,*(undefined4 *)(this + 0xc0),uVar3,*(undefined4 *)(this + 0xc4));
    uVar3 = 0x3c;
    (**(code **)(*(int *)this + 0x178))(0x3c,0x3c,0x3c,0);
    iVar1 = *(int *)(this + 0xc0);
    (**(code **)(*(int *)this + 0x180))(0,iVar1,uVar3,iVar1 + 1);
    (**(code **)(*(int *)this + 0x180))(0,*(int *)(this + 0xc4),iVar1,*(int *)(this + 0xc4) + 1);
    iVar1 = *(int *)(this + 0xc0) + 1;
    (**(code **)(*(int *)this + 0x180))(0,iVar1,1,*(undefined4 *)(this + 0xc4));
    (**(code **)(*(int *)this + 0x180))
              (iVar1 + -1,*(int *)(this + 0xc0) + 1,iVar1,*(undefined4 *)(this + 0xc4));
    return;
  }
  (**(code **)(*(int *)this + 0x17c))(8);
  uVar2 = 0;
  uVar3 = 0;
  (**(code **)(*(int *)this + 0x180))(0,0,puVar5,puVar6);
  (**(code **)(*(int *)this + 0x17c))(1);
  uVar4 = 0;
  (**(code **)(*(int *)this + 0x184))(0,0,uVar3,uVar2);
  (**(code **)(*(int *)this + 0x17c))(4);
  uVar3 = 0;
  (**(code **)(*(int *)this + 0x180))
            (*(undefined4 *)(this + 0xc0),0,*(undefined4 *)(this + 0xc4),uVar4);
  (**(code **)(*(int *)this + 0x17c))(1);
  (**(code **)(*(int *)this + 0x184))
            (*(undefined4 *)(this + 0xc0),0,*(undefined4 *)(this + 0xc4),uVar3);
  return;
}

