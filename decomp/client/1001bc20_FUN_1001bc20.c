
void __fastcall FUN_1001bc20(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  
  (*DAT_100a5038)(&DAT_10078780,FUN_1001b810);
  (*DAT_100a5038)(s_HUDColor_10078774,FUN_1001b830);
  (*DAT_100a5038)(s_ResetHUD_10078768,FUN_1001b850);
  (*DAT_100a5038)(s_GameMode_1007875c,FUN_1001b910);
  (*DAT_100a5038)(s_InitHUD_10078754,FUN_1001b870);
  (*DAT_100a5038)(s_SetFog_1007874c,FUN_1001b8a0);
  (*DAT_100a5038)(s_SetFOV_10078744,FUN_1001b8d0);
  (*DAT_100a5038)(s_Concuss_1007873c,FUN_1001b8f0);
  FUN_100419e0();
  (*DAT_100a5034)(s__commandmenu_1007872c,FUN_1001b930);
  (*DAT_100a5034)(s__commandmenu_1007871c,FUN_1001b950);
  (*DAT_100a5034)(s_ForceCloseCommandMenu_10078704,FUN_1001b960);
  (*DAT_100a5034)(s_special_100786fc,FUN_1001b940);
  (*DAT_100a5034)(s_togglebrowser_100786ec,FUN_1001b970);
  (*DAT_100a5038)(s_ValClass_100786e0,FUN_1001b980);
  (*DAT_100a5038)(s_TeamNames_100786d4,FUN_1001b9b0);
  (*DAT_100a5038)(s_Feign_100786cc,FUN_1001b9e0);
  (*DAT_100a5038)(s_Detpack_100786c4,FUN_1001ba10);
  (*DAT_100a5038)(&DAT_100786bc,FUN_1001ba70);
  (*DAT_100a5038)(s_BuildSt_100786b4,FUN_1001baa0);
  (*DAT_100a5038)(s_RandomPC_100786a8,FUN_1001bad0);
  (*DAT_100a5038)(s_ServerName_1007869c,FUN_1001bb00);
  (*DAT_100a5038)(s_ScoreInfo_10078690,&LAB_1001bb30);
  (*DAT_100a5038)(s_TeamScore_10078684,&LAB_1001bb60);
  (*DAT_100a5038)(s_TeamInfo_10078678,&LAB_1001bb90);
  (*DAT_100a5038)(s_Spectator_1007866c,&LAB_1001bbc0);
  (*DAT_100a5038)(s_AllowSpec_10078660,&LAB_1001bbf0);
  (*DAT_100a5038)(s_VGUIMenu_10078654,FUN_1001ba40);
  (*DAT_100a5028)(s_hud_classautokill_10078640,&DAT_10077a04,3);
  (*DAT_100a5028)(s_hud_takesshots_10078630,&DAT_100779f0,1);
  param_1[2] = 0;
  param_1[0x16] = 0;
  param_1[0x1b] = 0xffa000;
  (*DAT_100a5028)(s_zoom_sensitivity_ratio_10078614,&DAT_1007862c,0);
  iVar1 = (*DAT_100a5028)(s_default_fov_10078604,&DAT_10078610,0);
  param_1[0x1f] = iVar1;
  iVar1 = (*DAT_100a5028)(s_hud_capturemouse_100785f0,&DAT_10077a04,1);
  param_1[0x19] = iVar1;
  DAT_100a9584 = (*DAT_100a5110)(s_cl_lw_100785e8);
  puVar2 = (undefined *)*param_1;
  param_1[3] = 0;
  if (puVar2 != (undefined *)0x0) {
    do {
      *param_1 = *(int *)(puVar2 + 4);
      FUN_1004ad7e(puVar2);
      puVar2 = (undefined *)*param_1;
    } while (puVar2 != (undefined *)0x0);
    *param_1 = 0;
  }
  param_1[9] = 0x3f800000;
  // Each call is `lea ecx, [esi+off]; call [vtable+4]`. ecx is the subobject.
  (**(code **)(param_1[0x20] + 4))(param_1 + 0x20);
  (**(code **)(param_1[0x2a] + 4))(param_1 + 0x2a);
  (**(code **)(param_1[0x6a] + 4))(param_1 + 0x6a);
  (**(code **)(param_1[0x7c] + 4))(param_1 + 0x7c);
  (**(code **)(param_1[0x70] + 4))(param_1 + 0x70);
  (**(code **)(param_1[0x83] + 4))(param_1 + 0x83);
  (**(code **)(param_1[0x93] + 4))(param_1 + 0x93);
  (**(code **)(param_1[0xcd] + 4))(param_1 + 0xcd);
  (**(code **)(param_1[0x15d] + 4))(param_1 + 0x15d);
  (**(code **)(param_1[0x171] + 4))(param_1 + 0x171);
  (**(code **)(param_1[0x17c] + 4))(param_1 + 0x17c);
  (**(code **)(param_1[0x181] + 4))(param_1 + 0x181);
  piVar3 = (int *)FUN_10012170();
  (**(code **)(*piVar3 + 0x1c))(piVar3,&DAT_100a9580,&DAT_100a5178);
  (**(code **)(param_1[0x1b6] + 4))(param_1 + 0x1b6);
  (**(code **)(param_1[0x163] + 4))(param_1 + 0x163);
  (**(code **)(param_1[0x168] + 4))(param_1 + 0x168);
  FUN_1001f9e0();
  FUN_1001d490(param_1);
  return;
}

