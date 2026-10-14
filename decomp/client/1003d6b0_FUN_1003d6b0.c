
void __fastcall FUN_1003d6b0(int param_1)

{
  void *this;
  Panel *this_00;
  int iVar1;
  Label *pLVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  void *pvVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iStack_24;
  int iStack_20;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_1005805c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this_00 = operator_new(0xc0);
  local_4 = 0;
  if (this_00 == (Panel *)0x0) {
    this_00 = (Panel *)0x0;
  }
  else {
    lVar9 = __ftol();
    lVar10 = __ftol();
    vgui::Panel::Panel(this_00,0,(int)lVar10,DAT_100a4dcc,(int)lVar9);
    *(undefined ***)this_00 = &PTR_setPos_100605a8;
    *(undefined4 *)(this_00 + 0xbc) = 100;
  }
  *(Panel **)(param_1 + 0x888) = this_00;
  local_4 = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x40))();
  (**(code **)(**(int **)(param_1 + 0x888) + 0x24))();
  this = (void *)(DAT_100a5178 + 0x22c);
  FUN_10035bb0(this,(byte *)s_Title_Font_10079c08);
  iVar1 = FUN_10035bb0(this,(byte *)s_Primary_Button_Text_1007a2d0);
  pLVar2 = operator_new(0xd0);
  pvStack_c = (void *)0x1;
  if (pLVar2 == (Label *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    lVar9 = __ftol();
    piVar3 = (int *)vgui::Label::Label(pLVar2,s_Spectator_1007866c,0,0,DAT_100a4dcc,(int)lVar9);
  }
  *(int **)(param_1 + 0x88c) = piVar3;
  pvStack_c = (void *)0xffffffff;
  (**(code **)(*piVar3 + 0x40))();
  iVar4 = **(int **)(param_1 + 0x88c);
  FUN_10035c30(this,iStack_20);
  (**(code **)(iVar4 + 0x208))();
  FUN_10035c40(this,iStack_24,(uint *)&stack0xffffffd4,(uint *)&stack0xffffffd0,
               (uint *)&stack0xffffffcc,(uint *)&stack0xffffffd8);
  (**(code **)(**(int **)(param_1 + 0x88c) + 0x120))();
  FUN_10035c80(this,iStack_24,(uint *)&stack0xffffffc4,(uint *)&stack0xffffffc0,
               (uint *)&stack0xffffffbc,(uint *)&stack0xffffffc8);
  uVar16 = 0xff;
  (**(code **)(**(int **)(param_1 + 0x88c) + 300))();
  (**(code **)(**(int **)(param_1 + 0x88c) + 0x21c))();
  pLVar2 = operator_new(0xd0);
  if (pLVar2 == (Label *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    lVar9 = __ftol();
    uVar6 = (uint)lVar9;
    uVar13 = DAT_100a4dcc;
    lVar9 = __ftol();
    iVar4 = (int)lVar9;
    iVar15 = 0;
    pcVar5 = FUN_10030c20(s__Spec_Help_1007a708);
    piVar3 = (int *)vgui::Label::Label(pLVar2,pcVar5,iVar15,iVar4,uVar13,uVar6);
  }
  uVar13 = *(uint *)(param_1 + 0x888);
  *(int **)(param_1 + 0x890) = piVar3;
  (**(code **)(*piVar3 + 0x40))();
  iVar4 = **(int **)(param_1 + 0x890);
  uVar6 = FUN_10035c30(this,iVar1);
  (**(code **)(iVar4 + 0x208))();
  FUN_10035c40(this,iVar1,(uint *)&stack0xffffffa8,(uint *)&stack0xffffffa4,(uint *)&stack0xffffffa0
               ,(uint *)&stack0xffffffac);
  (**(code **)(**(int **)(param_1 + 0x890) + 0x120))();
  FUN_10035c80(this,iVar1,(uint *)&stack0xffffff98,(uint *)&stack0xffffff94,(uint *)&stack0xffffff90
               ,(uint *)&stack0xffffff9c);
  uVar14 = 0xff;
  (**(code **)(**(int **)(param_1 + 0x890) + 300))();
  uVar12 = 1;
  (**(code **)(**(int **)(param_1 + 0x890) + 0x21c))();
  pLVar2 = operator_new(0xd0);
  if (pLVar2 == (Label *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    lVar9 = __ftol();
    uVar7 = (uint)lVar9;
    uVar8 = DAT_100a4dcc;
    lVar9 = __ftol();
    iVar4 = (int)lVar9;
    iVar15 = 0;
    pcVar5 = FUN_10030c20(s__Spec_Help2_1007a894);
    piVar3 = (int *)vgui::Label::Label(pLVar2,pcVar5,iVar15,iVar4,uVar8,uVar7);
  }
  pvVar11 = *(void **)(param_1 + 0x888);
  (**(code **)(*piVar3 + 0x40))();
  iVar4 = *piVar3;
  uVar8 = FUN_10035c30(this,iVar1);
  (**(code **)(iVar4 + 0x208))();
  FUN_10035c40(this,iVar1,(uint *)&stack0xffffff7c,(uint *)&stack0xffffff78,(uint *)&stack0xffffff74
               ,(uint *)&stack0xffffff80);
  (**(code **)(*piVar3 + 0x120))(uVar14,uVar6,uVar13,uVar16);
  FUN_10035c80(this,iVar1,(uint *)&stack0xffffff6c,(uint *)&stack0xffffff68,(uint *)&stack0xffffff64
               ,(uint *)&stack0xffffff70);
  (**(code **)(*piVar3 + 300))(uVar12,pvVar11,uVar8,0xff);
  (**(code **)(*piVar3 + 0x21c))(4);
  ExceptionList = pvVar11;
  return;
}

