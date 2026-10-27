
void __fastcall FUN_100954d9(undefined4 param_1,uint param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  uint *in_EAX;
  undefined1 *unaff_EDI;
  uint *puVar3;
  
  uVar2 = in((short)param_2);
  *unaff_EDI = uVar2;
  *in_EAX = *in_EAX | param_2;
  uVar2 = in(0x52);
  puVar3 = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),uVar2);
  *puVar3 = *puVar3 | param_2;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

