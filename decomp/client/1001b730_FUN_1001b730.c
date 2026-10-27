
void FUN_1001b730(uint param_1,undefined4 *param_2)

{
  int iVar1;
  
  param_2[2] = 0xff;
  param_2[1] = 0xff;
  *param_2 = 0xff;
  if ((-1 < (int)param_1) && (param_1 < 0x41)) {
    iVar1 = (int)*(short *)((int)&DAT_100b600c + param_1 * 0x18 + 2);
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    iVar1 = iVar1 % DAT_1007a098;
    *param_2 = (&DAT_1007a09c)[iVar1 * 3];
    param_2[1] = (&DAT_1007a0a0)[iVar1 * 3];
    param_2[2] = (&DAT_1007a0a4)[iVar1 * 3];
  }
  return;
}

