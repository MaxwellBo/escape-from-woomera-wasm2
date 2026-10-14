
Panel * __thiscall FUN_100395c0(void *this,uint param_1,uint param_2,int param_3,int param_4)

{
  void *this_00;
  int iVar1;
  InputSignal *pIVar2;
  App *pAVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  uint unaff_retaddr;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uStack_14;
  void *local_10;
  void *pvStack_c;
  code *pcStack_8;
  uint local_4;
  
  iVar1 = param_3;
  local_4 = 0xffffffff;
  pcStack_8 = FUN_10057d6e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_10 = this;
  vgui::Panel::Panel(this,param_1,param_2,param_3,param_4);
  this_00 = (void *)((int)this + 0x22c);
  FUN_100352e0(this_00,iVar1);
  *(undefined ***)this = &PTR_setPos_100632a4;
  local_4 = 0;
  DAT_100a5178 = this;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0xaa4) = 0;
  *(undefined4 *)((int)this + 0xaa8) = 0;
  *(undefined4 *)((int)this + 0xaac) = 0;
  *(undefined4 *)((int)this + 0x888) = 0;
  *(undefined4 *)((int)this + 0xaa0) = 0;
  *(undefined4 *)((int)this + 0x208) = 0;
  FUN_10039860(this);
  pIVar2 = operator_new(8);
  if (pIVar2 == (InputSignal *)0x0) {
    pIVar2 = (InputSignal *)0x0;
  }
  else {
    *(undefined ***)pIVar2 = &PTR_FUN_10063278;
  }
  vgui::Panel::addInputSignal(this,pIVar2);
  pAVar3 = vgui::App::getInstance();
  piVar4 = (int *)(**(code **)(*(int *)pAVar3 + 0x54))();
  uStack_14 = FUN_10035bb0(this_00,(byte *)s_Primary_Button_Text_1007a2d0);
  iVar1 = *piVar4;
  uVar5 = FUN_10035c30(this_00,uStack_14);
  uVar12 = 1;
  (**(code **)(iVar1 + 8))();
  FUN_10035c40(this_00,unaff_EBP,&local_4,(uint *)&stack0x00000000,&param_1,&param_2);
  uVar9 = 3;
  uVar10 = local_4;
  uVar11 = param_1;
  (**(code **)*piVar4)();
  FUN_10035c80(this_00,unaff_EBP,(uint *)&stack0xffffffe8,&uStack_14,(uint *)&local_10,
               (uint *)&pvStack_c);
  (**(code **)*piVar4)();
  FUN_10035cc0(this_00,unaff_EBP,(uint *)&stack0xffffffd4,(uint *)&stack0xffffffd8,
               (uint *)&stack0xffffffdc,(uint *)&stack0xffffffe0);
  (**(code **)*piVar4)(7,uVar12,uVar5,unaff_EDI,unaff_ESI);
  FUN_10035d00(this_00,unaff_EBP,(uint *)&stack0xffffffc0,(uint *)&stack0xffffffc4,
               (uint *)&stack0xffffffc8,(uint *)&stack0xffffffcc);
  (**(code **)*piVar4)(4,uVar9,uVar10,unaff_retaddr,uVar11);
  FUN_10035d40(this_00,unaff_EBP,(uint *)&stack0xffffffac,(uint *)&stack0xffffffb0,
               (uint *)&stack0xffffffb4,(uint *)&stack0xffffffb8);
  pvVar8 = (void *)0xb2;
  (**(code **)*piVar4)(6,0xb2,0x76,0,0);
  iVar6 = FUN_10035bb0(this_00,(byte *)s_Scoreboard_Text_10079f80);
  iVar1 = *piVar4;
  uVar7 = FUN_10035c30(this_00,iVar6);
  (**(code **)(iVar1 + 8))(2,uVar7);
  iVar6 = FUN_10035bb0(this_00,(byte *)s_CommandMenu_Text_1007a2bc);
  iVar1 = *piVar4;
  uVar7 = FUN_10035c30(this_00,iVar6);
  (**(code **)(iVar1 + 8))(3,uVar7);
  pAVar3 = vgui::App::getInstance();
  (**(code **)(*(int *)pAVar3 + 0x50))(piVar4);
  FUN_1003d560((int)this);
  FUN_1003d620((int)this);
  FUN_1003ccf0((int)this);
  FUN_10039a30(this);
  FUN_1003cde0((int)this);
  FUN_1003d6b0((int)this);
  ExceptionList = pvVar8;
  return this;
}

