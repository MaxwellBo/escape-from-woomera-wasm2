
void __thiscall
FUN_10094b20(void *this,undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  char local_20 [32];
  
  if ((param_3 != (char *)0x0) && (*param_3 == '!')) {
    iVar1 = FUN_10094a60(this,(int)param_3,local_20);
    if (iVar1 < 0) {
      (*DAT_10121efc)(2,s_Unable_to_find__s_in_sentences_t_10117058,param_3);
      return;
    }
    param_3 = local_20;
  }
  (*DAT_10121e7c)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

