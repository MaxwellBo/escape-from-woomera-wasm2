
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1003f9f0(int *param_1,int param_2,int param_3,float param_4,uint param_5)

{
  int iVar1;
  
  (*DAT_10121efc)(2,s_CGargantua__TakeDamage_1010d0c4);
  iVar1 = (**(code **)(*param_1 + 0xb8))();
  if (iVar1 != 0) {
    if ((param_5 & 0x800441) == 0) {
      param_4 = param_4 * (float)_DAT_100dfb88;
    }
    if ((param_5 & 0x40) != 0) {
      param_1[0x57] = param_1[0x57] | 0x100;
    }
  }
  FUN_1001f350(param_1,param_2,param_3,param_4,param_5);
  return;
}

