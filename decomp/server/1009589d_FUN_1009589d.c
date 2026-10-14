
void __fastcall FUN_1009589d(undefined4 param_1,uint param_2)

{
  code *pcVar1;
  uint *in_EAX;
  uint *puVar2;
  
  *in_EAX = *in_EAX | param_2;
  uRama9100957 = SUB41(in_EAX,0);
  *in_EAX = *in_EAX | param_2;
  puVar2 = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),0x57);
  *puVar2 = *puVar2 | param_2;
  *puVar2 = *puVar2 | param_2;
  *puVar2 = *puVar2 | param_2;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

