
Panel * __thiscall FUN_10037fb0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  HeaderPanel *this_00;
  int *piVar2;
  Label *pLVar3;
  Label *pLVar4;
  TablePanel *this_01;
  undefined4 uVar5;
  undefined4 *puVar6;
  Button *pBVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  Label *pLVar11;
  undefined4 *puVar12;
  char *pcVar13;
  char *pcVar14;
  Label *pLVar15;
  int *piVar16;
  int *piVar17;
  undefined4 *puVar18;
  longlong lVar19;
  longlong lVar20;
  void *pvVar21;
  int aiStack_98 [2];
  int iStack_70;
  int *piStack_6c;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_10057d34;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  vgui::Panel::Panel(this,param_1,param_2,param_3,param_4);
  *(undefined4 *)((int)this + 0xbc) = 100;
  *(undefined ***)this = &PTR_setPos_10062e44;
  this_00 = operator_new(0xf8);
  local_4 = 0;
  if (this_00 == (HeaderPanel *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    lVar19 = __ftol();
    piVar2 = (int *)vgui::HeaderPanel::HeaderPanel(this_00,0,0,param_3,(int)lVar19);
  }
  *(int **)((int)this + 0xc0) = piVar2;
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0x40))();
  (**(code **)(**(int **)((int)this + 0xc0) + 0x120))();
  (**(code **)(**(int **)((int)this + 0xc0) + 300))();
  pLVar3 = operator_new(0x114);
  if (pLVar3 != (Label *)0x0) {
    vgui::Label::Label(pLVar3,s_Address_1007a020);
    *(undefined4 *)(pLVar3 + 0x110) = 0;
    uVar8 = 0xffffffff;
    *(undefined ***)pLVar3 = &PTR_setPos_10062c18;
    pcVar13 = s_address_10078a0c;
    do {
      pcVar14 = pcVar13;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar14 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar14;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pLVar4 = (Label *)(pcVar14 + -uVar8);
    pLVar11 = pLVar3 + 0xd0;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pLVar11 = *(undefined4 *)pLVar4;
      pLVar4 = pLVar4 + 4;
      pLVar11 = pLVar11 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pLVar11 = *pLVar4;
      pLVar4 = pLVar4 + 1;
      pLVar11 = pLVar11 + 1;
    }
    vgui::Label::setContentAlignment(pLVar3,3);
    vgui::Label::setFgColor(pLVar3,0xff,0,0,0);
    vgui::Panel::setBgColor((Panel *)pLVar3,0x78,0x4b,0x20,200);
    vgui::Label::setFont(pLVar3,2);
  }
  pLVar3 = operator_new(0x114);
  if (pLVar3 == (Label *)0x0) {
    pLVar3 = (Label *)0x0;
  }
  else {
    vgui::Label::Label(pLVar3,s_Server_1007a018);
    *(undefined4 *)(pLVar3 + 0x110) = 0;
    uVar8 = 0xffffffff;
    *(undefined ***)pLVar3 = &PTR_setPos_10062c18;
    pcVar13 = s_hostname_10078a18;
    do {
      pcVar14 = pcVar13;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar14 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar14;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pLVar4 = (Label *)(pcVar14 + -uVar8);
    pLVar11 = pLVar3 + 0xd0;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pLVar11 = *(undefined4 *)pLVar4;
      pLVar4 = pLVar4 + 4;
      pLVar11 = pLVar11 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pLVar11 = *pLVar4;
      pLVar4 = pLVar4 + 1;
      pLVar11 = pLVar11 + 1;
    }
    vgui::Label::setContentAlignment(pLVar3,3);
    vgui::Label::setFgColor(pLVar3,0xff,0,0,0);
    vgui::Panel::setBgColor((Panel *)pLVar3,0x78,0x4b,0x20,200);
    vgui::Label::setFont(pLVar3,2);
  }
  pLVar4 = operator_new(0x114);
  if (pLVar4 != (Label *)0x0) {
    vgui::Label::Label(pLVar4,&DAT_1007a014);
    *(undefined4 *)(pLVar4 + 0x110) = 0;
    uVar8 = 0xffffffff;
    *(undefined ***)pLVar4 = &PTR_setPos_10062c18;
    pcVar13 = &DAT_1007a010;
    do {
      pcVar14 = pcVar13;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar14 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar14;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pLVar11 = (Label *)(pcVar14 + -uVar8);
    pLVar15 = pLVar4 + 0xd0;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pLVar15 = *(undefined4 *)pLVar11;
      pLVar11 = pLVar11 + 4;
      pLVar15 = pLVar15 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pLVar15 = *pLVar11;
      pLVar11 = pLVar11 + 1;
      pLVar15 = pLVar15 + 1;
    }
    vgui::Label::setContentAlignment(pLVar4,3);
    vgui::Label::setFgColor(pLVar4,0xff,0,0,0);
    vgui::Panel::setBgColor((Panel *)pLVar4,0x78,0x4b,0x20,200);
    vgui::Label::setFont(pLVar4,2);
  }
  pLVar4 = operator_new(0x114);
  if (pLVar4 != (Label *)0x0) {
    vgui::Label::Label(pLVar4,s_Current_1007a008);
    *(undefined4 *)(pLVar4 + 0x110) = 0;
    uVar8 = 0xffffffff;
    *(undefined ***)pLVar4 = &PTR_setPos_10062c18;
    pcVar13 = s_current_1007a000;
    do {
      pcVar14 = pcVar13;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar14 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar14;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pLVar11 = (Label *)(pcVar14 + -uVar8);
    pLVar15 = pLVar4 + 0xd0;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pLVar15 = *(undefined4 *)pLVar11;
      pLVar11 = pLVar11 + 4;
      pLVar15 = pLVar15 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pLVar15 = *pLVar11;
      pLVar11 = pLVar11 + 1;
      pLVar15 = pLVar15 + 1;
    }
    vgui::Label::setContentAlignment(pLVar4,3);
    vgui::Label::setFgColor(pLVar4,0xff,0,0,0);
    vgui::Panel::setBgColor((Panel *)pLVar4,0x78,0x4b,0x20,200);
    vgui::Label::setFont(pLVar4,2);
  }
  pLVar4 = operator_new(0x114);
  if (pLVar4 != (Label *)0x0) {
    vgui::Label::Label(pLVar4,s_Latency_10079ff8);
    *(undefined4 *)(pLVar4 + 0x110) = 0;
    uVar8 = 0xffffffff;
    *(undefined ***)pLVar4 = &PTR_setPos_10062c18;
    pcVar13 = &DAT_10078a04;
    do {
      pcVar14 = pcVar13;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar14 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar14;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pLVar11 = (Label *)(pcVar14 + -uVar8);
    pLVar15 = pLVar4 + 0xd0;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pLVar15 = *(undefined4 *)pLVar11;
      pLVar11 = pLVar11 + 4;
      pLVar15 = pLVar15 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pLVar15 = *pLVar11;
      pLVar11 = pLVar11 + 1;
      pLVar15 = pLVar15 + 1;
    }
    vgui::Label::setContentAlignment(pLVar4,3);
    vgui::Label::setFgColor(pLVar4,0xff,0,0,0);
    vgui::Panel::setBgColor((Panel *)pLVar4,0x78,0x4b,0x20,200);
    vgui::Label::setFont(pLVar4,2);
  }
  iVar10 = 5;
  do {
    (**(code **)(**(int **)((int)this + 0xc0) + 0x1fc))();
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  iVar10 = **(int **)((int)this + 0xc0);
  __ftol();
  (**(code **)(iVar10 + 0x200))();
  iVar10 = **(int **)((int)this + 0xc0);
  __ftol();
  (**(code **)(iVar10 + 0x200))();
  iVar10 = **(int **)((int)this + 0xc0);
  __ftol();
  (**(code **)(iVar10 + 0x200))();
  iVar10 = **(int **)((int)this + 0xc0);
  __ftol();
  (**(code **)(iVar10 + 0x200))();
  iVar10 = **(int **)((int)this + 0xc0);
  __ftol();
  (**(code **)(iVar10 + 0x200))();
  this_01 = operator_new(0x10c);
  if (this_01 == (TablePanel *)0x0) {
    this_01 = (TablePanel *)0x0;
  }
  else {
    lVar19 = __ftol();
    lVar20 = __ftol();
    aiStack_98[1] = 0x100384fd;
    vgui::TablePanel::TablePanel(this_01,0,(int)lVar20,(int)pLVar3,(int)lVar19,5);
    *(undefined ***)this_01 = &PTR_setPos_100629bc;
    pLVar3 = operator_new(0xd0);
    if (pLVar3 == (Label *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = vgui::Label::Label(pLVar3,s_,0,0);
    }
    *(undefined4 *)(this_01 + 0x104) = uVar5;
    *(undefined4 *)(this_01 + 0x108) = 0;
  }
  *(TablePanel **)((int)this + 0xc4) = this_01;
  (**(code **)(*(int *)this_01 + 0x40))();
  (**(code **)(**(int **)((int)this + 0xc4) + 0x21c))();
  aiStack_98[1] = 100;
  aiStack_98[0] = 0x10038582;
  (**(code **)(**(int **)((int)this + 0xc4) + 0x120))();
  aiStack_98[0] = 100;
  pvVar21 = (void *)0x0;
  (**(code **)(**(int **)((int)this + 0xc4) + 300))(0,0,0);
  puVar6 = operator_new(8);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    uVar5 = *(undefined4 *)((int)this + 0xc4);
    *puVar6 = &PTR_FUN_10062990;
    puVar6[1] = uVar5;
  }
  (**(code **)(**(int **)((int)this + 0xc4) + 0x70))(puVar6);
  piStack_6c = aiStack_98;
  iStack_70 = 5;
  do {
    uVar8 = 0xffffffff;
    piVar2 = (int *)*piStack_6c;
    piVar2[0x44] = *(int *)((int)this + 0xc4);
    puVar6 = operator_new(0x48);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6[1] = piVar2[0x44];
      *puVar6 = &PTR_FUN_10062964;
      piVar16 = piVar2 + 0x34;
      do {
        piVar17 = piVar16;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        piVar17 = (int *)((int)piVar16 + 1);
        iVar10 = *piVar16;
        piVar16 = piVar17;
      } while ((char)iVar10 != '\0');
      uVar8 = ~uVar8;
      puVar12 = (undefined4 *)((int)piVar17 - uVar8);
      puVar18 = puVar6 + 2;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar18 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar18 = puVar18 + 1;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar18 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        puVar18 = (undefined4 *)((int)puVar18 + 1);
      }
    }
    (**(code **)(*piVar2 + 0x70))(puVar6);
    piStack_6c = piStack_6c + 1;
    iStack_70 = iStack_70 + -1;
    if (iStack_70 == 0) {
      lVar19 = __ftol();
      iVar10 = (int)lVar19;
      pBVar7 = operator_new(300);
      if (pBVar7 == (Button *)0x0) {
        pBVar7 = (Button *)0x0;
      }
      else {
        pBVar7 = FUN_10033020(pBVar7,s_Connect_10079ff0,10,iVar10,0x50,0xf,(Button)0x0);
      }
      *(Button **)((int)this + 200) = pBVar7;
      (**(code **)(*(int *)pBVar7 + 0x40))(this);
      puVar6 = operator_new(8);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        uVar5 = *(undefined4 *)((int)this + 0xc4);
        *puVar6 = &PTR_LAB_10062960;
        puVar6[1] = uVar5;
      }
      (**(code **)(**(int **)((int)this + 200) + 0x240))(puVar6);
      pBVar7 = operator_new(300);
      if (pBVar7 == (Button *)0x0) {
        pBVar7 = (Button *)0x0;
      }
      else {
        pBVar7 = FUN_10033020(pBVar7,s_Refresh_10079fe8,0x5a,iVar10,0x50,0xf,(Button)0x0);
      }
      *(Button **)((int)this + 0xcc) = pBVar7;
      (**(code **)(*(int *)pBVar7 + 0x40))(this);
      puVar6 = operator_new(8);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        uVar5 = *(undefined4 *)((int)this + 0xc4);
        *puVar6 = &PTR_LAB_1006295c;
        puVar6[1] = uVar5;
      }
      (**(code **)(**(int **)((int)this + 0xcc) + 0x240))(puVar6);
      pBVar7 = operator_new(300);
      if (pBVar7 == (Button *)0x0) {
        pBVar7 = (Button *)0x0;
      }
      else {
        pBVar7 = FUN_10033020(pBVar7,&DAT_10079fe0,0xaa,iVar10,0x50,0xf,(Button)0x0);
      }
      *(Button **)((int)this + 0xd4) = pBVar7;
      (**(code **)(*(int *)pBVar7 + 0x40))(this);
      puVar6 = operator_new(8);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        uVar5 = *(undefined4 *)((int)this + 0xc4);
        *puVar6 = &PTR_LAB_10062958;
        puVar6[1] = uVar5;
      }
      (**(code **)(**(int **)((int)this + 0xd4) + 0x240))(puVar6);
      pBVar7 = operator_new(300);
      aiStack_98[1] = 0xb;
      if (pBVar7 == (Button *)0x0) {
        pBVar7 = (Button *)0x0;
      }
      else {
        pBVar7 = FUN_10033020(pBVar7,s_Close_10079fd8,0xfa,iVar10,0x50,0xf,(Button)0x0);
      }
      *(Button **)((int)this + 0xdc) = pBVar7;
      aiStack_98[1] = 0xffffffff;
      (**(code **)(*(int *)pBVar7 + 0x40))(this);
      puVar6 = operator_new(8);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        uVar5 = *(undefined4 *)((int)this + 0xc4);
        *puVar6 = &PTR_LAB_10062954;
        puVar6[1] = uVar5;
      }
      (**(code **)(**(int **)((int)this + 0xdc) + 0x240))(puVar6);
      vgui::Panel::setPaintBorderEnabled(this,false);
      vgui::Panel::setPaintBackgroundEnabled(this,false);
      vgui::Panel::setPaintEnabled(this,false);
      ExceptionList = pvVar21;
      return this;
    }
  } while( true );
}

