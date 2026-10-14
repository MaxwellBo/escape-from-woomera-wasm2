
byte FUN_1004f410(void)

{
  byte in_AL;
  byte bVar1;
  char in_SF;
  char in_OF;
  
  if (in_OF == in_SF) {
    return in_AL | 0xe8;
  }
  bVar1 = FUN_1004f080();
  return bVar1;
}

