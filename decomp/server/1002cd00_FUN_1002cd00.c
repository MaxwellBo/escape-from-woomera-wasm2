
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1002cd00(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (*(int *)(param_1[1] + 0x1d4) != 0) {
    iVar1 = FUN_100af030(0,(byte *)(DAT_10122044[0x26] + *(int *)(param_1[1] + 0x1d4)));
    if (iVar1 == 0) {
      return;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 4) + 0x208);
    lVar3 = __ftol();
    if (iVar1 != 0) {
      uVar2 = (*DAT_10121f24)(iVar1);
      *(undefined4 *)(param_1[1] + 0x110) = uVar2;
      *(int *)(param_1[1] + 0x114) = (int)lVar3;
      *(int *)(param_1[1] + 0x194) = iVar1;
      *(undefined4 *)(param_1[1] + 0x108) = 0xc;
    }
  }
  *(undefined4 *)(param_1[1] + 0x118) = 0;
  if (((*(float *)(param_1[1] + 0x138) != _DAT_100dd5f8) &&
      ((float)_DAT_100dd628 < (float)param_1[0x2f])) || ((*(byte *)(param_1[1] + 0x1a0) & 2) != 0))
  {
    param_1[0x1d] = (int)CSprite::AnimateThink;
    (**(code **)(*param_1 + 8))(0);
    param_1[0x2e] = *DAT_10122044;
  }
  *(undefined4 *)(param_1[1] + 0x130) = 0;
  return;
}

