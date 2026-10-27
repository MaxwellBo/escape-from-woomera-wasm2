
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10002690(CBasePlayerItem *param_1)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined2 extraout_var_01;
  float10 fVar4;
  float10 fVar5;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined1 auStack_c [12];
  
  *(undefined4 *)(param_1 + 0x138) = 1;
  iVar1 = *(int *)(*(int *)(param_1 + 0xdc) + 4);
  if ((*(int *)(iVar1 + 0x1c0) == 3) && (-0x11 < *(int *)(iVar1 + 0x1c4))) {
    if ((*(int *)(param_1 + 0xb4) == 0) && (*(int *)(param_1 + 0x124) == 0)) {
      (**(code **)(*(int *)param_1 + 0x174))();
      return;
    }
    FUN_10002930(param_1);
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xdc) + 4);
  fStack_1c = *(float *)(iVar1 + 0x70) + *(float *)(iVar1 + 0x7c);
  fStack_20 = *(float *)(iVar1 + 0x6c) + *(float *)(iVar1 + 0x78);
  fStack_24 = *(float *)(iVar1 + 0x74) + *(float *)(iVar1 + 0x68);
  CBasePlayerItem::AttemptToMaterialize((CBasePlayerItem *)&fStack_24);
  fStack_18 = DAT_1007f7f8[10];
  fStack_14 = DAT_1007f7f8[0xb];
  fStack_10 = DAT_1007f7f8[0xc];
  (**(code **)(**(int **)(param_1 + 0xdc) + 0x214))(auStack_c);
  if (*(int *)(param_1 + 0xb4) == 0) {
    bVar3 = FUN_10002400((int)param_1);
    if (CONCAT31(extraout_var_00,bVar3) == 0) {
      fVar5 = FUN_10018f40();
      fVar4 = (float10)_DAT_10059cf0;
      *(float *)(param_1 + 0xfc) = (float)(fVar5 + fVar4);
      *(float *)(param_1 + 0xf8) = (float)(fVar5 + fVar4);
      (**(code **)(*(int *)param_1 + 0x174))();
      return;
    }
    fVar2 = *DAT_1007f7f8;
    *(float *)(param_1 + 0x120) = fVar2;
    (*DAT_1007f0bc)(1,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xdc) + 4) + 0x208),
                    CONCAT22((short)((uint)fVar2 >> 0x10),*(undefined2 *)(param_1 + 0x144)),0,
                    &DAT_1007f110,&DAT_1007f110,0,0,*(undefined4 *)(param_1 + 0xb4),
                    *(undefined4 *)(param_1 + 0x138),1,0);
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x314) = 0x1c2;
    fVar4 = FUN_10018f40();
    *(float *)(param_1 + 0x100) = (float)(fVar4 + (float10)_DAT_10059ea8);
    fVar4 = FUN_10018f40();
    *(float *)(*(int *)(param_1 + 4) + 0x254) = (float)(fVar4 + (float10)_DAT_10059ea0);
    fVar4 = FUN_100023f0();
    *(float *)(*(int *)(param_1 + 4) + 0x1e4) = (float)(fVar4 + (float10)*DAT_1007f7f8);
    *(undefined4 *)(param_1 + 0xb4) = 1;
  }
  else if (*(int *)(param_1 + 0xb4) == 1) {
    FUN_100026a0((int)param_1);
    *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x314) = 0x1c2;
    iVar1 = *(int *)(param_1 + 4);
    fVar4 = FUN_10018f40();
    if ((float10)*(float *)(iVar1 + 0x254) <= fVar4) {
      (*DAT_1007f0bc)(1,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xdc) + 4) + 0x208),
                      CONCAT22(extraout_var_01,*(undefined2 *)(param_1 + 0x144)),0,&DAT_1007f110,
                      &DAT_1007f110,0,0,*(undefined4 *)(param_1 + 0xb4),
                      *(undefined4 *)(param_1 + 0x138),0,0);
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x254) = 0x447a0000;
    }
    bVar3 = FUN_10002400((int)param_1);
    if (CONCAT31(extraout_var,bVar3) == 0) {
      FUN_10002930(param_1);
      fVar5 = FUN_10018f40();
      fVar4 = (float10)_DAT_10059a10;
      *(float *)(param_1 + 0xfc) = (float)(fVar5 + fVar4);
      *(float *)(param_1 + 0xf8) = (float)(fVar5 + fVar4);
      return;
    }
  }
  return;
}

