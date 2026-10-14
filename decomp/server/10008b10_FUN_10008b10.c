
undefined4 __cdecl FUN_10008b10(int param_1,int param_2)

{
  if ((param_1 != 0) && (*(int *)(param_2 + 0x128) < *(int *)(param_1 + 0xa4))) {
    return *(undefined4 *)
            (*(int *)(param_2 + 0x128) * 0xb0 + *(int *)(param_1 + 0xa8) + 0x24 + param_1);
  }
  return 0;
}

