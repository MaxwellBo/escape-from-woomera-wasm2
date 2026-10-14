
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001a450(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x288);
  if (iVar1 == 0) {
    iVar1 = (*DAT_10121f1c)(0);
    if (iVar1 == 0) {
      piVar2 = (int *)0x0;
      goto LAB_1001a47a;
    }
  }
  piVar2 = *(int **)(iVar1 + 0x7c);
LAB_1001a47a:
  if ((float)piVar2[0xda] <= *DAT_10122044) {
    piVar2[0xda] = (int)(*DAT_10122044 + _DAT_100dd618);
    *(undefined4 *)(param_1 + 0x1e0) = 0;
    (**(code **)(*piVar2 + 0x68))(param_1 + 0x80,1);
  }
  return;
}

