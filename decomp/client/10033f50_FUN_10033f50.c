
void __fastcall FUN_10033f50(void *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (*(int *)((int)param_1 + 0xc0) < 1) {
    *(undefined1 *)((int)param_1 + 0xbc) = 0;
    return;
  }
  do {
    iVar3 = 0;
    if (0 < *(int *)((int)param_1 + 0xc4)) {
      do {
        piVar1 = (int *)FUN_10034150(param_1,iVar2,iVar3);
        if ((int *)*piVar1 != (int *)0x0) {
          (**(code **)(*(int *)*piVar1 + 0x10))
                    (*(undefined4 *)(*(int *)((int)param_1 + 0xd8) + iVar2 * 4),
                     *(undefined4 *)(*(int *)((int)param_1 + 0xdc) + iVar3 * 4),
                     *(undefined4 *)(*(int *)((int)param_1 + 0xd0) + iVar2 * 4),
                     *(undefined4 *)(*(int *)((int)param_1 + 0xd4) + iVar3 * 4));
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)((int)param_1 + 0xc4));
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < *(int *)((int)param_1 + 0xc0));
  *(undefined1 *)((int)param_1 + 0xbc) = 0;
  return;
}

