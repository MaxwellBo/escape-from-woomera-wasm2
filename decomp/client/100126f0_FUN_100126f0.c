
undefined4 FUN_100126f0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  char unaff_DI;
  float10 fVar4;
  
  FUN_1004a6a0();
  FUN_100136b0(extraout_ECX);
  piVar1 = (int *)FUN_100348c0(s_gfx_vgui_icntlk_pl_tga_10077b14);
  *(int **)(extraout_ECX + 0x177e8) = piVar1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    vgui::Color::Color((Color *)&stack0xffffffec,0xff,0xff,0xff,1);
    (**(code **)(iVar2 + 0xc))();
  }
  piVar1 = (int *)FUN_100348c0(s_gfx_vgui_icntlk_sv_tga_10077afc);
  *(int **)(extraout_ECX + 0x177ec) = piVar1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    vgui::Color::Color((Color *)&stack0xffffffec,0xff,0xff,0xff,1);
    (**(code **)(iVar2 + 0xc))();
  }
  (**(code **)(**(int **)(extraout_ECX + 0x177f0) + 0x1fc))();
  (**(code **)(**(int **)(extraout_ECX + 0x177f0) + 0x24))();
  piVar1 = (int *)FUN_10034a40(s_gfx_vgui_speaker4_tga_10077ae4);
  *(int **)(extraout_ECX + 0x177e4) = piVar1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    vgui::Color::Color((Color *)&stack0xffffffe4,0xff,0xff,0xff,1);
    (**(code **)(iVar2 + 0xc))();
  }
  piVar1 = (int *)FUN_10034a40(s_gfx_vgui_640_speaker1_tga_10077ac8);
  *(int **)(extraout_ECX + 0x17740) = piVar1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    vgui::Color::Color((Color *)&stack0xffffffe4,0xff,0xff,0xff,1);
    (**(code **)(iVar2 + 0xc))();
  }
  piVar1 = (int *)FUN_10034a40(s_gfx_vgui_640_speaker2_tga_10077aac);
  *(int **)(extraout_ECX + 0x17744) = piVar1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    vgui::Color::Color((Color *)&stack0xffffffe4,0xff,0xff,0xff,1);
    (**(code **)(iVar2 + 0xc))();
  }
  piVar1 = (int *)FUN_10034a40(s_gfx_vgui_640_speaker3_tga_10077a90);
  *(int **)(extraout_ECX + 0x17748) = piVar1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    vgui::Color::Color((Color *)&stack0xffffffe4,0xff,0xff,0xff,1);
    (**(code **)(iVar2 + 0xc))();
  }
  piVar1 = (int *)FUN_10034a40(s_gfx_vgui_640_speaker4_tga_10077a74);
  *(int **)(extraout_ECX + 0x1774c) = piVar1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    vgui::Color::Color((Color *)&stack0xffffffe4,0xff,0xff,0xff,1);
    (**(code **)(iVar2 + 0xc))();
  }
  piVar1 = (int *)FUN_100348c0(s_gfx_vgui_icntlk_squelch_tga_10077a58);
  *(int **)(extraout_ECX + 0x17750) = piVar1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    vgui::Color::Color((Color *)&stack0xffffffe4,0xff,0xff,0xff,1);
    (**(code **)(iVar2 + 0xc))();
  }
  piVar1 = (int *)FUN_100348c0(s_gfx_vgui_640_voiceblocked_tga_10077a38);
  *(int **)(extraout_ECX + 0x17754) = piVar1;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    vgui::Color::Color((Color *)&stack0xffffffe4,0xff,0xff,0xff,1);
    (**(code **)(iVar2 + 0xc))();
  }
  *(undefined4 *)(extraout_ECX + 0x177e0) = 0x42340000;
  iVar2 = (*DAT_100a512c)();
  if (iVar2 != 0) {
    (*DAT_100a5130)();
    if (('/' < unaff_DI) && (unaff_DI < ':')) {
      fVar4 = FUN_1004a640(extraout_ECX_00,&stack0xfffffff8);
      *(float *)(extraout_ECX + 0x177e0) = (float)fVar4;
    }
    (*DAT_100a5134)();
  }
  uVar3 = (*DAT_100a4ff0)();
  *(undefined4 *)(extraout_ECX + 0x177dc) = uVar3;
  return 1;
}

