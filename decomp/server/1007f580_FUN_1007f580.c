
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1007f580(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [56];
  
  if ((*(int *)(param_1[1] + 0x198) == 0) ||
     (iVar2 = *(int *)(*(int *)(param_1[1] + 0x198) + 0x7c), iVar2 == 0)) {
    iVar2 = -1;
  }
  else {
    iVar2 = FUN_10081f30(iVar2);
  }
  uVar3 = (*DAT_10121f24)(*(undefined4 *)(param_1[1] + 0x198));
  FUN_100af200(param_1[1] + 0x50);
  iVar5 = param_1[1];
  fStack_3c = *(float *)(DAT_10122044 + 0x30) * _DAT_100ddaf4 + *(float *)(iVar5 + 0x10);
  fStack_40 = *(float *)(DAT_10122044 + 0x2c) * _DAT_100ddaf4 + *(float *)(iVar5 + 0xc);
  fStack_44 = *(float *)(DAT_10122044 + 0x28) * _DAT_100ddaf4 + *(float *)(iVar5 + 8);
  FUN_100afc60((float *)(iVar5 + 8),&fStack_44,1,*(undefined4 *)(iVar5 + 0x198),auStack_38);
  if (iVar2 == -1) {
    FUN_100b0450((int)auStack_38,10);
    FUN_100b0ef0((int)param_1);
    (**(code **)(*param_1 + 8))(0x3dcccccd);
    return;
  }
  iVar5 = 1;
  lVar4 = __ftol();
  FUN_100b0560((int)auStack_38,uVar3,(int)lVar4,iVar5);
  iVar5 = param_1[1];
  fVar1 = *(float *)(iVar5 + 0x130);
  *(float *)(iVar5 + 0x130) = *(float *)(iVar5 + 0x130) + _DAT_100dd618;
  if ((float)(iVar2 + -1) <= fVar1) {
    FUN_100b0ef0((int)param_1);
  }
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  return;
}

