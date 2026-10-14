
void __fastcall FUN_100dac95(undefined4 *param_1)

{
  param_1[0xd] = 0xffffffff;
  *param_1 = &PTR_FUN_100fa590;
  DAT_10134e70 = DAT_10134e70 + -1;
  if (DAT_10134e70 == 0) {
    FUN_100db545((LPCRITICAL_SECTION)&DAT_10134e38);
  }
  FUN_100db545((LPCRITICAL_SECTION)(param_1 + 0xe));
  if ((param_1[7] != 0) && ((undefined4 *)param_1[1] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  param_1[1] = 0;
  param_1[2] = 4;
  return;
}

