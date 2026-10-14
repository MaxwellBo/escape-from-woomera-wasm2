
byte FUN_100cc0f0(void)

{
  byte in_AL;
  byte bVar1;
  char in_SF;
  char in_OF;
  
  if (in_OF == in_SF) {
    return in_AL | 0xe8;
  }
  bVar1 = FUN_100cbd60();
  return bVar1;
}

