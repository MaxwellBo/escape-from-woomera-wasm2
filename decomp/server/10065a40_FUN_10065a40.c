
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_10065a40(int *param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  
  if (((param_2 != 0) && (*(int *)(param_2 + 0xe4) != 0)) &&
     ((*(byte *)(&DAT_10131e3c + *(int *)(param_2 + 0xe4) * 0xb) & 8) != 0)) {
    iVar1 = (*DAT_10121fac)();
    if (*(int *)(DAT_10122044 + 0x94) + -100 <= iVar1) {
      fVar2 = (float10)(**(code **)(*param_1 + 0x80))(param_2);
      return fVar2;
    }
  }
  return (float10)_DAT_100dd5f8;
}

