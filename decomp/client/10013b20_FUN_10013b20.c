
void __thiscall FUN_10013b20(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  void *local_4;
  
  piVar1 = param_1;
  local_4 = this;
  (**(code **)(*param_1 + 0xc))(&param_1,&local_4);
  (**(code **)(*(int *)this + 0x40))(piVar1);
  (**(code **)(*(int *)this + 0x20c))(1);
  iVar7 = 0;
  (**(code **)(*(int *)this + 0x21c))(0);
  iVar6 = 0;
  (**(code **)(*(int *)this + 300))(0,0,0,0xff);
  uVar5 = 0;
  (**(code **)(*(int *)this + 0x120))(0xff,0xff,0xff,0);
  iVar4 = iVar7;
  (*(code *)**(undefined4 **)this)(0x28,iVar7);
  iVar3 = 0x14;
  (**(code **)(*(int *)this + 8))(iVar6 / 2 + -0x28,0x14);
  (**(code **)(*(int *)this + 0x200))(this,uVar5);
  (**(code **)(*(int *)this + 0x24))(1);
  (**(code **)(*(int *)((int)this + 0x1a8) + 0x214))(10);
  (**(code **)(*(int *)((int)this + 0x1a8) + 0x218))(1);
  piVar2 = (int *)((int)this + 0xd0);
  (*(code *)**(undefined4 **)((int)this + 0xd0))(iVar4 / 2 + 0x28,iVar7);
  (**(code **)(*piVar2 + 8))(iVar3 / 2 + -0x50,0x14);
  (**(code **)(*piVar2 + 0x224))((int *)((int)this + 0x1a8));
  (**(code **)(*piVar2 + 0x40))(piVar1);
  (**(code **)(*piVar2 + 0x208))(0,100);
  (**(code **)(*piVar2 + 0x120))(0xff,0xff,0xff,0);
  (**(code **)(*piVar2 + 300))(0xff,0xff,0xff,0);
  return;
}

