
undefined4 _adj_fdiv_m32(uint param_1)

{
  undefined4 in_EAX;
  ushort in_FPUStatusWord;
  
  if ((param_1 & 0x7f800000) == 0x7f800000) {
    return in_EAX;
  }
  if ((in_FPUStatusWord & 0x3800) != 0) {
    _adj_fdiv_store();
    return in_EAX;
  }
  _adj_fdiv_store();
  return in_EAX;
}

