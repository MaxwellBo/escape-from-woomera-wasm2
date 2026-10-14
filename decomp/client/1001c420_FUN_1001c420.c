
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_1001c420(void)

{
  int iVar1;
  
  iVar1 = (*(code *)*DAT_100a5144)();
  if (iVar1 != 0) {
    FUN_10019870();
  }
  iVar1 = (*(code *)DAT_100a5144[1])();
  if (iVar1 != 0) {
    DAT_100a9588 = _DAT_100a549c;
    return (float10)_DAT_100a549c;
  }
  return (float10)DAT_100a9588;
}

