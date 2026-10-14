
void __thiscall FUN_10038c90(Panel *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  vgui::Panel::setSize(param_1,param_2,param_3);
  iVar1 = **(int **)(param_1 + 0xc0);
  lVar2 = __ftol();
  (**(code **)(iVar1 + 0x10))(0,0,param_2,(int)lVar2);
  iVar1 = **(int **)(param_1 + 0xc4);
  lVar2 = __ftol();
  uVar3 = (undefined4)lVar2;
  lVar2 = __ftol();
  (**(code **)(iVar1 + 0x10))(0,(int)lVar2,param_2,uVar3);
  uVar4 = 0xf;
  uVar3 = 0x4b;
  iVar1 = **(int **)(param_1 + 200);
  lVar2 = __ftol();
  (**(code **)(iVar1 + 0x10))(5,(int)lVar2,uVar3,uVar4);
  uVar4 = 0xf;
  uVar3 = 0x4b;
  iVar1 = **(int **)(param_1 + 0xcc);
  lVar2 = __ftol();
  (**(code **)(iVar1 + 0x10))(0x55,(int)lVar2,uVar3,uVar4);
  uVar4 = 0xf;
  uVar3 = 0x4b;
  iVar1 = **(int **)(param_1 + 0xd4);
  lVar2 = __ftol();
  (**(code **)(iVar1 + 0x10))(0xa5,(int)lVar2,uVar3,uVar4);
  uVar4 = 0xf;
  uVar3 = 0x4b;
  iVar1 = **(int **)(param_1 + 0xdc);
  lVar2 = __ftol();
  (**(code **)(iVar1 + 0x10))(0xf5,(int)lVar2,uVar3,uVar4);
  return;
}

