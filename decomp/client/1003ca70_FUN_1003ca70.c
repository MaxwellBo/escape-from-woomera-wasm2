
void __fastcall FUN_1003ca70(void *param_1)

{
  if (*(int *)((int)param_1 + 0xc4) != 0) {
    if ((DAT_100b6620 != 9) && (DAT_100b6620 != 8)) {
      (*DAT_100a5040)(s__special_1007a6c8);
      return;
    }
    FUN_1003c8b0(param_1);
    if (*(void **)((int)param_1 + 0x208) != (void *)0x0) {
      FUN_10038f90(*(void **)((int)param_1 + 0x208),0x37);
    }
  }
  return;
}

