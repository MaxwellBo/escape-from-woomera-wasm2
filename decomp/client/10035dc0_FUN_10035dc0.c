
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

Panel * __thiscall FUN_10035dc0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  Panel *this_00;
  Panel *this_01;
  char *pcVar1;
  int iVar2;
  int iVar3;
  LineBorder *pLVar4;
  Border *pBVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  int unaff_EDI;
  int *this_02;
  longlong lVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 uStack_c4;
  void *pvStack_c0;
  undefined1 *puStack_bc;
  undefined1 *puStack_b8;
  undefined1 *puStack_b4;
  undefined1 *puStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 *puVar14;
  void *pvVar15;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_10057c6b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  vgui::Panel::Panel(this,param_1,param_2,param_3,param_4);
  this_00 = (Panel *)((int)this + 0xc0);
  *(undefined ***)((int)this + 0xbc) = &PTR_FUN_1005e5a8;
  vgui::Panel::Panel(this_00,0,0,10,10);
  *(undefined ***)this_00 = &vgui::Label::_vftable_;
  vgui::Label::init((Label *)this_00,1,s_,true);
  this_01 = (Panel *)((int)this + 400);
  FUN_10033ae0(this_01);
  local_4 = 0;
  uStack_6c = 0x10035e64;
  FUN_1004b7bf((int)this + 0x274,0xe8,8,FUN_100379e0);
  local_4._0_1_ = 1;
  FUN_10034480((Panel *)((int)this + 0x9bc));
  local_4._0_1_ = 2;
  uStack_6c = 0x10035e96;
  FUN_1004b7bf((int)this + 0xd24,0xe4,0x4a,FUN_10033ae0);
  local_4._0_1_ = 3;
  uStack_6c = 0x10035ebb;
  FUN_1004b7bf((int)this + 0x4f0c,0xe8,0x250,FUN_100379e0);
  local_4 = CONCAT31(local_4._1_3_,4);
  vgui::Panel::Panel((Panel *)((int)this + 0x2678c));
  *(undefined ***)((int)this + 0x2678c) = &PTR_setPos_100624c0;
  *(undefined ***)this = &PTR_setPos_100622c4;
  *(undefined ***)((int)this + 0xbc) = &PTR_FUN_10062298;
  pvVar15 = (void *)(DAT_100a5178 + 0x22c);
  iVar2 = FUN_10035bb0(pvVar15,(byte *)s_Scoreboard_Title_Text_10079f34);
  iVar3 = FUN_10035bb0(pvVar15,(byte *)s_Scoreboard_Small_Text_10079f1c);
  iVar2 = FUN_10035c30(pvVar15,iVar2);
  FUN_10035c30(pvVar15,iVar3);
  vgui::Panel::setBgColor(this,0,0,0,0x60);
  *(undefined4 *)((int)this + 0x9b4) = 0;
  *(undefined4 *)((int)this + 0x9b8) = 0xffffffff;
  (**(code **)(*(int *)this_00 + 0x208))();
  (**(code **)(*(int *)this_00 + 0x200))();
  uStack_6c = 0x10035f87;
  (**(code **)(*(int *)this_00 + 300))();
  uStack_6c = 3;
  uStack_70 = 0x10035f93;
  (**(code **)(*(int *)this_00 + 0x124))();
  uStack_70 = 3;
  (**(code **)(*(int *)this_00 + 0x21c))();
  uStack_78 = 0x10035fa6;
  pLVar4 = operator_new(0x44);
  if (pLVar4 == (LineBorder *)0x0) {
    pBVar5 = (Border *)0x0;
  }
  else {
    vgui::Color::Color((Color *)&uStack_7c,0x3c,0x3c,0x3c,0x80);
    pBVar5 = (Border *)vgui::LineBorder::LineBorder(pLVar4);
  }
  uStack_78 = 0x10035fe9;
  vgui::Panel::setBorder(this,pBVar5);
  uStack_78 = 0x10035ff2;
  vgui::Panel::setPaintBorderEnabled(this,true);
  if (0x27f < DAT_100a4dcc) {
    __ftol();
  }
  iVar3 = *(int *)this_00;
  __ftol();
  uStack_7c = 4;
  (**(code **)(iVar3 + 0x10))();
  (**(code **)(*(int *)this_00 + 0x220))();
  (**(code **)(*(int *)this_00 + 0x40))();
  FUN_10033b30(this_01,8,1);
  FUN_10033ce0(this_01,0,0);
  iVar3 = 0;
  do {
    pcVar1 = (char *)(&DAT_10079e98)[iVar3 * 3];
    if (pcVar1 != (char *)0x0) {
      if (*pcVar1 == '#') {
        iVar6 = *(int *)((int)this + iVar3 * 0xe8 + 0x274);
        FUN_10030c20(pcVar1);
        (**(code **)(iVar6 + 0x22c))();
      }
      else if (pcVar1 != (char *)0x0) {
        (**(code **)(*(int *)((int)this + iVar3 * 0xe8 + 0x274) + 0x22c))();
      }
    }
    iVar6 = (&DAT_10079e9c)[iVar3 * 3];
    if (DAT_100a4dcc < 0x280) {
      if (DAT_100a4dcc == 400) {
        if (iVar3 == 1) {
          iVar6 = iVar6 + -0x1c;
        }
        else if (iVar3 == 0) {
          iVar6 = iVar6 + -8;
        }
      }
    }
    else {
      lVar11 = __ftol();
      iVar6 = (int)lVar11;
    }
    FUN_10033d30(this_01,iVar3,iVar6);
    piVar10 = (int *)((int)this + iVar3 * 0xe8 + 0x274);
    FUN_10033c90(this_01,iVar3,0,piVar10);
    (**(code **)(*piVar10 + 300))();
    puVar14 = (undefined1 *)0xff;
    uStack_a4 = 0;
    uStack_a8 = 0;
    uStack_ac = 0x10036189;
    (**(code **)(*piVar10 + 300))();
    uStack_ac = 3;
    puStack_b0 = (undefined1 *)0x10036195;
    (**(code **)(*piVar10 + 0x124))();
    puStack_b0 = puVar14;
    puStack_b4 = (undefined1 *)0x100361a4;
    (**(code **)(*piVar10 + 0x208))();
    puStack_b4 = *(undefined1 **)(&DAT_10079ea0 + unaff_EDI);
    puStack_b8 = (undefined1 *)0x100361b9;
    (**(code **)(*piVar10 + 0x21c))();
    puStack_b8 = (undefined1 *)0xc;
    if (0x1df < DAT_100a4dd0) {
      puStack_b8 = (undefined1 *)0x100361e3;
      lVar11 = __ftol();
      puStack_b8 = (undefined1 *)lVar11;
    }
    puStack_bc = (undefined1 *)0x32;
    pvStack_c0 = (void *)0x100361ed;
    (**(code **)(*piVar10 + 8))();
    iVar3 = iVar3 + 1;
  } while (iVar3 < 8);
  uStack_a4 = 0x10036216;
  FUN_10033e80(this_01,6,0,(undefined4 *)&stack0xffffff8c,(undefined4 *)&stack0xffffffb0,&uStack_70,
               (undefined4 *)&stack0xffffffac);
  lVar11 = __ftol();
  FUN_10033d30(this_01,7,(int)lVar11);
  FUN_10033e50(this_01);
  iVar3 = *(int *)this_01;
  iVar6 = FUN_10033db0(this_01,0);
  lVar11 = __ftol();
  uVar7 = (undefined4)lVar11;
  lVar11 = __ftol();
  uVar8 = (undefined4)lVar11;
  lVar11 = __ftol();
  uVar12 = (undefined4)lVar11;
  (**(code **)(iVar3 + 0x10))();
  pvVar15 = this;
  (**(code **)(*(int *)this_01 + 0x40))();
  iVar3 = 0xff;
  uStack_a4 = 0;
  uStack_a8 = 0;
  uStack_ac = 0;
  puStack_b0 = (undefined1 *)0x100362d5;
  (**(code **)(*(int *)this_01 + 300))();
  puStack_b0 = &stack0xffffff74;
  puStack_b4 = &stack0xffffff78;
  puStack_b8 = &stack0xffffff70;
  puStack_bc = &stack0xffffff7c;
  pvStack_c0 = (void *)0x100362f1;
  uStack_c4 = uVar12;
  (**(code **)(*(int *)this_01 + 0x14))();
  pvStack_c0 = (void *)(((iVar2 - iVar3) - (int)pvVar15) + -6);
  (**(code **)(*(int *)((int)this + 0x9bc) + 0x10))(uVar8,iVar3 + (int)pvVar15);
  uVar12 = 0;
  (**(code **)(*(int *)((int)this + 0x9bc) + 300))(0,0,0,0xff);
  (**(code **)(*(int *)((int)this + 0x9bc) + 0x40))(this);
  piVar10 = (int *)((int)this + 0x4f0c);
  iVar2 = 0;
  this_02 = (int *)((int)this + 0xd24);
  do {
    FUN_10033b30(this_02,8,1);
    iVar3 = 0;
    piVar13 = piVar10;
    do {
      (**(code **)(*piVar10 + 0x220))(0);
      piVar10[0x35] = iVar6;
      (**(code **)(*piVar10 + 0x70))(-(uint)(this != (void *)0x0) & (int)this + 0xbcU);
      FUN_10033c90(this_02,iVar3,0,piVar10);
      piVar10 = piVar10 + 0x10c4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 8);
    (**(code **)(*this_02 + 300))(0,0,0,0xff);
    FUN_10033ce0(this_02,0,0);
    FUN_10033ef0(this_02,(int)this_01);
    FUN_10033e50(this_02);
    (**(code **)(*this_02 + 0x14))(&uStack_ac,&puStack_b0,&uStack_c4,&puStack_b4);
    iVar3 = *this_02;
    uStack_a4 = uVar12;
    iVar9 = FUN_10033fe0((int)this_02);
    (**(code **)(iVar3 + 8))(uStack_a4,iVar9);
    FUN_10033f50(this_02);
    FUN_100345f0((void *)((int)this + 0x9bc),this_02);
    iVar2 = iVar2 + 1;
    this_02 = this_02 + 0x39;
    piVar10 = piVar13 + 0x3a;
  } while (iVar2 < 0x4a);
  piVar10 = (int *)((int)this + 0x2678c);
  (**(code **)(*(int *)((int)this + 0x2678c) + 300))(0,0,0,0xff);
  (**(code **)(*piVar10 + 0x40))(this);
  (**(code **)(*piVar10 + 0x10))(0,0,uVar8,uVar7);
  (**(code **)(*piVar10 + 0x70))(-(uint)(this != (void *)0x0) & (int)this + 0xbcU);
  FUN_100364d0((int)this);
  ExceptionList = pvStack_c0;
  return this;
}

