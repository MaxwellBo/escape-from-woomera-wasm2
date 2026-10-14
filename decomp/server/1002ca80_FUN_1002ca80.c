
int * __cdecl FUN_1002ca80(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *this;
  
  iVar2 = (*DAT_10121e5c)();
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 + 0x80;
  }
  iVar1 = *(int *)(iVar2 + 0x208);
  if ((iVar1 == 0) || (this = *(int **)(iVar1 + 0x7c), this == (int *)0x0)) {
    this = (int *)(*DAT_10121f04)(iVar1,0xc0);
    if (this == (int *)0x0) {
      this = (int *)0x0;
    }
    else {
      *this = (int)&PTR_FUN_100e251c;
    }
    this[1] = iVar2;
  }
  FUN_1002ca40(this,param_1,param_2);
  *(int *)this[1] = (int)s_env_sprite_101081c0 - *(int *)(DAT_10122044 + 0x98);
  *(undefined4 *)(this[1] + 0x10c) = 0;
  *(undefined4 *)(this[1] + 0x108) = 8;
  if (param_3 != 0) {
    FUN_1002cd00(this);
  }
  return this;
}

