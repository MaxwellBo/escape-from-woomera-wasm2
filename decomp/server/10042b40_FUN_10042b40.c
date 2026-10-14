
void __fastcall FUN_10042b40(int *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  (**(code **)(*param_1 + 0x2c))();
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),
                  *(int *)(param_1[1] + 0xb8) + *(int *)(DAT_10122044 + 0x98));
  *(undefined4 *)(param_1[1] + 0x118) = 0;
  *(undefined4 *)(param_1[1] + 0xb0) = 0x41000000;
  *(undefined4 *)(param_1[1] + 0x128) = 0;
  if (*(int *)(param_1[1] + 0x1d0) == 0) {
    lVar2 = __ftol();
    uVar1 = FUN_10008100(param_1,(int)lVar2);
    *(undefined4 *)(param_1[1] + 0x128) = uVar1;
  }
  else {
    uVar1 = FUN_10008160(param_1,(byte *)(*(int *)(DAT_10122044 + 0x98) +
                                         *(int *)(param_1[1] + 0x1d0)));
    *(undefined4 *)(param_1[1] + 0x128) = uVar1;
    if (*(int *)(param_1[1] + 0x128) == -1) {
      (*DAT_10121efc)(1,s_Invalid_sequence_name___s__in_mo_1010d2c0,
                      *(int *)(param_1[1] + 0x1d0) + *(int *)(DAT_10122044 + 0x98));
    }
  }
  *(undefined4 *)(param_1[1] + 0x160) = 0x41000000;
  (**(code **)(*param_1 + 0x138))();
  FUN_10008190((int)param_1);
  *(undefined4 *)(param_1[1] + 0x130) = 0x437f0000;
  return;
}

