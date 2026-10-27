
undefined4 _adj_fdiv_m16i(void)

{
  undefined4 in_EAX;
  ushort in_FPUStatusWord;
  
  if ((in_FPUStatusWord & 0x3800) != 0) {
    _adj_fdiv_store();
    return in_EAX;
  }
  _adj_fdiv_store();
  return in_EAX;
}

