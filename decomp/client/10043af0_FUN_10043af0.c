
void __cdecl
FUN_10043af0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6,
            undefined4 param_7,undefined4 param_8,int param_9)

{
  int iVar1;
  
  (*DAT_100a501c)(param_1,param_2,param_3,param_9,param_5,param_6,param_7,param_8);
  (*DAT_100a501c)(param_1,(param_2 - param_9) + param_4,param_3,param_9,param_5,param_6,param_7,
                  param_8);
  iVar1 = param_4 + param_9 * -2;
  (*DAT_100a501c)(param_1,param_2 + param_9,param_9,iVar1,param_5,param_6,param_7,param_8);
  (*DAT_100a501c)((param_1 - param_9) + param_3,param_2 + param_9,param_9,iVar1,param_5,param_6,
                  param_7,param_8);
  return;
}

