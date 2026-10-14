
undefined4 __thiscall FUN_1008fe40(void *this,CBaseEntity *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) && (param_3 != 0)) {
    FUN_1008fef0(this,param_1);
    return 0;
  }
  uVar1 = FUN_10008160(param_1,(byte *)(*(int *)(DAT_10122044 + 0x98) + param_2));
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x128) = uVar1;
  if (*(int *)(*(int *)(param_1 + 4) + 0x128) == -1) {
    (*DAT_10121efc)(4,s__s__unknown_scripted_sequence____101160c4,
                    *(int *)(*(int *)(param_1 + 4) + 0x1cc) + *(int *)(DAT_10122044 + 0x98),
                    *(int *)(DAT_10122044 + 0x98) + param_2);
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x128) = 0;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x130) = 0;
  FUN_10008190((int)param_1);
  return 1;
}

