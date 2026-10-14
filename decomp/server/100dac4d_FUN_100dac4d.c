
undefined4 * __thiscall FUN_100dac4d(void *this,int param_1)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined ***)this = &PTR_FUN_100fa590;
  FUN_100dad0e(this,param_1);
  *(undefined4 *)((int)this + 0x34) = 0xffffffff;
  FUN_100db53a((LPCRITICAL_SECTION)((int)this + 0x38));
  iVar1 = DAT_10134e70;
  DAT_10134e70 = DAT_10134e70 + 1;
  if (iVar1 == 0) {
    FUN_100db53a((LPCRITICAL_SECTION)&DAT_10134e38);
  }
  return this;
}

