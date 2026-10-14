
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

Panel * __thiscall
FUN_10031730(void *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  Label *pLVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  ScrollPanel *pSVar6;
  LineBorder *pLVar7;
  undefined4 *puVar8;
  Button *pBVar9;
  void *this_00;
  Panel *pPVar10;
  uint uVar11;
  uint uVar12;
  void *pvVar13;
  uint uVar14;
  char *pcVar15;
  TextPanel *this_01;
  uint uVar16;
  int *piVar17;
  int iVar18;
  undefined4 *puVar19;
  int iVar20;
  void *this_02;
  int unaff_EDI;
  longlong lVar21;
  uint uStack_220;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  char *pcVar25;
  uint uVar26;
  Panel *pPVar27;
  void *this_03;
  undefined4 *puVar28;
  undefined4 *puVar29;
  Button BVar30;
  char cVar31;
  void *pvVar32;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  Panel *pPVar33;
  Label *pLVar34;
  undefined4 uStack_164;
  void *pvStack_160;
  uint uStack_15c;
  undefined1 *puStack_158;
  int iStack_154;
  void *local_13c;
  int iStack_138;
  Label *local_134;
  int local_130;
  int local_12c;
  void *local_114;
  undefined4 uStack_b4;
  undefined4 uStack_98;
  undefined4 uStack_6c;
  void *pvStack_68;
  undefined4 uStack_58;
  undefined4 uStack_44;
  undefined4 uStack_30;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_10057a8c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_114 = this;
  vgui::Panel::Panel(this,param_3,param_4,param_5,param_6);
  uVar11 = uStack_164;
  *(undefined4 *)((int)this + 0xbc) = param_1;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 200) = param_2;
  *(undefined ***)this = &PTR_setPos_10060a58;
  uStack_164 = CONCAT13(1,(undefined3)uStack_164);
  if (DAT_100a4dcc < 0x280) {
    uStack_164 = uVar11 & 0xffffff;
  }
  puVar19 = (undefined4 *)((int)this + 0x16c);
  for (iVar20 = 0x300; iVar20 != 0; iVar20 = iVar20 + -1) {
    *puVar19 = 0;
    puVar19 = puVar19 + 1;
  }
  pvVar4 = (void *)(DAT_100a5178 + 0x22c);
  local_13c = pvVar4;
  iVar20 = FUN_10035bb0(pvVar4,(byte *)s_Title_Font_10079c08);
  local_130 = iVar20;
  local_12c = FUN_10035bb0(pvVar4,(byte *)s_Briefing_Text_10079bf8);
  pLVar1 = operator_new(0xd0);
  local_4 = 0;
  local_134 = pLVar1;
  if (pLVar1 == (Label *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    lVar21 = __ftol();
    uVar11 = (uint)lVar21;
    lVar21 = __ftol();
    piVar2 = (int *)vgui::Label::Label(pLVar1,s_,(int)lVar21,uVar11);
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))();
  iStack_154 = *piVar2;
  iVar3 = FUN_10035c30(pvVar4,iVar20);
  (**(code **)(iStack_154 + 0x208))();
  FUN_10035c40(pvVar4,iStack_138,&uStack_15c,&uStack_164,(uint *)&stack0xfffffe98,
               (uint *)&pvStack_160);
  (**(code **)(*piVar2 + 0x120))();
  FUN_10035c80(pvVar4,iStack_138,(uint *)&stack0xfffffe94,(uint *)&stack0xfffffe8c,
               (uint *)&stack0xfffffe88,(uint *)&stack0xfffffe90);
  (**(code **)(*piVar2 + 300))();
  (**(code **)(*piVar2 + 0x21c))();
  iVar20 = *piVar2;
  FUN_10030c20(s__Title_SelectYourClass_10079be0);
  (**(code **)(iVar20 + 0x200))();
  pvVar4 = operator_new(0xd0);
  uStack_30 = 1;
  pvStack_160 = pvVar4;
  if (pvVar4 == (void *)0x0) {
    pSVar6 = (ScrollPanel *)0x0;
  }
  else {
    lVar21 = __ftol();
    iVar20 = (int)lVar21;
    lVar21 = __ftol();
    iVar5 = (int)lVar21;
    lVar21 = __ftol();
    iVar18 = (int)lVar21;
    lVar21 = __ftol();
    pSVar6 = FUN_100337a0(pvVar4,(int)lVar21,iVar18,iVar5,iVar20);
  }
  *(ScrollPanel **)((int)this + 0x168) = pSVar6;
  uStack_30 = 0xffffffff;
  this_00 = this;
  (**(code **)(*(int *)pSVar6 + 0x40))();
  pPVar33 = (Panel *)0x0;
  pvVar4 = (void *)0x0;
  (**(code **)(**(int **)((int)this + 0x168) + 0x200))();
  (**(code **)(**(int **)((int)this + 0x168) + 0x1fc))();
  uStack_1bc = 0x100319f9;
  pLVar7 = operator_new(0x44);
  uStack_44 = 2;
  if (pLVar7 != (LineBorder *)0x0) {
    puStack_158 = (undefined1 *)&uStack_1c0;
    vgui::Color::Color((Color *)&uStack_1c0,0xb2,0x76,0,0);
    vgui::LineBorder::LineBorder(pLVar7);
  }
  uStack_44 = 0xffffffff;
  uStack_1bc = 0x10031a4b;
  (**(code **)(**(int **)((int)this + 0x168) + 0xd4))();
  uStack_1bc = 0x10031a59;
  (**(code **)(**(int **)((int)this + 0x168) + 0x220))();
  uStack_1bc = 0x10031a67;
  piVar2 = (int *)(**(code **)(**(int **)((int)this + 0x168) + 0x204))();
  uStack_1bc = 0x10031a6e;
  uStack_15c = (**(code **)(*piVar2 + 0x18))();
  uStack_1bc = 1;
  uStack_1c0 = 0;
  (**(code **)(**(int **)((int)this + 0x168) + 0x200))();
  pvVar32 = (void *)0x0;
  (**(code **)(**(int **)((int)this + 0x168) + 0x1fc))();
  (**(code **)(**(int **)((int)this + 0x168) + 0x220))();
  puVar19 = (undefined4 *)((int)this + 0x134);
  iVar20 = 0;
  do {
    iVar5 = iVar20;
    lVar21 = __ftol();
    pvVar13 = (void *)lVar21;
    puVar8 = operator_new(0x108);
    this_03 = pvVar32;
    this_02 = pvVar4;
    if (puVar8 != (undefined4 *)0x0) {
      pcVar25 = (&PTR_s_civilian_1007a134)[iVar20];
      *puVar8 = &PTR_FUN_10060a40;
      _strncpy((char *)(puVar8 + 1),pcVar25,0x100);
      *(undefined1 *)((int)puVar8 + 0x103) = 0;
      puVar8[0x41] = 1;
      *puVar8 = &PTR_FUN_10060a3c;
      this_03 = pvVar32;
      this_02 = pvVar4;
    }
    FUN_10030c20((&PTR_s__Civilian_1007a104)[iVar20]);
    FUN_100499f0((undefined1 *)&pvStack_160,&DAT_10078410);
    pBVar9 = operator_new(0x130);
    uStack_58 = 3;
    if (pBVar9 == (Button *)0x0) {
      pBVar9 = (Button *)0x0;
    }
    else {
      lVar21 = __ftol();
      this_00 = (void *)lVar21;
      lVar21 = __ftol();
      iVar3 = (int)lVar21;
      lVar21 = __ftol();
      FUN_10033020(pBVar9,(char *)&pvStack_160,(int)lVar21,(int)pvVar13,iVar3,(int)this_00,
                   (Button)0x1);
      *(undefined ***)pBVar9 = &PTR_setPos_100607d0;
      *(int *)(pBVar9 + 300) = iVar20;
    }
    uStack_58 = 0xffffffff;
    *puVar19 = pBVar9;
    if ((iVar20 < 1) || (9 < iVar20)) {
      FUN_100499f0((undefined1 *)&pvStack_160,&DAT_100779f0);
    }
    else {
      FUN_100499f0((undefined1 *)&pvStack_160,&DAT_100789f4);
    }
    FUN_100331f0((void *)*puVar19,(char)pvStack_160);
    cVar31 = '\0';
    (**(code **)(*(int *)*puVar19 + 0x21c))();
    (**(code **)(*(int *)*puVar19 + 0x240))();
    puVar8 = operator_new(0xc);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      *puVar8 = &PTR_FUN_100607a4;
      puVar8[1] = iVar20;
      puVar8[2] = this;
    }
    (**(code **)(*(int *)*puVar19 + 0x70))();
    pPVar27 = this;
    (**(code **)(*(int *)*puVar19 + 0x40))();
    pPVar10 = operator_new(0xc0);
    pvStack_68 = (void *)0x4;
    if (pPVar10 == (Panel *)0x0) {
      pPVar10 = (Panel *)0x0;
    }
    else {
      lVar21 = __ftol();
      vgui::Panel::Panel(pPVar10,0,0,iVar3,(int)lVar21);
      *(undefined ***)pPVar10 = &PTR_setPos_100605a8;
      *(undefined4 *)(pPVar10 + 0xbc) = 0xff;
    }
    puVar19[-0x18] = pPVar10;
    iVar20 = *(int *)pPVar10;
    pvStack_68 = (void *)0xffffffff;
    uVar11 = (**(code **)(**(int **)((int)this + 0x168) + 0x204))();
    (**(code **)(iVar20 + 0x40))();
    lVar21 = __ftol();
    iVar20 = (int)lVar21;
    if (cVar31 != '\0') {
      lVar21 = __ftol();
      iVar20 = (int)lVar21;
    }
    FUN_100499f0(&stack0xfffffe8c,(byte *)s__Title__s_10079bd4);
    FUN_10030c20(&stack0xfffffe8c);
    pLVar1 = operator_new(0xd0);
    uStack_6c = 5;
    if (pLVar1 == (Label *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      pLVar34 = pLVar1;
      lVar21 = __ftol();
      piVar2 = (int *)vgui::Label::Label(pLVar1,s_,iVar20,(int)lVar21);
      pLVar1 = pLVar34;
    }
    iVar18 = *piVar2;
    uStack_6c = 0xffffffff;
    uVar12 = FUN_10035c30(this_00,unaff_EDI);
    (**(code **)(iVar18 + 0x208))();
    iVar18 = puVar19[-0x18];
    (**(code **)(*piVar2 + 0x40))();
    pvVar4 = this_02;
    FUN_10035c40(this_02,(int)pLVar1,(uint *)&stack0xfffffe3c,(uint *)&stack0xfffffe34,
                 (uint *)&stack0xfffffe30,(uint *)&stack0xfffffe38);
    pvVar32 = this_03;
    (**(code **)(*piVar2 + 0x120))();
    FUN_10035c80(this_02,iVar20,(uint *)&stack0xfffffe2c,(uint *)&stack0xfffffe24,
                 (uint *)&stack0xfffffe20,(uint *)&stack0xfffffe28);
    pPVar10 = pPVar27;
    puVar29 = puVar8;
    (**(code **)(*piVar2 + 300))();
    (**(code **)(*piVar2 + 0x21c))();
    (**(code **)(*piVar2 + 0x200))();
    if ((char)((uint)pPVar27 >> 0x18) != '\0') {
      iVar20 = 0;
      this_02 = pvVar13;
      this = pPVar33;
      do {
        if (iVar20 == 1) {
          pcVar25 = s__sred_10079bcc;
        }
        else {
          pcVar25 = s__sblue_10079bc4;
        }
        FUN_100499f0(&stack0xfffffe60,(byte *)pcVar25);
        pvVar13 = operator_new(0xd4);
        uStack_98 = 6;
        if (pvVar13 == (void *)0x0) {
          pLVar1 = (Label *)0x0;
        }
        else {
          lVar21 = __ftol();
          uVar14 = (uint)lVar21;
          lVar21 = __ftol();
          uStack_220 = 0x10031f26;
          pLVar1 = FUN_100334c0(pvVar13,&stack0xfffffe60,0,0,(int)lVar21,uVar14);
        }
        uStack_98 = 0xffffffff;
        *(Label **)((int)this + (int)(puVar29 + iVar20 * 3) * 4 + 0x16c) = pLVar1;
        (**(code **)(*(int *)pLVar1 + 0x40))();
        if (iVar20 != 1) {
          (**(code **)(*(int *)pLVar1 + 0x24))();
        }
        (**(code **)(*piVar2 + 0x210))();
        puVar28 = *(undefined4 **)pLVar1;
        (*(code *)puVar28[6])();
        __ftol();
        uStack_220 = 0x10031fcb;
        (*(code *)*puVar28)();
        iVar20 = iVar20 + 1;
        pPVar33 = this;
      } while (iVar20 < 2);
    }
    FUN_10030b50(s__Title_CurrentlyOnYourTeam_10079ba8,(char *)((int)this + 0xd70),0x80);
    pLVar1 = operator_new(0xd0);
    uStack_98 = 7;
    if (pLVar1 == (Label *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      lVar21 = __ftol();
      piVar2 = (int *)vgui::Label::Label(pLVar1,s_,uVar11,(int)lVar21);
    }
    puVar19[-0xc] = piVar2;
    uVar11 = puVar19[-0x18];
    uStack_98 = 0xffffffff;
    (**(code **)(*piVar2 + 0x40))();
    uVar26 = 0xff;
    uVar24 = 0;
    uVar23 = 0;
    uVar22 = 0;
    uStack_220 = 0x10032071;
    (**(code **)(*(int *)puVar19[-0xc] + 300))();
    uStack_220 = 3;
    (**(code **)(*(int *)puVar19[-0xc] + 0x21c))();
    iVar20 = *(int *)puVar19[-0xc];
    uVar14 = FUN_10035c30(this_02,(int)pPVar10);
    (**(code **)(iVar20 + 0x208))();
    FUN_100499f0((undefined1 *)&uStack_1bc,(byte *)s_classes_short__s_txt_10079b90);
    pcVar15 = (char *)(*DAT_100a512c)(&uStack_1bc,5);
    pcVar25 = s_Class_Description_not_available__10079b6c;
    if (pcVar15 != (char *)0x0) {
      pcVar25 = pcVar15;
    }
    this_01 = operator_new(0xc0);
    uStack_b4 = 8;
    if (this_01 == (TextPanel *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      lVar21 = __ftol();
      uVar16 = (uint)lVar21;
      lVar21 = __ftol();
      iVar20 = (int)lVar21;
      lVar21 = __ftol();
      piVar2 = (int *)vgui::TextPanel::TextPanel
                                (this_01,pcVar25,(int)pPVar27,(int)lVar21,iVar20,uVar16);
    }
    uVar16 = puVar19[-0x18];
    uStack_b4 = 0xffffffff;
    (**(code **)(*piVar2 + 0x40))();
    iVar20 = *piVar2;
    FUN_10035c30(this_02,uVar12);
    (**(code **)(iVar20 + 0x200))();
    FUN_10035c40(this_03,iVar18,(uint *)&stack0xfffffdf4,(uint *)&stack0xfffffdec,
                 (uint *)&stack0xfffffde8,(uint *)&stack0xfffffdf0);
    (**(code **)(*piVar2 + 0x120))(uVar11,uVar24);
    FUN_10035c80(puVar8,iVar18,(uint *)&stack0xfffffde4,(uint *)&stack0xfffffddc,
                 (uint *)&stack0xfffffdd8,&uStack_220);
    (**(code **)(*piVar2 + 300))(uVar22,uVar14,uVar16,uStack_220);
    piVar17 = (int *)(**(code **)(*piVar2 + 0x208))();
    (**(code **)(*piVar17 + 0x68))(&stack0xfffffe0c,&stack0xfffffe04);
    (**(code **)(*piVar2 + 8))(this_01,puVar8);
    (**(code **)(*piVar2 + 4))(&stack0xfffffdf8,&stack0xfffffdd4);
    iVar20 = uVar23 + uVar24;
    if ((int *)puVar19[0xe] != (int *)0x0) {
      (**(code **)(*(int *)puVar19[0xe] + 4))(&stack0xfffffdf0,&stack0xfffffdcc);
      iVar18 = (**(code **)(*(int *)puVar19[0xe] + 0x1c))();
      if (iVar20 < (int)(iVar18 + uVar23)) {
        iVar20 = (**(code **)(*(int *)puVar19[0xe] + 0x1c))();
        iVar20 = iVar20 + uVar23;
      }
    }
    (**(code **)(*(int *)puVar19[-0x18] + 8))(uVar26 + uVar11,iVar20);
    puVar19 = puVar19 + 1;
    iVar20 = iVar5 + 1;
  } while (iVar20 < 0xb);
  pBVar9 = operator_new(300);
  uStack_58 = 9;
  if (pBVar9 == (Button *)0x0) {
    pBVar9 = (Button *)0x0;
  }
  else {
    BVar30 = (Button)0x0;
    lVar21 = __ftol();
    uVar11 = (uint)lVar21;
    lVar21 = __ftol();
    uVar12 = (uint)lVar21;
    uVar23 = 0;
    lVar21 = __ftol();
    uVar14 = (uint)lVar21;
    pcVar25 = FUN_10030c20(s__Menu_Cancel_10079b5c);
    pBVar9 = FUN_10033020(pBVar9,pcVar25,uVar14,uVar23,uVar12,uVar11,BVar30);
  }
  *(Button **)((int)this + 0x164) = pBVar9;
  uStack_58 = 0xffffffff;
  (**(code **)(*(int *)pBVar9 + 0x40))();
  puVar19 = operator_new(8);
  if (puVar19 != (undefined4 *)0x0) {
    *puVar19 = &PTR_FUN_100605a0;
    puVar19[1] = 0;
  }
  (**(code **)(**(int **)((int)this + 0x164) + 0x240))();
  *(undefined4 *)((int)this + 0xd6c) = 0;
  ExceptionList = pvStack_68;
  return this;
}

