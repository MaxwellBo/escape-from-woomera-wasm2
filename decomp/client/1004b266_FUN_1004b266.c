
uint __thiscall FUN_1004b266(void *this,int param_1)

{
  uint uVar1;
  
  if (1 < DAT_1007bcf4) {
    uVar1 = FUN_1004b6c6(this,param_1,0x107);
    return uVar1;
  }
  return *(ushort *)(PTR_DAT_1007bae8 + param_1 * 2) & 0x107;
}

