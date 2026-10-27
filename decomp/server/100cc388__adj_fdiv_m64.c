
undefined4 _adj_fdiv_m64(undefined4 param_1,uint param_2)

{
  undefined4 in_EAX;
  ushort in_FPUStatusWord;
  
  if ((param_2 & 0x7ff00000) == 0x7ff00000) {
    return in_EAX;
  }
  if ((in_FPUStatusWord & 0x3800) != 0) {
    _adj_fdiv_store();
    return in_EAX;
  }
  _adj_fdiv_store();
  return in_EAX;
}

