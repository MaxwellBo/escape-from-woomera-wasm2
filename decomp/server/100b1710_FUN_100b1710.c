
void __thiscall FUN_100b1710(void *this,undefined4 param_1,byte *param_2,undefined4 *param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar2 = (char *)(*DAT_10121f44)(*param_3);
  if (pcVar2 == (char *)0x0) {
    (*DAT_10121efc)(4,s_Member___s__of___s__contains_an_i_1011b280,param_2,param_1,*param_3);
    return;
  }
  uVar3 = 0xffffffff;
  pcVar4 = pcVar2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_100b1c20(this,param_2,~uVar3,(undefined4 *)pcVar2);
  return;
}

