
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100342d0(int *param_1)

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
  
  param_1[0x4e] = 1;
  iVar1 = *(int *)(param_1[0x37] + 4);
  if ((*(int *)(iVar1 + 0x1c0) == 3) && (-0x11 < *(int *)(iVar1 + 0x1c4))) {
    if ((param_1[0x2d] == 0) && (param_1[0x49] == 0)) {
      (**(code **)(*param_1 + 0x174))();
      return;
    }
    FUN_10034e70((int)param_1);
    return;
  }
  iVar1 = *(int *)(param_1[0x37] + 4);
  fStack_1c = *(float *)(iVar1 + 0x70) + *(float *)(iVar1 + 0x7c);
  fStack_20 = *(float *)(iVar1 + 0x6c) + *(float *)(iVar1 + 0x78);
  fStack_24 = *(float *)(iVar1 + 0x74) + *(float *)(iVar1 + 0x68);
  FUN_100af200(&fStack_24);
  fStack_18 = DAT_10122044[10];
  fStack_14 = DAT_10122044[0xb];
  fStack_10 = DAT_10122044[0xc];
  (**(code **)(*(int *)param_1[0x37] + 0x214))(auStack_c);
  if (param_1[0x2d] == 0) {
    bVar3 = FUN_10034010((int)param_1);
    if (CONCAT31(extraout_var_00,bVar3) == 0) {
      fVar5 = FUN_100ae400();
      fVar4 = (float10)_DAT_100dd5f0;
      param_1[0x3f] = (int)(float)(fVar5 + fVar4);
      param_1[0x3e] = (int)(float)(fVar5 + fVar4);
      (**(code **)(*param_1 + 0x174))();
      return;
    }
    fVar2 = *DAT_10122044;
    param_1[0x48] = (int)fVar2;
    (*DAT_10121ff4)(1,*(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208),
                    CONCAT22((short)((uint)fVar2 >> 0x10),(short)param_1[0x51]),0,&DAT_10121dd8,
                    &DAT_10121dd8,0,0,param_1[0x2d],param_1[0x4e],1,0);
    param_1[0x4f] = 0;
    *(undefined4 *)(param_1[0x37] + 0x314) = 0x1c2;
    fVar4 = FUN_100ae400();
    param_1[0x40] = (int)(float)(fVar4 + (float10)_DAT_100dfb80);
    fVar4 = FUN_100ae400();
    *(float *)(param_1[1] + 0x254) = (float)(fVar4 + (float10)_DAT_100de4ac);
    fVar4 = FUN_10033ff0();
    *(float *)(param_1[1] + 0x1e4) = (float)(fVar4 + (float10)*DAT_10122044);
    param_1[0x2d] = 1;
  }
  else if (param_1[0x2d] == 1) {
    FUN_100342e0(param_1,&fStack_10,&fStack_1c);
    *(undefined4 *)(param_1[0x37] + 0x314) = 0x1c2;
    iVar1 = param_1[1];
    fVar4 = FUN_100ae400();
    if ((float10)*(float *)(iVar1 + 0x254) <= fVar4) {
      (*DAT_10121ff4)(1,*(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208),
                      CONCAT22(extraout_var_01,(short)param_1[0x51]),0,&DAT_10121dd8,&DAT_10121dd8,0
                      ,0,param_1[0x2d],param_1[0x4e],0,0);
      *(undefined4 *)(param_1[1] + 0x254) = 0x447a0000;
    }
    bVar3 = FUN_10034010((int)param_1);
    if (CONCAT31(extraout_var,bVar3) == 0) {
      FUN_10034e70((int)param_1);
      fVar5 = FUN_100ae400();
      fVar4 = (float10)_DAT_100dd628;
      param_1[0x3f] = (int)(float)(fVar5 + fVar4);
      param_1[0x3e] = (int)(float)(fVar5 + fVar4);
      return;
    }
  }
  return;
}

