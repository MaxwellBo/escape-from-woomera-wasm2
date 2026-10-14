
/* WARNING: This function may have set the stack pointer */

void __fastcall FUN_1004a981(int param_1,int param_2)

{
  byte bVar1;
  undefined4 in_EAX;
  undefined1 *unaff_ESI;
  undefined1 *unaff_EDI;
  
  *unaff_EDI = *unaff_ESI;
  bVar1 = (char)in_EAX + 0x30;
  out(0xa9,CONCAT31((int3)(CONCAT22((short)((uint)in_EAX >> 0x10),CONCAT11(bVar1 / 0xa9,bVar1)) >> 8
                          ),bVar1 % 0xa9 + 0x10));
  *(undefined4 *)(unaff_EDI + param_1 * 4 + 0x1d) = *(undefined4 *)(unaff_ESI + param_1 * 4 + 0x1d);
  *(undefined4 *)(unaff_EDI + param_1 * 4 + 0x19) = *(undefined4 *)(unaff_ESI + param_1 * 4 + 0x19);
  *(undefined4 *)(unaff_EDI + param_1 * 4 + 0x15) = *(undefined4 *)(unaff_ESI + param_1 * 4 + 0x15);
  *(undefined4 *)(unaff_EDI + param_1 * 4 + 0x11) = *(undefined4 *)(unaff_ESI + param_1 * 4 + 0x11);
  *(undefined4 *)(unaff_EDI + param_1 * 4 + 0xd) = *(undefined4 *)(unaff_ESI + param_1 * 4 + 0xd);
  *(undefined4 *)(unaff_EDI + param_1 * 4 + 9) = *(undefined4 *)(unaff_ESI + param_1 * 4 + 9);
  *(undefined4 *)(unaff_EDI + param_1 * 4 + 5) = *(undefined4 *)(unaff_ESI + param_1 * 4 + 5);
                    /* WARNING: Could not recover jumptable at 0x1004a9e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&switchD_1004a8c7::switchdataD_1004a9f0)[param_2])();
  return;
}

