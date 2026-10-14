
void FUN_10085720(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0x5c;
  iVar1 = DAT_10126a38;
  do {
    if ((*(uint *)(iVar2 + iVar1) & DAT_10115238) == DAT_10115238) {
      (**(code **)(iVar1 + 0x4f568))(s_PM_Got_a_NaN_velocity__i_10115320,iVar3);
      *(undefined4 *)(iVar2 + DAT_10126a38) = 0;
      iVar1 = DAT_10126a38;
    }
    if ((*(uint *)(iVar2 + -0x24 + iVar1) & DAT_10115238) == DAT_10115238) {
      (**(code **)(iVar1 + 0x4f568))(s_PM_Got_a_NaN_origin_on__i_10115304,iVar3);
      *(undefined4 *)(iVar2 + -0x24 + DAT_10126a38) = 0;
      iVar1 = DAT_10126a38;
    }
    if (*(float *)(iVar2 + iVar1) <= *(float *)(*(int *)(iVar1 + 0x4f4f0) + 0x34)) {
      if (*(float *)(iVar2 + iVar1) < -*(float *)(*(int *)(iVar1 + 0x4f4f0) + 0x34)) {
        (**(code **)(iVar1 + 0x4f564))(s_PM_Got_a_velocity_too_low_on__i_101152bc,iVar3);
        *(float *)(iVar2 + DAT_10126a38) = -*(float *)(*(int *)(DAT_10126a38 + 0x4f4f0) + 0x34);
        iVar1 = DAT_10126a38;
      }
    }
    else {
      (**(code **)(iVar1 + 0x4f564))(s_PM_Got_a_velocity_too_high_on__i_101152e0,iVar3);
      *(undefined4 *)(iVar2 + DAT_10126a38) =
           *(undefined4 *)(*(int *)(DAT_10126a38 + 0x4f4f0) + 0x34);
      iVar1 = DAT_10126a38;
    }
    iVar2 = iVar2 + 4;
    iVar3 = iVar3 + 1;
  } while (iVar2 < 0x68);
  return;
}

