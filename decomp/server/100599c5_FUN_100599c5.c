
void __thiscall FUN_100599c5(char param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  uint in_EAX;
  int iVar3;
  undefined4 *puVar4;
  int unaff_EBX;
  char unaff_SI;
  uint unaff_EDI;
  
  pcVar1 = (char *)(unaff_EDI + 0x9e325c15 + unaff_EBX * 4);
  *pcVar1 = *pcVar1 + param_1 + unaff_SI + '\x05' + (0xfa68b5ef < in_EAX) + (0xfa67b3ef < unaff_EDI)
  ;
  if ((param_2 == 0) && (iVar3 = (*DAT_10121e5c)(), iVar3 != 0)) {
    param_2 = iVar3 + 0x80;
  }
  iVar3 = *(int *)(param_2 + 0x208);
  if (((iVar3 == 0) || (iVar2 = iRam00000004, *(int *)(iVar3 + 0x7c) == 0)) &&
     (puVar4 = (undefined4 *)(*DAT_10121f04)(iVar3,0xb8), iVar2 = param_2,
     puVar4 != (undefined4 *)0x0)) {
    *puVar4 = &PTR_FUN_100eaed0;
    puVar4[1] = param_2;
    return;
  }
  iRam00000004 = iVar2;
  return;
}

