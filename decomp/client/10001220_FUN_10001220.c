
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10001220(int *param_1)

{
  int iVar1;
  float10 fVar2;
  float fStack_44;
  float fStack_40;
  
  fVar2 = FUN_10018f40();
  param_1[0x3e] = (int)(float)(fVar2 + (float10)_DAT_10059a00);
  if (param_1[0x43] == 0) {
    (**(code **)(*param_1 + 0x174))();
    return;
  }
  *(undefined4 *)(param_1[0x37] + 0x314) = 200;
  iVar1 = param_1[0x43] + -1;
  param_1[0x43] = iVar1;
  (*DAT_1007f0bc)(1,*(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208),
                  CONCAT22((short)((uint)iVar1 >> 0x10),*(undefined2 *)((int)param_1 + 0x126)),0,
                  &DAT_1007f110,&DAT_1007f110,0,0,iVar1,
                  *(undefined4 *)(param_1[0x37] + 0x534 + param_1[0x41] * 4),0,0);
  CBasePlayerAmmo::DefaultTouch((CBasePlayerAmmo *)param_1[0x37],(CBaseEntity *)0x5);
  CBasePlayerItem::AttemptToMaterialize((CBasePlayerItem *)param_1[0x37]);
  (**(code **)(*(int *)param_1[0x37] + 0x214))(&fStack_44);
  fStack_44 = *(float *)(DAT_1007f7f8 + 0x2c) * _DAT_100599f8;
  fStack_40 = *(float *)(DAT_1007f7f8 + 0x30) * _DAT_100599f8;
  FUN_1000a860();
  return;
}

