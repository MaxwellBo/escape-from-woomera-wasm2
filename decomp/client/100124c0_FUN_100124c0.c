
undefined4 __thiscall FUN_100124c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  Label *pLVar2;
  undefined4 uVar3;
  int *piVar4;
  ImagePanel *pIVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iStack_14;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_100578ec;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (*DAT_100a5028)(s_voice_modenable_100779f4,&DAT_10077a04,1);
  (*DAT_100a5028)(s_voice_clientdebug_100779dc,&DAT_100779f0,0);
  (*DAT_100a5034)(s_voice_showbanned_100779c8,FUN_10012260);
  iVar1 = (*DAT_100a510c)();
  if (iVar1 != 0) {
    (*DAT_100a510c)();
    FUN_10011de0((undefined *)(param_1 + 0x177f8));
    *(undefined1 *)(param_1 + 0x18ff8) = 1;
  }
  puVar6 = (undefined4 *)(param_1 + 0x18ffc);
  DAT_100a0444 = param_1;
  *(undefined4 *)(param_1 + 0x17738) = 0;
  *(undefined4 *)(param_1 + 0x1773c) = 0;
  *(undefined4 *)(param_1 + 0x177dc) = 0;
  iStack_14 = 7;
  puVar7 = puVar6;
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  do {
    pLVar2 = operator_new(0xd0);
    uStack_4 = 0;
    if (pLVar2 == (Label *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = vgui::Label::Label(pLVar2,s_);
    }
    uStack_4 = 0xffffffff;
    puVar6[1] = uVar3;
    pLVar2 = operator_new(0xd0);
    uStack_4 = 1;
    if (pLVar2 == (Label *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)vgui::Label::Label(pLVar2,s_);
    }
    uStack_4 = 0xffffffff;
    *puVar6 = piVar4;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x20c))(2);
      (**(code **)(*(int *)*puVar6 + 0x218))(5);
      (**(code **)(*(int *)*puVar6 + 0x21c))(5);
      (**(code **)(*(int *)*puVar6 + 0x40))(puVar6[1]);
    }
    pIVar5 = operator_new(0xc0);
    uStack_4 = 2;
    if (pIVar5 == (ImagePanel *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)vgui::ImagePanel::ImagePanel(pIVar5,(Image *)0x0);
    }
    uStack_4 = 0xffffffff;
    puVar6[2] = piVar4;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x40))(puVar6[1]);
    }
    puVar6[3] = 0xffffffff;
    puVar6 = puVar6 + 4;
    iStack_14 = iStack_14 + -1;
  } while (iStack_14 != 0);
  pIVar5 = operator_new(0xc0);
  uStack_4 = 3;
  if (pIVar5 == (ImagePanel *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = vgui::ImagePanel::ImagePanel(pIVar5,(Image *)0x0);
  }
  *(undefined4 *)(param_1 + 0x177f0) = uVar3;
  uStack_4 = 0xffffffff;
  *(undefined1 *)(param_1 + 0x177d8) = 0;
  *(undefined4 *)(param_1 + 0x17734) = param_2;
  *(undefined4 *)(param_1 + 0x20) = param_3;
  FUN_1001c530(&DAT_100a3a40,param_1);
  *(undefined4 *)(param_1 + 0x10) = 1;
  (*DAT_100a5038)(s_VoiceMask_100779bc,FUN_10012180);
  (*DAT_100a5038)(s_ReqState_100779b0,FUN_100121a0);
  ExceptionList = pvStack_c;
  return 1;
}

