
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_10026200(void)

{
  longlong lVar1;
  
  lVar1 = __ftol();
  return (float10)((uint)lVar1 & 0xffff) * (float10)_DAT_100601d0;
}

