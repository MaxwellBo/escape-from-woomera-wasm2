
void __thiscall FUN_100a26c0(void *param_1,int *param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  
  iVar4 = *(int *)((int)param_1 + 4);
  if (*(int *)(iVar4 + 0x1c8) == 0) {
    if (param_2 != (int *)0x0) {
      FUN_100a2860(param_1,param_2,param_4);
      goto LAB_100a2812;
    }
    if ((*(byte *)(iVar4 + 0x1a0) & 4) == 0) goto LAB_100a2812;
    iVar4 = *(int *)(iVar4 + 0x1cc) + *(int *)(DAT_10122044 + 0x98);
    pcVar5 = s_DEBUG__env_customize___s__was_fi_101195f8;
  }
  else {
    bVar2 = true;
    piVar3 = (int *)FUN_100af060(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(iVar4 + 0x1c8))
                                 ,(int)param_2);
    if (piVar3 != (int *)0x0) {
      bVar2 = false;
      do {
        FUN_100a2860(param_1,piVar3,param_4);
        piVar3 = (int *)FUN_100af060((int)piVar3,
                                     (byte *)(*(int *)(DAT_10122044 + 0x98) +
                                             *(int *)(*(int *)((int)param_1 + 4) + 0x1c8)),
                                     (int)param_2);
      } while (piVar3 != (int *)0x0);
    }
    piVar3 = (int *)FUN_100aec40(0,*(int *)(DAT_10122044 + 0x98) +
                                   *(int *)(*(int *)((int)param_1 + 4) + 0x1c8));
    if (piVar3 != (int *)0x0) {
      do {
        FUN_100a2860(param_1,piVar3,param_4);
        piVar3 = (int *)FUN_100aec40((int)piVar3,
                                     *(int *)(DAT_10122044 + 0x98) +
                                     *(int *)(*(int *)((int)param_1 + 4) + 0x1c8));
      } while (piVar3 != (int *)0x0);
      goto LAB_100a2812;
    }
    if ((!bVar2) || ((*(byte *)(*(int *)((int)param_1 + 4) + 0x1a0) & 4) == 0)) goto LAB_100a2812;
    iVar4 = *(int *)(*(int *)((int)param_1 + 4) + 0x1c8) + *(int *)(DAT_10122044 + 0x98);
    pcVar5 = s_DEBUG__env_customize___s__does_n_101195a0;
  }
  (*DAT_10121efc)(1,pcVar5,iVar4);
LAB_100a2812:
  uVar1 = *(uint *)(*(int *)((int)param_1 + 4) + 0x1a0);
  if ((uVar1 & 2) != 0) {
    if ((uVar1 & 4) != 0) {
      (*DAT_10121efc)(1,s_DEBUG__env_customize___s__remove_10119574,
                      *(int *)(*(int *)((int)param_1 + 4) + 0x1cc) + *(int *)(DAT_10122044 + 0x98));
    }
    FUN_100b0ef0((int)param_1);
  }
  return;
}

