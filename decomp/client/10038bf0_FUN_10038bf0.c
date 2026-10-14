
void __fastcall FUN_10038bf0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined1 auStack_100 [256];
  
  iVar1 = FUN_1001f970(*(int *)(*(int *)(param_1 + 4) + 0x108));
  if (iVar1 != 0) {
    uVar2 = (**(code **)(DAT_100a5148 + 0x20))(iVar1,s_address_10078a0c);
    puVar3 = auStack_100;
    pcVar4 = s_connect__s_1007a08c;
    FUN_100499f0(auStack_100,(byte *)s_connect__s_1007a08c);
    (*DAT_100a5040)(auStack_100,puVar3,pcVar4,uVar2);
    (*DAT_100a5040)(s_togglebrowser_1007a07c);
  }
  return;
}

