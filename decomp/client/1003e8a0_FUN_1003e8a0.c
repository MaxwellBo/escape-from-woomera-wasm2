
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

Panel * __thiscall
FUN_1003e8a0(void *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  void *this_00;
  int iVar1;
  Label *pLVar2;
  int *piVar3;
  Panel *this_01;
  LineBorder *pLVar4;
  uint uVar5;
  void *this_02;
  uint uVar6;
  ScrollPanel *pSVar7;
  TextPanel *pTVar8;
  uint uVar9;
  uint uVar10;
  undefined *puVar11;
  Button *pBVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined4 uVar16;
  char *pcVar17;
  int iVar18;
  uint unaff_EBX;
  undefined1 *unaff_EDI;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  Button BVar24;
  uint uVar25;
  uint uVar26;
  float fVar27;
  uint auStack_13c [2];
  float fStack_134;
  undefined4 local_130;
  int local_120;
  Label *local_11c;
  int local_118;
  int local_110;
  void *pvStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_a4;
  undefined4 uStack_9c;
  undefined4 uStack_70;
  undefined4 uStack_64;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_100580fc;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  vgui::Panel::Panel(this,param_3,param_4,param_5,param_6);
  *(undefined4 *)((int)this + 0xbc) = param_1;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 200) = param_2;
  *(undefined ***)this = &PTR_setPos_10064ae4;
  this_00 = (void *)(DAT_100a5178 + 0x22c);
  iVar1 = FUN_10035bb0(this_00,(byte *)s_Title_Font_10079c08);
  local_110 = iVar1;
  local_120 = FUN_10035bb0(this_00,(byte *)s_Briefing_Text_10079bf8);
  local_118 = FUN_10035bb0(this_00,(byte *)s_Team_Info_Text_1007a908);
  local_130 = FUN_10035c30(this_00,iVar1);
  pLVar2 = operator_new(0xd0);
  local_4 = 0;
  local_11c = pLVar2;
  if (pLVar2 == (Label *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    lVar19 = __ftol();
    uVar5 = (uint)lVar19;
    lVar19 = __ftol();
    piVar3 = (int *)vgui::Label::Label(pLVar2,s_,(int)lVar19,uVar5);
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar3 + 0x40))();
  (**(code **)(*piVar3 + 0x208))();
  FUN_10035c40(this_00,iVar1,(uint *)&stack0xfffffec0,(uint *)&stack0xfffffebc,auStack_13c,
               (uint *)&fStack_134);
  (**(code **)(*piVar3 + 0x120))();
  fVar27 = fStack_134;
  FUN_10035c80(this_00,iVar1,(uint *)&stack0xfffffeb0,(uint *)&stack0xfffffeac,
               (uint *)&stack0xfffffeb4,(uint *)&stack0xfffffebc);
  (**(code **)(*piVar3 + 300))();
  (**(code **)(*piVar3 + 0x21c))();
  iVar1 = *piVar3;
  FUN_10030c20(s__Title_SelectYourTeam_1007a8f0);
  (**(code **)(iVar1 + 0x200))();
  this_01 = operator_new(0xc0);
  uStack_30 = 1;
  if (this_01 == (Panel *)0x0) {
    this_01 = (Panel *)0x0;
  }
  else {
    lVar19 = __ftol();
    lVar20 = __ftol();
    lVar21 = __ftol();
    lVar22 = __ftol();
    vgui::Panel::Panel(this_01,(int)lVar22,(int)lVar21,(int)lVar20,(int)lVar19);
    *(undefined ***)this_01 = &PTR_setPos_100605a8;
    *(undefined4 *)(this_01 + 0xbc) = 0xff;
  }
  *(Panel **)((int)this + 0xd8) = this_01;
  uStack_30 = 0xffffffff;
  (**(code **)(*(int *)this_01 + 0x40))();
  pLVar4 = operator_new(0x44);
  uStack_34 = 2;
  if (pLVar4 == (LineBorder *)0x0) {
    uVar5 = 0;
  }
  else {
    unaff_EDI = &stack0xfffffe78;
    vgui::Color::Color((Color *)&stack0xfffffe78,0xb2,0x76,0,0);
    uVar5 = vgui::LineBorder::LineBorder(pLVar4);
  }
  uStack_34 = 0xffffffff;
  (**(code **)(**(int **)((int)this + 0xd8) + 0xd4))();
  pLVar2 = operator_new(0xd0);
  uStack_38 = 3;
  if (pLVar2 == (Label *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    lVar19 = __ftol();
    uVar26 = (uint)lVar19;
    lVar19 = __ftol();
    piVar3 = (int *)vgui::Label::Label(pLVar2,s_,(int)lVar19,uVar26);
  }
  *(int **)((int)this + 0xdc) = piVar3;
  uStack_38 = 0xffffffff;
  (**(code **)(*piVar3 + 0x208))();
  (**(code **)(**(int **)((int)this + 0xdc) + 0x40))();
  FUN_10035c40(this_00,(int)unaff_EDI,(uint *)&stack0xfffffe8c,(uint *)&stack0xfffffe88,
               (uint *)&stack0xfffffe90,(uint *)&stack0xfffffe98);
  (**(code **)(**(int **)((int)this + 0xdc) + 0x120))();
  FUN_10035c80(this_00,(int)unaff_EDI,(uint *)&stack0xfffffe7c,(uint *)&stack0xfffffe78,
               (uint *)&stack0xfffffe80,(uint *)&stack0xfffffe88);
  (**(code **)(**(int **)((int)this + 0xdc) + 300))();
  uVar26 = 3;
  (**(code **)(**(int **)((int)this + 0xdc) + 0x21c))();
  this_02 = operator_new(0xd0);
  uStack_64 = 4;
  if (this_02 == (void *)0x0) {
    pSVar7 = (ScrollPanel *)0x0;
  }
  else {
    fVar27 = (float)DAT_100a4dcc * _DAT_1006014c * _DAT_1005a184;
    lVar19 = __ftol();
    uVar6 = (uint)lVar19;
    lVar19 = __ftol();
    iVar1 = (int)lVar19;
    lVar19 = __ftol();
    uVar25 = (uint)lVar19;
    lVar19 = __ftol();
    pSVar7 = FUN_100337a0(this_02,(int)lVar19,uVar25,iVar1,uVar6);
  }
  uVar6 = *(uint *)((int)this + 0xd8);
  *(ScrollPanel **)((int)this + 0xd4) = pSVar7;
  uStack_64 = 0xffffffff;
  (**(code **)(*(int *)pSVar7 + 0x40))();
  uVar25 = 0;
  (**(code **)(**(int **)((int)this + 0xd4) + 0x1fc))();
  pTVar8 = operator_new(0xc0);
  uStack_70 = 5;
  if (pTVar8 == (TextPanel *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    lVar19 = __ftol();
    uVar9 = (uint)lVar19;
    lVar19 = __ftol();
    piVar3 = (int *)vgui::TextPanel::TextPanel(pTVar8,s_,0,0,(int)lVar19,uVar9);
  }
  *(int **)((int)this + 0xe0) = piVar3;
  iVar1 = *piVar3;
  uStack_70 = 0xffffffff;
  uVar9 = (**(code **)(**(int **)((int)this + 0xd4) + 0x204))();
  (**(code **)(iVar1 + 0x40))();
  iVar1 = **(int **)((int)this + 0xe0);
  uVar10 = FUN_10035c30(this_00,(int)fVar27);
  (**(code **)(iVar1 + 0x200))();
  FUN_10035c40(this_00,(int)fVar27,(uint *)&stack0xfffffe54,(uint *)&stack0xfffffe50,
               (uint *)&stack0xfffffe58,(uint *)&stack0xfffffe60);
  (**(code **)(**(int **)((int)this + 0xe0) + 0x120))(uVar26,uVar6,unaff_EBX,uVar5);
  FUN_10035c80(this_00,(int)fVar27,(uint *)&stack0xfffffe44,(uint *)&stack0xfffffe40,
               (uint *)&stack0xfffffe48,(uint *)&stack0xfffffe50);
  (**(code **)(**(int **)((int)this + 0xe0) + 300))(uVar9,uVar10,uVar25,uVar6);
  iVar1 = **(int **)((int)this + 0xe0);
  puVar11 = FUN_10030c20(s__Map_Description_not_available_1007a8d0);
  (**(code **)(iVar1 + 0x1fc))(puVar11);
  iVar1 = 1;
  do {
    iVar18 = iVar1;
    lVar19 = __ftol();
    uVar5 = (uint)lVar19;
    pBVar12 = operator_new(300);
    uStack_9c = 6;
    if (pBVar12 == (Button *)0x0) {
      pBVar12 = (Button *)0x0;
    }
    else {
      BVar24 = (Button)0x1;
      lVar19 = __ftol();
      iVar13 = (int)lVar19;
      lVar19 = __ftol();
      iVar23 = (int)lVar19;
      lVar19 = __ftol();
      pBVar12 = FUN_10033020(pBVar12,s_,(int)lVar19,uVar5,iVar23,iVar13,BVar24);
    }
    *(Button **)((int)this + iVar1 * 4 + 0xfc) = pBVar12;
    uStack_9c = 0xffffffff;
    (**(code **)(*(int *)pBVar12 + 0x40))(this);
    (**(code **)(**(int **)((int)this + iVar1 * 4 + 0xfc) + 0x21c))(3);
    (**(code **)(**(int **)((int)this + iVar1 * 4 + 0xfc) + 0x24))(0);
    if (iVar1 == 5) {
      FUN_100331f0(*(void **)((int)this + 0x110),'5');
      iVar13 = **(int **)((int)this + 0x110);
      puVar11 = FUN_10030c20(s__Team_AutoAssign_1007a690);
      (**(code **)(iVar13 + 0x264))(puVar11);
      (**(code **)(**(int **)((int)this + 0x110) + 0x24))(1);
    }
    FUN_100499f0(&stack0xfffffe50,(byte *)s_jointeam__d_1007a6b0);
    puVar14 = operator_new(0x108);
    if (puVar14 == (undefined4 *)0x0) {
      puVar14 = (undefined4 *)0x0;
    }
    else {
      *puVar14 = &PTR_FUN_10060a40;
      _strncpy((char *)(puVar14 + 1),&stack0xfffffe50,0x100);
      *(undefined1 *)((int)puVar14 + 0x103) = 0;
      puVar14[0x41] = 1;
      *puVar14 = &PTR_FUN_10064834;
    }
    (**(code **)(**(int **)((int)this + iVar1 * 4 + 0xfc) + 0x240))(puVar14);
    puVar14 = operator_new(0xc);
    if (puVar14 == (undefined4 *)0x0) {
      puVar14 = (undefined4 *)0x0;
    }
    else {
      *puVar14 = &PTR_FUN_100607a4;
      puVar14[1] = iVar1;
      puVar14[2] = this;
    }
    (**(code **)(**(int **)((int)this + iVar1 * 4 + 0xfc) + 0x70))(puVar14);
    pTVar8 = operator_new(0xc0);
    uStack_b0 = 7;
    if (pTVar8 == (TextPanel *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      lVar19 = __ftol();
      iVar13 = (int)lVar19;
      lVar19 = __ftol();
      iVar23 = (int)lVar19;
      lVar19 = __ftol();
      iVar15 = (int)lVar19;
      lVar19 = __ftol();
      piVar3 = (int *)vgui::TextPanel::TextPanel(pTVar8,s_,(int)lVar19,iVar15,iVar23,iVar13);
    }
    *(int **)((int)this + iVar1 * 4 + 0xe4) = piVar3;
    uStack_b0 = 0xffffffff;
    (**(code **)(*piVar3 + 0x40))(*(undefined4 *)((int)this + 0xd8));
    iVar13 = **(int **)((int)this + iVar1 * 4 + 0xe4);
    uVar16 = FUN_10035c30(this_00,iVar18);
    (**(code **)(iVar13 + 0x200))(uVar16);
    iVar18 = iVar1 % DAT_1007a098;
    (**(code **)(**(int **)((int)this + iVar1 * 4 + 0xe4) + 0x120))
              ((&DAT_1007a09c)[iVar18 * 3],(&DAT_1007a0a0)[iVar18 * 3],(&DAT_1007a0a4)[iVar18 * 3],0
              );
    (**(code **)(**(int **)((int)this + iVar1 * 4 + 0xe4) + 300))(0,0,0,0xff);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  pBVar12 = operator_new(300);
  uStack_9c = 8;
  if (pBVar12 == (Button *)0x0) {
    pBVar12 = (Button *)0x0;
  }
  else {
    BVar24 = (Button)0x0;
    lVar19 = __ftol();
    iVar1 = (int)lVar19;
    lVar19 = __ftol();
    iVar18 = (int)lVar19;
    iVar23 = 0;
    lVar19 = __ftol();
    iVar13 = (int)lVar19;
    pcVar17 = FUN_10030c20(s__Menu_Cancel_10079b5c);
    pBVar12 = FUN_10033020(pBVar12,pcVar17,iVar13,iVar23,iVar18,iVar1,BVar24);
  }
  *(Button **)((int)this + 0x118) = pBVar12;
  uStack_9c = 0xffffffff;
  (**(code **)(*(int *)pBVar12 + 0x40))(this);
  puVar14 = operator_new(8);
  if (puVar14 == (undefined4 *)0x0) {
    puVar14 = (undefined4 *)0x0;
  }
  else {
    *puVar14 = &PTR_FUN_100605a0;
    puVar14[1] = 0;
  }
  (**(code **)(**(int **)((int)this + 0x118) + 0x240))(puVar14);
  pBVar12 = operator_new(300);
  uStack_a4 = 9;
  if (pBVar12 == (Button *)0x0) {
    pBVar12 = (Button *)0x0;
  }
  else {
    lVar19 = __ftol();
    lVar20 = __ftol();
    lVar21 = __ftol();
    uVar5 = (uint)lVar21;
    pcVar17 = FUN_10030c20(s__Menu_Spectate_1007a674);
    FUN_10033020(pBVar12,pcVar17,uVar5,0,(int)lVar20,(int)lVar19,(Button)0x1);
    *(undefined ***)pBVar12 = &PTR_setPos_100645cc;
  }
  *(Button **)((int)this + 0x11c) = pBVar12;
  uStack_a4 = 0xffffffff;
  (**(code **)(*(int *)pBVar12 + 0x40))(this);
  puVar14 = operator_new(0x108);
  if (puVar14 == (undefined4 *)0x0) {
    puVar14 = (undefined4 *)0x0;
  }
  else {
    *puVar14 = &PTR_FUN_10060a40;
    _strncpy((char *)(puVar14 + 1),s_spectate_1007a668,0x100);
    *(undefined1 *)((int)puVar14 + 0x103) = 0;
    puVar14[0x41] = 1;
  }
  (**(code **)(**(int **)((int)this + 0x11c) + 0x240))(puVar14);
  FUN_100331f0(*(void **)((int)this + 0x11c),'6');
  puVar14 = operator_new(0xc);
  if (puVar14 == (undefined4 *)0x0) {
    puVar14 = (undefined4 *)0x0;
  }
  else {
    *puVar14 = &PTR_FUN_100607a4;
    puVar14[1] = 6;
    puVar14[2] = this;
  }
  (**(code **)(**(int **)((int)this + 0x11c) + 0x70))(puVar14);
  FUN_1003f3e0((int)this);
  ExceptionList = pvStack_b8;
  return this;
}

