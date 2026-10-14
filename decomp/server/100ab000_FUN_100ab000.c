
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100ab000(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined1 local_38 [16];
  int local_28;
  
  FUN_100afc60(param_1[1] + 8,param_1 + 199,0,*(undefined4 *)(param_1[1] + 0x208),local_38);
  param_1[0xca] = local_28;
  param_1[0x1d] = (int)CTripmineGrenade::BeamBreakThink;
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  fVar1 = (float)param_1[0xca];
  iVar2 = param_1[1];
  fStack_40 = (float)param_1[0xc6] * _DAT_100de9b8 * fVar1 + *(float *)(iVar2 + 0x10);
  fStack_44 = (float)param_1[0xc5] * _DAT_100de9b8 * fVar1 + *(float *)(iVar2 + 0xc);
  fStack_48 = (float)param_1[0xc4] * _DAT_100de9b8 * fVar1 + *(float *)(iVar2 + 8);
  puVar3 = FUN_100295c0((int)PTR_s_sprites_laserbeam_spr_1011b508,10);
  param_1[0xcd] = (int)puVar3;
  uVar4 = (*DAT_10121f24)(*(undefined4 *)(param_1[1] + 0x208));
  FUN_10029800((void *)param_1[0xcd],&fStack_48,uVar4);
  iVar2 = param_1[0xcd];
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x150) = 0;
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x154) = 0x43560000;
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x158) = 0x43460000;
  *(undefined4 *)(*(int *)(param_1[0xcd] + 4) + 0x134) = 0x437f0000;
  *(undefined4 *)(*(int *)(param_1[0xcd] + 4) + 0x14c) = 0x42800000;
  return;
}

