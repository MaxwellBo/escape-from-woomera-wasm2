
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10013e00(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined *puVar5;
  float10 fVar6;
  int iVar7;
  undefined4 uStack_80;
  int *piStack_7c;
  int iStack_78;
  int iStack_74;
  undefined1 ***pppuStack_70;
  int *piVar8;
  undefined1 **ppuStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined1 auStack_18 [24];
  
  if (DAT_100a0ea0 == '\0') {
    DAT_100a0ea0 = '\x01';
    param_1[0x36] = DAT_100a4dcc;
    param_1[0x37] = DAT_100a4dd0;
    puVar3 = DAT_100a514c;
    param_1[0x6c] = (int)DAT_100a514c;
    iStack_30 = 0x10013e43;
    (*(code *)*puVar3)();
    iStack_30 = (DAT_100a4dd0 - param_1[0x37]) / 2;
    iStack_34 = (DAT_100a4dcc - param_1[0x36]) / 2;
    iStack_38 = 0x10013e6f;
    (**(code **)*param_1)();
    iStack_38 = param_1[0x37];
    iStack_3c = param_1[0x36];
    puStack_40 = (undefined1 *)0x10013e84;
    (**(code **)(*param_1 + 8))();
    puStack_40 = (undefined1 *)0x28;
    piVar1 = param_1 + 0x6d;
    FUN_10030c20(s__Mic_Volume_10077dd8);
    puStack_4c = (undefined1 *)0x10013ea2;
    FUN_10013b20(piVar1,param_1);
    puStack_40 = (undefined1 *)0x0;
    fVar6 = (float10)(**(code **)(param_1[0x6c] + 0xc))();
    puStack_40 = (undefined1 *)(float)fVar6;
    FUN_10013cb0((int)piVar1);
    puStack_40 = &stack0xffffffd4;
    puStack_4c = auStack_18;
    ppuStack_50 = (undefined1 **)0x10013ed2;
    (**(code **)(*piVar1 + 0x14))();
    ppuStack_50 = (undefined1 **)(puStack_40 + iStack_3c);
    piVar1 = param_1 + 0x116;
    FUN_10030c20(s__Speaker_Volume_10077dc8);
    FUN_10013b20(piVar1,param_1);
    ppuStack_50 = (undefined1 **)0x1;
    fVar6 = (float10)(**(code **)(param_1[0x6c] + 0xc))();
    ppuStack_50 = (undefined1 **)(float)fVar6;
    FUN_10013cb0((int)piVar1);
    ppuStack_50 = &puStack_40;
    piVar8 = &iStack_3c;
    (**(code **)(*piVar1 + 0x14))();
    piVar1 = param_1 + 0x1bf;
    (**(code **)(param_1[0x1bf] + 0x40))();
    FUN_10031460(piVar1,s_gfx_vgui_checked_tga_10077d98,s_gfx_vgui_unchecked_tga_10077db0);
    FUN_10031510(piVar1,(byte *)s_Enable_Voice_In_This_Mod_10077d7c);
    (**(code **)*piVar1)();
    pppuStack_70 = (undefined1 ***)0x10013f76;
    FUN_100314f0(piVar1,0);
    pppuStack_70 = (undefined1 ***)0x10013f81;
    fVar6 = (float10)(*DAT_100a502c)();
    pppuStack_70 = (undefined1 ***)0x10013fa2;
    FUN_10031590(piVar1,fVar6 != (float10)_DAT_10059a18);
    if (param_1 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = param_1 + 0x35;
    }
    pppuStack_70 = (undefined1 ***)0x10013fb8;
    FUN_10031570(piVar1,piVar4);
    iVar2 = param_1[600];
    piVar1 = param_1 + 600;
    pppuStack_70 = (undefined1 ***)0x10013fce;
    FUN_10030c20(s__Menu_OK_10077d70);
    iStack_74 = 0x10013fd9;
    pppuStack_70 = (undefined1 ***)piVar1;
    (**(code **)(iVar2 + 0x200))();
    pppuStack_70 = &ppuStack_50;
    iStack_74 = 0x10013fed;
    (**(code **)(*piVar1 + 0xc))();
    iStack_74 = (param_1[0x37] - (int)&stack0xffffffd4) + -3;
    iStack_78 = (param_1[0x36] - (int)piVar8) / 2;
    piStack_7c = (int *)0x10014015;
    (**(code **)*piVar1)();
    uStack_80 = 0x1001401d;
    piStack_7c = param_1;
    (**(code **)(*piVar1 + 0x40))();
    piVar1 = param_1 + 0x38;
    uStack_80 = 0xff;
    iVar7 = 0;
    (**(code **)(param_1[0x38] + 300))(0,0,0);
    (**(code **)(*piVar1 + 0x120))(0xff,0xff,0xff,0);
    iVar2 = *piVar1;
    puVar5 = FUN_10030c20(s__Voice_Properties_10077d5c);
    (**(code **)(iVar2 + 0x200))(piVar1,puVar5);
    (**(code **)(*piVar1 + 0xc))(&uStack_80,&iStack_74);
    (**(code **)*piVar1)((param_1[0x36] - iVar7) / 2,5);
    (**(code **)(*piVar1 + 0x40))(param_1);
    (**(code **)(*param_1 + 0x24))(1);
    param_1[0x34] = DAT_100a3a64;
  }
  return;
}

