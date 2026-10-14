
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1007db60(CBasePlayer *param_1)

{
  undefined1 uVar1;
  undefined3 extraout_var;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_3c [16];
  float fStack_2c;
  int iStack_c;
  
  if ((DAT_10114740 != '\0') && (uVar1 = FUN_100c5b80(), CONCAT31(extraout_var,uVar1) == 0)) {
    iVar7 = 0x49;
    iVar2 = FUN_100c6980();
    FUN_100c81d0(iVar2,iVar7);
    DAT_10114740 = '\0';
  }
  uVar5 = *(uint *)(*(int *)(param_1 + 4) + 0x180);
  uVar4 = *(uint *)(param_1 + 0x32c) ^ uVar5;
  *(uint *)(param_1 + 0x330) = uVar5 & uVar4;
  *(uint *)(param_1 + 0x334) = ~*(uint *)(*(int *)(param_1 + 4) + 0x180) & uVar4;
  (**(code **)(*DAT_10121db8 + 0x4c))(param_1);
  if (DAT_10121dd0 != 0) {
    return;
  }
  FUN_100af200(*(int *)(param_1 + 4) + 0x74);
  FUN_10080d30((int)param_1);
  FUN_1007ca60((int *)param_1);
  if ((DAT_10121db8 == (int *)0x0) || (iVar2 = (**(code **)(*DAT_10121db8 + 0xc))(), iVar2 == 0)) {
    uVar5 = *(uint *)(param_1 + 0x500) | 2;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x500) & 0xfffffffd;
  }
  *(uint *)(param_1 + 0x500) = uVar5;
  (**(code **)(*(int *)param_1 + 0x23c))();
  FUN_1007de90((int *)param_1);
  FUN_1007e0d0((int)param_1);
  iVar2 = *(int *)(param_1 + 4);
  if (0 < *(int *)(iVar2 + 0x170)) {
    CBasePlayer::PlayerDeathThink(param_1);
    return;
  }
  if (((byte)param_1[0x364] & 2) == 0) {
    uVar5 = *(uint *)(iVar2 + 0x1a4) & 0xfeffffff;
  }
  else {
    uVar5 = *(uint *)(iVar2 + 0x1a4) | 0x1000000;
  }
  *(uint *)(iVar2 + 0x1a4) = uVar5;
  if (((byte)param_1[0x364] & 2) == 0) {
    if (((byte)param_1[0x4d4] & 0x80) != 0) {
      *(undefined4 *)(param_1 + 0x4d4) = 0xc0;
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x19c);
    if ((iVar2 == 0) && (iVar2 = (*DAT_10121f1c)(0), iVar2 == 0)) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = *(int **)(iVar2 + 0x7c);
    }
    if (piVar3 == (int *)0x0) {
      FUN_100afc60(*(int *)(param_1 + 4) + 8,&stack0xffffffb8,1,
                   *(undefined4 *)(*(int *)(param_1 + 4) + 0x208),auStack_3c);
      if (((fStack_2c == (float)_DAT_100dd628) || (iStack_c == 0)) ||
         ((piVar3 = *(int **)(iStack_c + 0x7c), piVar3 == (int *)0x0 ||
          ((uVar5 = (**(code **)(*piVar3 + 0x3c))(), (uVar5 & 0x40) == 0 ||
           (iVar2 = (**(code **)(*piVar3 + 0xb0))(*(undefined4 *)(param_1 + 4)), iVar2 == 0)))))) {
LAB_1007dd27:
        *(undefined4 *)(param_1 + 0x4d4) = 0xc0;
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfffffffd;
        return;
      }
    }
    else if ((((*(uint *)(*(int *)(param_1 + 4) + 0x1a4) & 0x200) == 0) ||
             ((*(byte *)(piVar3[1] + 0x1a0) & 2) != 0)) ||
            ((*(uint *)(*(int *)(param_1 + 4) + 0x180) & 0x600) != 0)) goto LAB_1007dd27;
    iVar2 = *(int *)(param_1 + 4);
    *(undefined4 *)(iVar2 + 0x20) = DAT_10121dd8;
    *(undefined4 *)(iVar2 + 0x24) = DAT_10121ddc;
    *(undefined4 *)(iVar2 + 0x28) = DAT_10121de0;
    if ((*(uint *)(param_1 + 0x330) & 8) == 0) {
      if ((*(uint *)(param_1 + 0x330) & 0x10) == 0) goto LAB_1007ddf9;
      (**(code **)(*piVar3 + 0xe4))(param_1,param_1,2,0xbf800000);
    }
    else {
      (**(code **)(*piVar3 + 0xe4))(param_1,param_1,2,0x3f800000);
    }
    iVar2 = *(int *)(piVar3[1] + 0x184);
    lVar6 = __ftol();
    uVar5 = FUN_1007b460((int)lVar6,iVar2);
    *(uint *)(param_1 + 0x4d4) = uVar5 | 0xc0;
  }
LAB_1007ddf9:
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x180) & 2) != 0) {
    (**(code **)(*(int *)param_1 + 0x22c))();
  }
  if ((((*(byte *)(*(int *)(param_1 + 4) + 0x180) & 4) != 0) ||
      ((*(uint *)(*(int *)(param_1 + 4) + 0x1a4) & 0x4000) != 0)) ||
     (((byte)param_1[0x364] & 8) != 0)) {
    (**(code **)(*(int *)param_1 + 0x230))();
  }
  if ((*(uint *)(*(int *)(param_1 + 4) + 0x1a4) & 0x200) == 0) {
    *(float *)(param_1 + 0x344) = -*(float *)(*(int *)(param_1 + 4) + 0x28);
  }
  FUN_10019420(param_1 + 0x160,0);
  if (((byte)param_1[0x364] & 4) != 0) {
    iVar2 = *(int *)(param_1 + 4);
    *(undefined4 *)(iVar2 + 0x20) = DAT_10121dd8;
    *(undefined4 *)(iVar2 + 0x24) = DAT_10121ddc;
    *(undefined4 *)(iVar2 + 0x28) = DAT_10121de0;
  }
  return;
}

