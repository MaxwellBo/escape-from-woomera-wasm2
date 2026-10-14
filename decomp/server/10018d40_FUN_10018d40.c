
void __cdecl FUN_10018d40(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (DAT_10121cd0 == 0) {
    if (param_1 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = *(int **)(param_1 + 0x7c);
    }
    if (param_2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_2 + 0x7c);
    }
    if ((piVar2 != (int *)0x0) && (iVar1 != 0)) {
      if (((*(uint *)(*(int *)(iVar1 + 4) + 0x1a4) | *(uint *)(piVar2[1] + 0x1a4)) & 0x40000000) ==
          0) {
        (**(code **)(*piVar2 + 0xe0))(iVar1);
      }
    }
  }
  return;
}

