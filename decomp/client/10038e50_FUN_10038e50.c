
void __thiscall FUN_10038e50(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  char *pcVar6;
  undefined1 auStack_108 [4];
  undefined1 auStack_104 [260];
  
  if (param_2 == 0) {
    piVar1 = (int *)(**(code **)(*param_3 + 0x14c))();
    (**(code **)(*piVar1 + 0x34))(auStack_104,auStack_108);
    (**(code **)(*param_3 + 0x8c))(&stack0xfffffef4,&stack0xfffffef0);
    lVar4 = __ftol();
    *(int *)(*(int *)(param_1 + 4) + 0x108) = (int)lVar4;
    iVar2 = FUN_1001f970(*(int *)(*(int *)(param_1 + 4) + 0x108));
    if (iVar2 != 0) {
      uVar3 = (**(code **)(DAT_100a5148 + 0x20))(iVar2,s_address_10078a0c);
      puVar5 = &stack0xfffffef0;
      pcVar6 = s_connect__s_1007a08c;
      FUN_100499f0(puVar5,(byte *)s_connect__s_1007a08c);
      (*DAT_100a5040)(&stack0xfffffef0,puVar5,pcVar6,uVar3);
      (*DAT_100a5040)(s_togglebrowser_1007a07c);
    }
  }
  return;
}

