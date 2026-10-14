
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

Panel * __thiscall
FUN_10034b80(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
            int param_5,int param_6,int param_7,int param_8)

{
  Panel *this_00;
  LineBorder *pLVar1;
  Label *this_01;
  int iVar2;
  int *piVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  ScrollPanel *pSVar7;
  TextPanel *this_02;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  Button *pBVar13;
  int iVar14;
  char *pcVar15;
  undefined4 *puVar16;
  Panel *pPVar17;
  longlong lVar18;
  Button BVar19;
  undefined1 *puVar20;
  undefined4 uStack_b0;
  uint uVar21;
  void *this_03;
  void *this_04;
  undefined4 uVar22;
  uint uVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  uint uVar26;
  uint uVar27;
  void *pvVar28;
  uint local_28;
  uint local_24;
  uint local_20 [2];
  int iStack_18;
  undefined1 *puStack_14;
  Panel *local_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_10057bb2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  vgui::Panel::Panel(this,param_5,param_6,param_7,param_8);
  *(undefined4 *)((int)this + 200) = param_4;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(uint *)((int)this + 0xbc) = (-(uint)(param_3 != 0) & 0xffffff65) + 0xff;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined ***)this = &PTR_setPos_10062070;
  pvVar5 = (void *)(DAT_100a5178 + 0x22c);
  FUN_10035bb0(pvVar5,(byte *)s_Title_Font_10079c08);
  FUN_10035bb0(pvVar5,(byte *)s_Briefing_Text_10079bf8);
  this_00 = operator_new(0xc0);
  local_4 = 0;
  pPVar17 = (Panel *)0x0;
  local_10 = this_00;
  if (this_00 != (Panel *)0x0) {
    lVar18 = __ftol();
    local_28 = (uint)lVar18;
    lVar18 = __ftol();
    local_24 = (uint)lVar18;
    lVar18 = __ftol();
    local_20[0] = (uint)lVar18;
    lVar18 = __ftol();
    vgui::Panel::Panel(this_00,(int)lVar18,local_20[0],local_24,local_28);
    *(undefined ***)this_00 = &PTR_setPos_100605a8;
    *(uint *)(this_00 + 0xbc) = (-(uint)(param_3 != 0) & 0x9b) + 100;
    pPVar17 = this_00;
  }
  *(Panel **)((int)this + 0xd4) = pPVar17;
  local_4 = 0xffffffff;
  pvVar28 = this;
  (**(code **)(*(int *)pPVar17 + 0x40))();
  pLVar1 = operator_new(0x44);
  pcStack_8 = (code *)0x1;
  if (pLVar1 != (LineBorder *)0x0) {
    puStack_14 = &stack0xffffffa4;
    vgui::Color::Color((Color *)&stack0xffffffa4,0xb2,0x76,0,0);
    vgui::LineBorder::LineBorder(pLVar1);
  }
  pcStack_8 = (code *)0xffffffff;
  (**(code **)(**(int **)((int)this + 0xd4) + 0xd4))();
  uVar26 = 1;
  (**(code **)(**(int **)((int)this + 0xd4) + 0x24))();
  puVar25 = &stack0xffffffbc;
  puVar20 = &stack0xffffffc0;
  (**(code **)(**(int **)((int)this + 0xd4) + 4))();
  puVar24 = &stack0xffffffc0;
  (**(code **)(**(int **)((int)this + 0xd4) + 0xc))();
  this_01 = operator_new(0xd0);
  local_20[0] = 2;
  if (this_01 == (Label *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    lVar18 = __ftol();
    iVar2 = (int)lVar18;
    lVar18 = __ftol();
    piVar3 = (int *)vgui::Label::Label(this_01,s_,(int)lVar18,iVar2);
  }
  local_20[0] = 0xffffffff;
  (**(code **)(*piVar3 + 0x40))();
  iVar2 = *piVar3;
  iVar4 = FUN_10035c30(pvVar5,(int)local_10);
  (**(code **)(iVar2 + 0x208))();
  (**(code **)(*piVar3 + 0x20c))();
  FUN_10035c40(pvVar5,iStack_18,(uint *)&stack0xffffff9c,(uint *)&puStack_14,(uint *)&local_10,
               (uint *)&pvStack_c);
  this_04 = pvStack_c;
  (**(code **)(*piVar3 + 0x120))();
  uVar22 = 3;
  (**(code **)(*piVar3 + 0x124))();
  FUN_10035c80(pvVar5,iStack_18,(uint *)&stack0xffffff88,&local_28,&local_24,local_20);
  (**(code **)(*piVar3 + 300))();
  this_03 = (void *)0x3;
  (**(code **)(*piVar3 + 0x21c))();
  (**(code **)(*piVar3 + 0x200))();
  pvVar5 = operator_new(0xd0);
  if (pvVar5 == (void *)0x0) {
    pSVar7 = (ScrollPanel *)0x0;
  }
  else {
    lVar18 = __ftol();
    iVar2 = (int)lVar18;
    lVar18 = __ftol();
    iVar6 = (int)lVar18;
    lVar18 = __ftol();
    uVar21 = (uint)lVar18;
    lVar18 = __ftol();
    uStack_b0 = 0x10034f4c;
    pSVar7 = FUN_100337a0(pvVar5,(int)lVar18,uVar21,iVar6,iVar2);
  }
  uVar27 = 0xffffffff;
  (**(code **)(*(int *)pSVar7 + 0x40))();
  uVar21 = 0;
  (**(code **)(*(int *)pSVar7 + 0x200))();
  uStack_b0 = 1;
  (**(code **)(*(int *)pSVar7 + 0x1fc))();
  (**(code **)(*(int *)pSVar7 + 0x220))();
  this_02 = operator_new(0xc0);
  if (this_02 == (TextPanel *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)vgui::TextPanel::TextPanel(this_02,s_,0,0,0x40,0x40);
  }
  uVar23 = 0xffffffff;
  iVar2 = *piVar3;
  uVar8 = (**(code **)(*(int *)pSVar7 + 0x204))();
  (**(code **)(iVar2 + 0x40))();
  iVar2 = *piVar3;
  uVar9 = FUN_10035c30(this_04,(int)puVar25);
  (**(code **)(iVar2 + 0x200))();
  FUN_10035c40(this_03,(int)puVar20,(uint *)&stack0xffffff58,(uint *)&stack0xffffffa8,
               (uint *)&stack0xffffffac,(uint *)&stack0xffffffb0);
  (**(code **)(*piVar3 + 0x120))(uVar21,uVar26,uVar27,pvVar28);
  FUN_10035c80(this_03,iVar4,(uint *)&stack0xffffff48,(uint *)&stack0xffffff98,
               (uint *)&stack0xffffff9c,(uint *)&stack0xffffffa0);
  (**(code **)(*piVar3 + 300))(uVar9,uVar23,puVar24);
  (**(code **)(*piVar3 + 0x1fc))(uVar22);
  piVar10 = (int *)(**(code **)(*(int *)pSVar7 + 0x208))();
  piVar11 = (int *)(**(code **)(*(int *)pSVar7 + 0x208))();
  piVar12 = (int *)(**(code **)(*piVar3 + 0x208))();
  iVar2 = *piVar12;
  uVar22 = (**(code **)(*piVar10 + 0x1c))();
  uVar22 = (**(code **)(*piVar11 + 0x18))(uVar22);
  (**(code **)(iVar2 + 0x14))(uVar22);
  piVar10 = (int *)(**(code **)(*piVar3 + 0x208))();
  (**(code **)(*piVar10 + 0x68))(&stack0xffffff54,&uStack_b0);
  (**(code **)(*piVar3 + 8))(uVar8,uVar9);
  (**(code **)(*(int *)pSVar7 + 0x200))(1,1);
  (**(code **)(*(int *)pSVar7 + 0x1fc))(0,0);
  (**(code **)(*(int *)pSVar7 + 0x220))();
  pBVar13 = operator_new(300);
  if (pBVar13 == (Button *)0x0) {
    pBVar13 = (Button *)0x0;
  }
  else {
    BVar19 = (Button)0x0;
    lVar18 = __ftol();
    iVar2 = (int)lVar18;
    lVar18 = __ftol();
    iVar4 = (int)lVar18;
    lVar18 = __ftol();
    iVar6 = (int)lVar18;
    lVar18 = __ftol();
    iVar14 = (int)lVar18;
    pcVar15 = FUN_10030c20(s__Menu_OK_10077d70);
    pBVar13 = FUN_10033020(pBVar13,pcVar15,iVar14,iVar6,iVar4,iVar2,BVar19);
  }
  puVar16 = operator_new(8);
  if (puVar16 == (undefined4 *)0x0) {
    puVar16 = (undefined4 *)0x0;
  }
  else {
    *puVar16 = &PTR_FUN_100605a0;
    puVar16[1] = 0;
  }
  (**(code **)(*(int *)pBVar13 + 0x240))(puVar16);
  (**(code **)(*(int *)pBVar13 + 0x40))(this);
  ExceptionList = puVar20;
  return this;
}

