
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10002010(int *param_1)

{
  uint uVar1;
  undefined2 extraout_var;
  int iVar2;
  float unaff_ESI;
  float10 fVar3;
  float10 fVar4;
  int unaff_retaddr;
  undefined1 *puVar5;
  float *pfVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  float local_5c;
  float fStack_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined1 auStack_3c [16];
  float fStack_2c;
  
  CBasePlayerItem::AttemptToMaterialize((CBasePlayerItem *)(*(int *)(param_1[0x37] + 4) + 0x74));
  (**(code **)(*(int *)param_1[0x37] + 0x214))(&local_5c);
  puVar9 = auStack_3c;
  fStack_50 = *(float *)(DAT_1007f7f8 + 0x2c) * _DAT_10059cf8;
  fStack_4c = *(float *)(DAT_1007f7f8 + 0x30) * _DAT_10059cf8;
  fStack_48 = unaff_ESI + *(float *)(DAT_1007f7f8 + 0x28) * _DAT_10059cf8;
  fStack_44 = local_5c + fStack_50;
  fStack_40 = fStack_58 + fStack_4c;
  pfVar6 = &fStack_48;
  uVar8 = *(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208);
  puVar5 = &stack0xffffffa0;
  uVar7 = 0;
  FUN_1000a860();
  (*DAT_1007f0bc)(1,*(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208),
                  CONCAT22(extraout_var,(short)param_1[0x57]),0,&DAT_1007f110,&DAT_1007f110,0,0,0,0,
                  0,0,puVar5,pfVar6,uVar7,uVar8,puVar9);
  if ((float)_DAT_10059a10 <= fStack_2c) {
    if (unaff_retaddr == 0) {
      return 0;
    }
    fVar3 = FUN_10018f40();
    param_1[0x3e] = (int)(float)(fVar3 + (float10)_DAT_100599f0);
    CBasePlayerAmmo::DefaultTouch((CBasePlayerAmmo *)param_1[0x37],(CBaseEntity *)0x5);
    return 0;
  }
  uVar1 = param_1[0x48] & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  param_1[0x48] = param_1[0x48] + 1;
  if (uVar1 == 0xffffffff) {
    iVar2 = *param_1;
    uVar8 = 3;
  }
  else {
    if (uVar1 == 0) {
      (**(code **)(*param_1 + 0x17c))(6,1,0);
      goto LAB_10002182;
    }
    if (uVar1 != 1) goto LAB_10002182;
    iVar2 = *param_1;
    uVar8 = 8;
  }
  (**(code **)(iVar2 + 0x17c))(uVar8,1,0);
LAB_10002182:
  CBasePlayerAmmo::DefaultTouch((CBasePlayerAmmo *)param_1[0x37],(CBaseEntity *)0x5);
  fVar4 = FUN_10018f40();
  fVar3 = (float10)_DAT_10059cf0;
  param_1[0x1d] = (int)CCrowbar::Smack;
  param_1[0x3e] = (int)(float)(fVar4 + fVar3);
  (**(code **)(*param_1 + 8))(0x3e4ccccd);
  return 0;
}

