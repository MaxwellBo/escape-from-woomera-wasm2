
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1004ec50(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  int iVar8;
  undefined4 *puVar9;
  float10 fVar10;
  float10 fVar11;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  undefined1 auStack_dc [4];
  undefined1 auStack_d8 [8];
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined1 auStack_a0 [12];
  undefined1 auStack_94 [12];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 auStack_58 [12];
  float afStack_4c [3];
  float afStack_40 [3];
  float afStack_34 [3];
  float afStack_28 [3];
  float afStack_1c [3];
  float afStack_10 [4];
  
  (**(code **)(*param_1 + 0x18c))();
  if (0 < *(int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4)) {
    FUN_100af200(*(int *)(param_1[0x37] + 4) + 0x74);
    fStack_124 = DAT_10122044[0xd] * _DAT_100e9600;
    fStack_120 = DAT_10122044[0xe] * _DAT_100e9600;
    fStack_11c = DAT_10122044[0xf] * _DAT_100e9600;
    FUN_10001d60(&fStack_118,DAT_10122044[0x10] * _DAT_100de45c,DAT_10122044[0x11] * _DAT_100de45c,
                 DAT_10122044[0x12] * _DAT_100de45c);
    FUN_10001d60(&fStack_f4,DAT_10122044[10] * _DAT_100dd634,DAT_10122044[0xb] * _DAT_100dd634,
                 DAT_10122044[0xc] * _DAT_100dd634);
    pfVar7 = (float *)(**(code **)(*(int *)param_1[0x37] + 0x214))(auStack_d8);
    FUN_10001d60(&fStack_110,fStack_f8 + *pfVar7,fStack_f4 + pfVar7[1],fStack_f0 + pfVar7[2]);
    FUN_10001d60(&fStack_104,fStack_11c + fStack_110,fStack_118 + fStack_10c,fStack_114 + fStack_108
                );
    FUN_10001d60(&fStack_ec,fStack_104 + fStack_128,fStack_100 + fStack_124,fStack_fc + fStack_120);
    fVar6 = fStack_e4;
    fVar5 = fStack_e8;
    fVar4 = fStack_ec;
    iVar2 = param_1[0x4a];
    param_1[0x4a] = iVar2 + 1;
    switch(iVar2) {
    case 0:
      FUN_10001d60(&fStack_ec,DAT_10122044[0xd] * _DAT_100de45c,DAT_10122044[0xe] * _DAT_100de45c,
                   DAT_10122044[0xf] * _DAT_100de45c);
      FUN_10001d60(&fStack_104,fStack_ec + fVar4,fVar5 + fStack_e8,fVar6 + fStack_e4);
      break;
    case 1:
      FUN_10001d60(&fStack_110,DAT_10122044[0xd] * _DAT_100de45c,DAT_10122044[0xe] * _DAT_100de45c,
                   DAT_10122044[0xf] * _DAT_100de45c);
      FUN_10001d60(&fStack_11c,fStack_110 + fStack_ec,fStack_e8 + fStack_10c,fStack_e4 + fStack_108)
      ;
      fVar4 = fStack_11c;
      FUN_10001d60(&fStack_f8,DAT_10122044[0x10] * _DAT_100de45c,DAT_10122044[0x11] * _DAT_100de45c,
                   DAT_10122044[0x12] * _DAT_100de45c);
      FUN_10001d60(&fStack_128,fStack_f8 + fVar4,fStack_118 + fStack_f4,fStack_114 + fStack_f0);
      break;
    case 2:
      FUN_10001d60(&fStack_7c,DAT_10122044[0x10] * _DAT_100de45c,DAT_10122044[0x11] * _DAT_100de45c,
                   DAT_10122044[0x12] * _DAT_100de45c);
      FUN_10001d60(auStack_a0,fStack_7c + fStack_ec,fStack_e8 + fStack_78,fStack_e4 + fStack_74);
      break;
    case 3:
      FUN_10001d60(&fStack_88,DAT_10122044[0xd] * _DAT_100e4120,DAT_10122044[0xe] * _DAT_100e4120,
                   DAT_10122044[0xf] * _DAT_100e4120);
      FUN_10001d60(&fStack_ac,fStack_88 + fStack_ec,fStack_e8 + fStack_84,fStack_e4 + fStack_80);
      FUN_10001d60(&fStack_d0,DAT_10122044[0x10] * _DAT_100de45c,DAT_10122044[0x11] * _DAT_100de45c,
                   DAT_10122044[0x12] * _DAT_100de45c);
      FUN_10001d60(auStack_94,fStack_d0 + fStack_ac,fStack_a8 + fStack_cc,fStack_a4 + fStack_c8);
      break;
    case 4:
      FUN_10001d60(&fStack_64,DAT_10122044[0xd] * _DAT_100e4120,DAT_10122044[0xe] * _DAT_100e4120,
                   DAT_10122044[0xf] * _DAT_100e4120);
      FUN_10001d60(auStack_58,fStack_64 + fStack_ec,fStack_e8 + fStack_60,fStack_e4 + fStack_5c);
      break;
    case 5:
      FUN_10001d60(&fStack_70,DAT_10122044[0xd] * _DAT_100e4120,DAT_10122044[0xe] * _DAT_100e4120,
                   DAT_10122044[0xf] * _DAT_100e4120);
      FUN_10001d60(&fStack_c4,fStack_70 + fStack_ec,fStack_e8 + fStack_6c,fStack_e4 + fStack_68);
      FUN_10001d60(&fStack_b8,DAT_10122044[0x10] * _DAT_100e4120,DAT_10122044[0x11] * _DAT_100e4120,
                   DAT_10122044[0x12] * _DAT_100e4120);
      FUN_10001d60(auStack_dc,fStack_b8 + fStack_c4,fStack_c0 + fStack_b4,fStack_bc + fStack_b0);
      break;
    case 6:
      pfVar7 = (float *)FUN_10002280(DAT_10122044 + 0x10,afStack_40,-8.0);
      FUN_1000b550(&stack0xfffffecc,afStack_10,pfVar7);
      break;
    case 7:
      pfVar7 = (float *)FUN_10002280(DAT_10122044 + 0xd,afStack_1c,8.0);
      FUN_1000b550(&stack0xfffffecc,afStack_34,pfVar7);
      pfVar7 = (float *)FUN_10002280(DAT_10122044 + 0x10,afStack_28,-8.0);
      FUN_1000b550(&stack0xfffffecc,afStack_4c,pfVar7);
      param_1[0x4a] = 0;
    }
    iVar8 = FUN_1001a1f0(0x10101a7c,(undefined4 *)&stack0xfffffecc,
                         (undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x74),
                         *(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208));
    puVar9 = (undefined4 *)FUN_10002280(DAT_10122044 + 10,afStack_4c,1200.0);
    iVar2 = *(int *)(iVar8 + 4);
    *(undefined4 *)(iVar2 + 0x20) = *puVar9;
    *(undefined4 *)(iVar2 + 0x24) = puVar9[1];
    *(undefined4 *)(iVar2 + 0x28) = puVar9[2];
    puVar9 = (undefined4 *)FUN_100ae830(afStack_4c,*(int *)(iVar8 + 4) + 0x20);
    iVar2 = *(int *)(iVar8 + 4);
    *(undefined4 *)(iVar2 + 0x50) = *puVar9;
    uVar3 = puVar9[1];
    *(undefined4 *)(iVar2 + 0x54) = uVar3;
    *(undefined4 *)(iVar2 + 0x58) = puVar9[2];
    *(code **)(iVar8 + 0x74) = CHornet::StartDart;
    param_1[0x49] = (int)(*DAT_10122044 + (float)_DAT_100dd648);
    (*DAT_10121ff4)(1,*(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208),
                    CONCAT22((short)((uint)uVar3 >> 0x10),(short)param_1[0x4b]),0,&DAT_10121dd8,
                    &DAT_10121dd8,0,0,1,0,0,0);
    piVar1 = (int *)(param_1[0x37] + 0x534 + param_1[0x41] * 4);
    *piVar1 = *piVar1 + -1;
    *(undefined4 *)(param_1[0x37] + 0x314) = 600;
    *(undefined4 *)(param_1[0x37] + 0x31c) = 0x80;
    FUN_1007c580((void *)param_1[0x37],5);
    fVar10 = FUN_100ae400();
    fVar11 = (float10)_DAT_100dfb80;
    param_1[0x3f] = (int)(float)(fVar10 + fVar11);
    param_1[0x3e] = (int)(float)(fVar10 + fVar11);
    fVar11 = FUN_100ae4b0(*(int *)(param_1[0x37] + 0x308),10.0,0x41700000);
    fStack_e0 = (float)fVar11;
    fVar11 = FUN_100ae400();
    param_1[0x40] = (int)(float)(fVar11 + (float10)fStack_e0);
  }
  return;
}

