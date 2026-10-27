
void __cdecl FUN_10023880(uint param_1)

{
  uint uVar1;
  
  uVar1 = FUN_100236c0(0);
  if (((uVar1 ^ param_1) & 1) != 0) {
    if ((param_1 & 1) != 0) {
      FUN_10022c20((int *)&DAT_100a9810);
      return;
    }
    DAT_100a9818 = DAT_100a9818 & 0xfffffff8;
  }
  return;
}

