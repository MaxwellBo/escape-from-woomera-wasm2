
ScrollPanel * __thiscall FUN_100337a0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  ScrollBar *pSVar1;
  void *pvVar2;
  Button *pBVar3;
  Slider *pSVar4;
  int unaff_retaddr;
  int iVar5;
  void *pvStack_c;
  code *pcStack_8;
  Slider *local_4;
  
  local_4 = (Slider *)0xffffffff;
  pcStack_8 = FUN_10057ae2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  vgui::ScrollPanel::ScrollPanel(this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = &PTR_setPos_1006198c;
  pSVar1 = vgui::ScrollPanel::getVerticalScrollBar(this);
  pvVar2 = operator_new(0x130);
  local_4 = (Slider *)0x0;
  if (pvVar2 == (void *)0x0) {
    pBVar3 = (Button *)0x0;
  }
  else {
    pBVar3 = FUN_10033590(pvVar2,0,s_,0,0,0x10,0x10);
  }
  iVar5 = 0;
  local_4 = (Slider *)0xffffffff;
  (**(code **)(*(int *)pSVar1 + 0x21c))(pBVar3);
  pvVar2 = operator_new(0x130);
  pvStack_c = (void *)0x1;
  if (pvVar2 == (void *)0x0) {
    pBVar3 = (Button *)0x0;
  }
  else {
    pBVar3 = FUN_10033590(pvVar2,1,s_,0,0,0x10,0x10);
  }
  pvStack_c = (void *)0xffffffff;
  (**(code **)(*(int *)pSVar1 + 0x21c))(pBVar3,1);
  pSVar4 = operator_new(0xfc);
  local_4 = pSVar4;
  if (pSVar4 == (Slider *)0x0) {
    pSVar4 = (Slider *)0x0;
  }
  else {
    vgui::Slider::Slider(pSVar4,0,param_3 + -1,param_3,unaff_retaddr + param_3 * -2 + 2,true);
    *(undefined ***)pSVar4 = &PTR_setPos_1006174c;
  }
  (**(code **)(*(int *)pSVar1 + 0x224))(pSVar4);
  (**(code **)(*(int *)pSVar1 + 0xd8))(0);
  (**(code **)(*(int *)pSVar1 + 0xdc))(0);
  (**(code **)(*(int *)pSVar1 + 0xe0))(0);
  pSVar1 = vgui::ScrollPanel::getHorizontalScrollBar(this);
  pvVar2 = operator_new(0x130);
  if (pvVar2 == (void *)0x0) {
    pBVar3 = (Button *)0x0;
  }
  else {
    pBVar3 = FUN_10033590(pvVar2,2,s_,0,0,0x10,0x10);
  }
  (**(code **)(*(int *)pSVar1 + 0x21c))(pBVar3,0);
  pvVar2 = operator_new(0x130);
  if (pvVar2 == (void *)0x0) {
    pBVar3 = (Button *)0x0;
  }
  else {
    pBVar3 = FUN_10033590(pvVar2,3,s_,0,0,0x10,0x10);
  }
  (**(code **)(*(int *)pSVar1 + 0x21c))(pBVar3,1);
  pSVar4 = operator_new(0xfc);
  if (pSVar4 == (Slider *)0x0) {
    pSVar4 = (Slider *)0x0;
  }
  else {
    vgui::Slider::Slider(pSVar4,iVar5,0,param_3 + iVar5 * -2,iVar5,false);
    *(undefined ***)pSVar4 = &PTR_setPos_1006174c;
  }
  (**(code **)(*(int *)pSVar1 + 0x224))(pSVar4);
  (**(code **)(*(int *)pSVar1 + 0xd8))(0);
  (**(code **)(*(int *)pSVar1 + 0xdc))(0);
  (**(code **)(*(int *)pSVar1 + 0xe0))(0);
  ExceptionList = pBVar3;
  return this;
}

