
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1008ae50(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uStack_4;
  
  uStack_4 = 0;
  param_1[0x57] = param_1[0x57] & 0xffffffe1;
  iVar1 = (*DAT_10121e4c)(*(undefined4 *)(param_1[1] + 0x208));
  if ((iVar1 != 0) && (iVar1 = (*DAT_10121f20)(iVar1), iVar1 != 0)) {
    param_1[3] = 0;
    piVar2 = (int *)FUN_100aeba0(0,param_1[1] + 8,(float)param_2);
    piVar3 = param_1;
    for (; piVar2 != (int *)0x0;
        piVar2 = (int *)FUN_100aeba0((int)piVar2,param_1[1] + 8,(float)param_2)) {
      iVar1 = (**(code **)(*piVar2 + 0xcc))();
      if ((((iVar1 != 0) || ((*(byte *)(piVar2[1] + 0x1a4) & 0x20) != 0)) &&
          ((*(byte *)(piVar2[1] + 0x1a4) & 0x80) == 0)) &&
         (_DAT_100dd5f8 < *(float *)(piVar2[1] + 0x160))) {
        piVar3[3] = (int)piVar2;
        piVar2[3] = 0;
        iVar1 = (**(code **)(*param_1 + 0x130))(piVar2);
        piVar3 = piVar2;
        if (iVar1 == -1) {
          uStack_4 = 4;
        }
        else if (iVar1 != 0) {
          (*DAT_10121efc)(1,s__s_can_t_assess__s_101111d4,
                          *(int *)param_1[1] + *(int *)(DAT_10122044 + 0x98),
                          *(int *)piVar2[1] + *(int *)(DAT_10122044 + 0x98));
        }
      }
    }
    param_1[0x57] = param_1[0x57] | uStack_4;
  }
  return;
}

