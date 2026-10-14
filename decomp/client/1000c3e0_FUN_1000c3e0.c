
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000c3e0(int *param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  float10 fVar4;
  float10 fVar5;
  undefined1 auStack_6c [4];
  undefined4 uStack_68;
  undefined4 uStack_54;
  undefined *puStack_50;
  undefined *puStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 auStack_28 [3];
  undefined4 auStack_1c [3];
  float afStack_10 [2];
  undefined4 uStack_8;
  
  iVar1 = *(int *)(param_1[0x37] + 4);
  if ((*(int *)(iVar1 + 0x1c0) == 3) && (-0x11 < *(int *)(iVar1 + 0x1c4))) {
    (**(code **)(*param_1 + 0x174))();
    param_1[0x3e] = 0x3e19999a;
    return;
  }
  if (param_1[0x43] < 1) {
    (**(code **)(*param_1 + 0x174))();
    param_1[0x3e] = 0x3e19999a;
    return;
  }
  *(undefined4 *)(param_1[0x37] + 0x314) = 600;
  *(undefined4 *)(param_1[0x37] + 0x31c) = 0x100;
  param_1[0x43] = param_1[0x43] + -1;
  *(uint *)(*(int *)(param_1[0x37] + 4) + 0x118) =
       *(uint *)(*(int *)(param_1[0x37] + 4) + 0x118) | 2;
  CBasePlayerAmmo::DefaultTouch((CBasePlayerAmmo *)param_1[0x37],(CBaseEntity *)0x5);
  (**(code **)(*(int *)param_1[0x37] + 0x214))();
  FUN_10009030(auStack_28);
  bVar2 = FUN_1000a1d0();
  if (bVar2) {
    uStack_40 = 2;
    uStack_44 = 2;
    uStack_48 = 0x46000000;
    FUN_1000bc20(&uStack_54,0x3cd67770,0x3cd67770,0x3cd67770);
    uStack_68 = 0x1000c554;
    FUN_100083d0(&stack0xffffffa0,auStack_28);
    FUN_100083d0(auStack_6c,auStack_1c);
  }
  else {
    uStack_40 = 2;
    uStack_44 = 2;
    uStack_48 = 0x46000000;
    FUN_1000bc20(&uStack_54,0x3d566278,0x3d566278,0x3d566278);
    uStack_68 = 0x1000c4fe;
    FUN_100083d0(&stack0xffffffa0,auStack_28);
    FUN_100083d0(auStack_6c,auStack_1c);
  }
  puVar3 = (undefined4 *)FUN_1000a4e0(afStack_10,1.4013e-45);
  uStack_48 = *puVar3;
  uStack_40 = 0;
  uStack_44 = puVar3[1];
  uStack_8 = puVar3[2];
  puStack_4c = &DAT_1007f110;
  puStack_50 = &DAT_1007f110;
  uStack_54 = 0;
  (*DAT_1007f0bc)();
  if ((param_1[0x43] == 0) && (*(int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4) < 1)) {
    uStack_40 = 0x1000c5eb;
    FUN_10002850();
  }
  fVar4 = FUN_10018f40();
  param_1[0x3e] = (int)(float)(fVar4 + (float10)_DAT_10059ea8);
  fVar4 = FUN_10018f40();
  if ((float10)(float)param_1[0x3e] < fVar4) {
    fVar4 = FUN_10018f40();
    param_1[0x3e] = (int)(float)(fVar4 + (float10)_DAT_10059ea8);
  }
  uStack_40 = 0x1000c63b;
  fVar4 = FUN_10018fb0(*(int *)(param_1[0x37] + 0x308),10.0,0x41700000);
  fVar5 = FUN_10018f40();
  param_1[0x40] = (int)(float)(fVar5 + (float10)(float)fVar4);
  return;
}

