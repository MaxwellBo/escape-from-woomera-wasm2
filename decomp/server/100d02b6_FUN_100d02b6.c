
undefined4 __fastcall FUN_100d02b6(undefined4 param_1,byte *param_2)

{
  char cVar1;
  uint in_EAX;
  undefined4 *puVar2;
  undefined4 *unaff_EBP;
  undefined4 uStack_8;
  
  puVar2 = (undefined4 *)&stack0xfffffffc;
  cVar1 = '\x0f';
  do {
    unaff_EBP = unaff_EBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_EBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  *param_2 = *param_2 << 1 | (char)*param_2 < '\0';
  return CONCAT31((int3)((in_EAX | 0xd02dc10) >> 8),
                  (char)(in_EAX | 0xd02dc10) + (char)((uint)param_2 >> 8));
}

