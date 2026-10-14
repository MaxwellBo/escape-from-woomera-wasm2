
void __thiscall FUN_10015fa0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_1[0x8e]) {
    puVar3 = (uint *)(param_1 + 0x2e);
    do {
      iVar4 = iVar4 + 1;
      iVar2 = FUN_10019410(puVar3);
      if (iVar2 == param_3) break;
      puVar3 = puVar3 + 2;
    } while (iVar4 < param_1[0x8e]);
  }
  if (iVar4 <= param_1[0x8e]) {
    iVar2 = (**(code **)(*param_1 + 0x58))();
    param_1[iVar4 + 0x6d] = param_1[iVar4 + 0x6d] ^ 1;
    iVar4 = (**(code **)(*param_1 + 0x58))();
    if (iVar2 != iVar4) {
      if (iVar2 == 2) {
        if (*(int *)(param_1[1] + 0x1d0) != 0) {
          (*DAT_10121efc)(2,s_Multisource__s_deactivated___d_i_10104908,
                          *(int *)(param_1[1] + 0x1cc) + *(int *)(DAT_10122044 + 0x98),param_1[0x8e]
                         );
          if (param_1[0x8f] == 0) {
            iVar4 = 3;
          }
          else {
            iVar4 = 0;
          }
          FUN_10098c10((uint *)(*(int *)(param_1[1] + 0x1d0) + *(int *)(DAT_10122044 + 0x98)),
                       (int *)0x0,param_1,iVar4,0);
          return;
        }
      }
      else if (iVar2 == 0) {
        (*DAT_10121efc)(2,s_Multisource__s_enabled___d_input_101048e4,
                        *(int *)(param_1[1] + 0x1cc) + *(int *)(DAT_10122044 + 0x98),param_1[0x8e]);
        iVar4 = 3;
        if (param_1[0x8f] != 0) {
          iVar4 = 1;
        }
        FUN_10098bd0(param_1,(int *)0x0,iVar4,0);
      }
    }
    return;
  }
  piVar1 = *(int **)(param_3 + 4);
  iVar4 = *(int *)(DAT_10122044 + 0x98);
  if (piVar1[0x73] != 0) {
    (*DAT_10121efc)(1,s_multisource___s___Used_by_non_me_1010495c,
                    *(int *)(param_1[1] + 0x1cc) + iVar4,iVar4 + *piVar1,piVar1[0x73] + iVar4);
    return;
  }
  (*DAT_10121efc)(1,s_multisource___s___Used_by_non_me_10104930,*(int *)(param_1[1] + 0x1cc) + iVar4
                  ,iVar4 + *piVar1);
  return;
}

