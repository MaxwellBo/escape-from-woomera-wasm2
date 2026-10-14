
void __fastcall FUN_10004d7d(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  char cVar4;
  byte *in_EAX;
  char *pcVar5;
  int iVar8;
  void *this;
  void *extraout_ECX;
  byte bVar9;
  void *unaff_ESI;
  int *unaff_EDI;
  byte in_AF;
  undefined4 unaff_retaddr;
  undefined4 in_stack_00000028;
  int in_stack_0000002c;
  uint uVar6;
  byte *pbVar7;
  
  this = (void *)(param_1 + -1);
  bVar1 = *in_EAX;
  bVar9 = (byte)param_2;
  *in_EAX = *in_EAX + bVar9;
  pcVar5 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),((char)in_EAX + -0x4d) - CARRY1(bVar1,bVar9));
  *pcVar5 = *pcVar5 + bVar9;
  pcVar5 = (char *)((uint)pcVar5 & 0x4010004d);
  *pcVar5 = *pcVar5 + bVar9;
  *pcVar5 = *pcVar5 + bVar9;
  bVar1 = 9 < ((byte)pcVar5 & 0xf) | in_AF;
  uVar6 = CONCAT31((int3)((uint)pcVar5 >> 8),(byte)pcVar5 + bVar1 * '\x06') & 0xffffff0f;
  cVar4 = (char)uVar6;
  pbVar7 = (byte *)CONCAT22((short)(uVar6 >> 0x10),CONCAT11(bVar1,cVar4));
  *pbVar7 = *pbVar7 + bVar9;
  bVar1 = *pbVar7;
  bVar2 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar9;
  if (CARRY1(bVar1,bVar9)) {
    *pbVar7 = *pbVar7 + bVar9;
    *(char *)unaff_EDI = (char)*unaff_EDI + cVar4;
    *unaff_EDI = (int)(pbVar7 + *unaff_EDI);
    iVar8 = CONCAT31((int3)((uint)pbVar7 >> 8),cVar4 + (char)*unaff_EDI) + *unaff_EDI;
    *(char *)((int)unaff_ESI + -0x75) =
         (*(char *)((int)unaff_ESI + -0x75) - bVar9) -
         (0x137c6ff9 < CONCAT31((int3)((uint)iVar8 >> 8),(char)iVar8 + '\a'));
    pcVar3 = (code *)swi(1);
    (*pcVar3)();
    return;
  }
  pcVar3 = (code *)swi(4);
  if (SCARRY1(bVar2,bVar9)) {
    (*pcVar3)();
    this = extraout_ECX;
  }
  FUN_10008450(this,param_2,unaff_retaddr,param_3);
  FUN_10061e00(unaff_ESI,0x10101b10,(undefined4 *)&stack0x00000018,(undefined4 *)&stack0x0000000c);
  FUN_1001ec30(unaff_ESI,in_stack_00000028,in_stack_0000002c);
  return;
}

