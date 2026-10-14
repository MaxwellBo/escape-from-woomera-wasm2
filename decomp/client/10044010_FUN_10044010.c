
void __cdecl FUN_10044010(undefined4 param_1,undefined4 param_2)

{
  (&DAT_100baf20)[DAT_100bb720 * 2] = param_2;
  *(undefined4 *)(&DAT_100baf24 + DAT_100bb720 * 8) = param_1;
  DAT_100bb720 = DAT_100bb720 + 1;
  return;
}

