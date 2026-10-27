
char * __fastcall FUN_10006f16(undefined4 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  char *in_EAX;
  undefined4 *unaff_EDI;
  bool in_CF;
  bool in_ZF;
  
  if (in_CF || in_ZF) {
    *in_EAX = *in_EAX + (char)param_2;
    uVar1 = in(param_2);
    *unaff_EDI = uVar1;
    *in_EAX = *in_EAX + (char)param_2;
    return in_EAX;
  }
  return (char *)((uint)in_EAX | 0x47e8910);
}

