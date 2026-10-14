
void __thiscall FUN_100a97f0(int param_1,int param_2)

{
  int *piVar1;
  undefined1 auStack_10 [4];
  int iStack_c;
  int iStack_8;
  undefined4 uStack_4;
  
  piVar1 = (int *)FUN_100af060(0,(byte *)(*(int *)(DAT_10122044 + 0x98) +
                                         *(int *)(*(int *)(param_1 + 4) + 0x1c8)),param_2);
  if (piVar1 != (int *)0x0) {
    iStack_c = *(int *)(*(int *)(param_1 + 4) + 0x1d0) + *(int *)(DAT_10122044 + 0x98);
    iStack_8 = *(int *)(param_1 + 200) + *(int *)(DAT_10122044 + 0x98);
    uStack_4 = 0;
    (**(code **)(*piVar1 + 0x30))(auStack_10);
  }
  return;
}

