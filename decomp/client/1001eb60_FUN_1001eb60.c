
byte FUN_1001eb60(int param_1,byte param_2)

{
  if ((param_2 & 4) != 0) {
    return 3;
  }
  if ((param_2 & 2) != 0) {
    return 2;
  }
  if (param_1 < 1) {
    return param_2 & 1;
  }
  if (param_1 < 10) {
    return 1;
  }
  return (99 < param_1) + 2;
}

