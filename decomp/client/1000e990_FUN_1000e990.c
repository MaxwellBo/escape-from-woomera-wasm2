
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000e990(int *param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  float10 fVar4;
  float fVar5;
  undefined1 auStack_68 [4];
  undefined4 uStack_64;
  undefined4 uStack_50;
  undefined *puStack_4c;
  undefined *puStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char *pcStack_38;
  undefined4 auStack_1c [3];
  float afStack_10 [2];
  undefined4 uStack_8;
  
  iVar1 = *(int *)(param_1[0x37] + 4);
  if ((*(int *)(iVar1 + 0x1c0) == 3) && (-0x11 < *(int *)(iVar1 + 0x1c4))) {
    (**(code **)(*param_1 + 0x174))();
    fVar4 = FUN_10018f40();
    param_1[0x3e] = (int)(float)(fVar4 + (float10)_DAT_1005acd8);
    return;
  }
  if (param_1[0x43] < 1) {
    (**(code **)(*param_1 + 0x18c))();
    if (param_1[0x43] != 0) {
      return;
    }
    (**(code **)(*param_1 + 0x174))();
    return;
  }
  *(undefined4 *)(param_1[0x37] + 0x314) = 1000;
  *(undefined4 *)(param_1[0x37] + 0x31c) = 0x100;
  param_1[0x43] = param_1[0x43] + -1;
  *(uint *)(*(int *)(param_1[0x37] + 4) + 0x118) =
       *(uint *)(*(int *)(param_1[0x37] + 4) + 0x118) | 2;
  (**(code **)(*(int *)param_1[0x37] + 0x214))();
  pcStack_38 = (char *)0x1000ea69;
  FUN_10009030((undefined4 *)&stack0xffffffd8);
  bVar2 = FUN_1000a1d0();
  pcStack_38 = (char *)0x0;
  uStack_3c = 0;
  uStack_40 = 4;
  uStack_44 = 0x45000000;
  if (bVar2) {
    FUN_1000bc20(&uStack_50,0x3db280f1,0x3d32aae3,0);
    uStack_64 = 0x1000eab3;
    FUN_100083d0(&stack0xffffffa4,(undefined4 *)&stack0xffffffd8);
    FUN_100083d0(auStack_68,auStack_1c);
    fVar5 = 5.60519e-45;
  }
  else {
    FUN_1000bc20(&uStack_50,0x3db280f1,0x3db280f1,0x3db280f1);
    uStack_64 = 0x1000eaf2;
    FUN_100083d0(&stack0xffffffa4,(undefined4 *)&stack0xffffffd8);
    FUN_100083d0(auStack_68,auStack_1c);
    fVar5 = 8.40779e-45;
  }
  puVar3 = (undefined4 *)FUN_1000a4e0(afStack_10,fVar5);
  pcStack_38 = (char *)0x0;
  uStack_44 = *puVar3;
  uStack_3c = 0;
  uStack_40 = puVar3[1];
  uStack_8 = puVar3[2];
  puStack_48 = &DAT_1007f110;
  puStack_4c = &DAT_1007f110;
  uStack_50 = 0;
  (*DAT_1007f0bc)();
  if (param_1[0x43] == 0) {
    if (*(int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4) < 1) {
      pcStack_38 = s__HEV_AMO0_100761e0;
      uStack_3c = 0x1000eb89;
      FUN_10002850();
    }
    if (param_1[0x43] == 0) goto LAB_1000eba6;
  }
  param_1[0x3c] = (int)(*DAT_1007f7f8 + (float)_DAT_100599f0);
LAB_1000eba6:
  fVar4 = FUN_10018f40();
  param_1[0x3e] = (int)(float)(fVar4 + (float10)_DAT_10059a00);
  fVar4 = FUN_10018f40();
  param_1[0x3f] = (int)(float)(fVar4 + (float10)_DAT_10059a00);
  if (param_1[0x43] == 0) {
    fVar4 = FUN_10018f40();
    fVar4 = fVar4 + (float10)_DAT_10059a00;
  }
  else {
    fVar4 = FUN_10018f40();
    fVar4 = fVar4 + (float10)_DAT_10059a08;
  }
  param_1[0x40] = (int)(float)fVar4;
  param_1[0x3d] = 0;
  return;
}

