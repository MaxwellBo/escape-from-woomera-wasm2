
void FUN_100aec60(void)

{
  int *piVar1;
  
  if (DAT_10122060 != 0) {
    piVar1 = *(int **)(DAT_10122060 + 0xb8);
    while (piVar1 != (int *)0x0) {
      if ((piVar1[0x17] & 0x1000U) != 0) {
        (**(code **)(*piVar1 + 0x124))();
        *(uint *)(*(int *)(DAT_10122060 + 0xb8) + 0x5c) =
             *(uint *)(*(int *)(DAT_10122060 + 0xb8) + 0x5c) & 0xffffefff;
      }
      *(undefined4 *)(DAT_10122060 + 0xb8) = *(undefined4 *)(*(int *)(DAT_10122060 + 0xb8) + 0xb8);
      piVar1 = *(int **)(DAT_10122060 + 0xb8);
    }
    return;
  }
  (*DAT_10121efc)(1,s_FlushAliases_has_no_AliasList__1011b108);
  return;
}

