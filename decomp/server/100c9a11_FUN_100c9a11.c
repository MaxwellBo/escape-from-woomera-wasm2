
void FUN_100c9a11(void)

{
  int extraout_ECX;
  int extraout_EDX;
  int unaff_ESI;
  int unaff_EDI;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined1 auStack_3 [3];
  
  uVar1 = 0x100c;
  func_0x9a4c100c();
  uVar2 = 0x100c;
  uVar3 = 0x100c;
  func_0x9a5c100c(uVar1,auStack_3);
  func_0x9a77100c(CONCAT22(uVar3,uVar2));
  *(undefined4 *)(unaff_EDI + 0x1c + extraout_ECX * 4) =
       *(undefined4 *)(unaff_ESI + 0x1c + extraout_ECX * 4);
  *(undefined4 *)(unaff_EDI + 0x18 + extraout_ECX * 4) =
       *(undefined4 *)(unaff_ESI + 0x18 + extraout_ECX * 4);
  *(undefined4 *)(unaff_EDI + 0x14 + extraout_ECX * 4) =
       *(undefined4 *)(unaff_ESI + 0x14 + extraout_ECX * 4);
  *(undefined4 *)(unaff_EDI + 0x10 + extraout_ECX * 4) =
       *(undefined4 *)(unaff_ESI + 0x10 + extraout_ECX * 4);
  *(undefined4 *)(unaff_EDI + 0xc + extraout_ECX * 4) =
       *(undefined4 *)(unaff_ESI + 0xc + extraout_ECX * 4);
  *(undefined4 *)(unaff_EDI + 8 + extraout_ECX * 4) =
       *(undefined4 *)(unaff_ESI + 8 + extraout_ECX * 4);
  *(undefined4 *)(unaff_EDI + 4 + extraout_ECX * 4) =
       *(undefined4 *)(unaff_ESI + 4 + extraout_ECX * 4);
                    /* WARNING: Could not recover jumptable at 0x100c9a77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&switchD_100c9957::switchdataD_100c9a80)[extraout_EDX])();
  return;
}

