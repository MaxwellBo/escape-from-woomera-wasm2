
void __fastcall FUN_10037750(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_ESI;
  int *unaff_EDI;
  Color *pCStack_4c;
  int *piVar4;
  int aiStack_24 [4];
  code *pcStack_14;
  code *pcStack_10;
  Color aCStack_c [12];
  
  vgui::Color::Color(aCStack_c);
  (**(code **)(*param_1 + 0x134))();
  if (*(int *)(*(int *)(DAT_100a5178 + 0xaac) + 0x9b8) == param_1[0x35]) {
    (**(code **)(*param_1 + 0x120))();
  }
  (**(code **)(*param_1 + 0x210))();
  pCStack_4c = (Color *)0x100377d5;
  FUN_100378d0(param_1,unaff_EDI,(int *)aCStack_c);
  (*(code *)**(undefined4 **)param_1[0x34])();
  piVar4 = aiStack_24;
  pCStack_4c = (Color *)0x10037801;
  (**(code **)(**(int **)(param_1[0x34] + 0x28) + 4))();
  piVar1 = (int *)param_1[0x36];
  pCStack_4c = aCStack_c;
  (**(code **)**(undefined4 **)(param_1[0x34] + 0x28))();
  (**(code **)(*(int *)param_1[0x34] + 0x5c))();
  if ((int *)param_1[0x33] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x33] + 8))(&stack0xffffffb8,&pCStack_4c);
    FUN_100378d0(param_1,piVar1,param_1);
    (*(code *)**(undefined4 **)param_1[0x33])(piVar4,pCStack_4c);
    (**(code **)(*(int *)param_1[0x33] + 0x5c))(param_1);
  }
  iVar2 = *param_1;
  uVar3 = (*pcStack_14)(3);
  uVar3 = (*pcStack_10)(2,uVar3);
  uVar3 = (**(code **)(unaff_ESI + 0x14))(1,uVar3);
  uVar3 = (**(code **)(aiStack_24[0] + 0x14))(0,uVar3);
  (**(code **)(iVar2 + 0x120))(uVar3);
  return;
}

