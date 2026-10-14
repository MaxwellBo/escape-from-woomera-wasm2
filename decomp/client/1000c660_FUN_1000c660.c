
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000c660(int *param_1)

{
  int iVar1;
  float *pfVar2;
  void *this;
  CBasePlayerItem *this_00;
  float10 fVar3;
  float *pfVar4;
  undefined4 uVar5;
  float fStack_38;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float afStack_c [3];
  
  iVar1 = param_1[0x37];
  if ((*(int *)(*(int *)(iVar1 + 4) + 0x1c0) == 3) &&
     (-0x11 < *(int *)(*(int *)(iVar1 + 4) + 0x1c4))) {
    (**(code **)(*param_1 + 0x174))();
    param_1[0x3e] = 0x3e19999a;
    return;
  }
  if (*(int *)(iVar1 + 0x534 + param_1[0x42] * 4) == 0) {
    (**(code **)(*param_1 + 0x174))();
    return;
  }
  *(undefined4 *)(iVar1 + 0x314) = 600;
  *(undefined4 *)(param_1[0x37] + 0x31c) = 0x200;
  *(undefined4 *)(param_1[0x37] + 0x318) = 0x20;
  fVar3 = FUN_10018f40();
  *(float *)(param_1[0x37] + 800) = (float)(fVar3 + (float10)_DAT_1005acd0);
  *(int *)(param_1[0x37] + 0x534 + param_1[0x42] * 4) =
       *(int *)(param_1[0x37] + 0x534 + param_1[0x42] * 4) + -1;
  CBasePlayerAmmo::DefaultTouch((CBasePlayerAmmo *)param_1[0x37],(CBaseEntity *)0x5);
  iVar1 = *(int *)(param_1[0x37] + 4);
  fStack_10 = *(float *)(iVar1 + 0x70) + *(float *)(iVar1 + 0x7c);
  fStack_14 = *(float *)(iVar1 + 0x6c) + *(float *)(iVar1 + 0x78);
  fStack_18 = *(float *)(iVar1 + 0x68) + *(float *)(iVar1 + 0x74);
  CBasePlayerItem::AttemptToMaterialize(this_00);
  iVar1 = *(int *)(param_1[0x37] + 4);
  fStack_38 = 2.5397356e-29;
  pfVar2 = (float *)FUN_1000c990((void *)(DAT_1007f7f8 + 0x28),&fStack_18,16.0);
  pfVar4 = &fStack_38;
  this = (void *)FUN_1000c960((void *)(iVar1 + 8),afStack_c,(float *)(iVar1 + 0x174));
  FUN_1000c960(this,pfVar4,pfVar2);
  uVar5 = *(undefined4 *)(param_1[0x37] + 4);
  HUD_GetUserEntity();
  (*DAT_1007f0bc)(1,*(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208),
                  *(undefined2 *)((int)param_1 + 0x12a),0,&DAT_1007f110,&DAT_1007f110,0,0,0,0,0,0,
                  uVar5);
  fVar3 = FUN_10018f40();
  param_1[0x3e] = (int)(float)(fVar3 + (float10)_DAT_10059eb0);
  fVar3 = FUN_10018f40();
  param_1[0x3f] = (int)(float)(fVar3 + (float10)_DAT_10059eb0);
  fVar3 = FUN_10018f40();
  param_1[0x40] = (int)(float)(fVar3 + (float10)_DAT_1005c36c);
  if (*(int *)(param_1[0x37] + 0x534 + param_1[0x42] * 4) == 0) {
    FUN_10002850();
  }
  return;
}

