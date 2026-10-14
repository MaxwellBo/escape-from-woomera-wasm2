
void __fastcall FUN_1004a7e9(int param_1,int param_2)

{
  char *pcVar1;
  int in_EAX;
  char unaff_BH;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  
  pcVar1 = (char *)(in_EAX + unaff_EBP * 4);
  *pcVar1 = *pcVar1 + unaff_BH;
  *(undefined4 *)(unaff_EDI + -0x1d + param_1 * 4) =
       *(undefined4 *)(unaff_ESI + -0x1c + param_1 * 4);
  *(undefined4 *)(unaff_EDI + -0x19 + param_1 * 4) =
       *(undefined4 *)(unaff_ESI + -0x18 + param_1 * 4);
  *(undefined4 *)(unaff_EDI + -0x15 + param_1 * 4) =
       *(undefined4 *)(unaff_ESI + -0x14 + param_1 * 4);
  *(undefined4 *)(unaff_EDI + -0x11 + param_1 * 4) =
       *(undefined4 *)(unaff_ESI + -0x10 + param_1 * 4);
  *(undefined4 *)(unaff_EDI + -0xd + param_1 * 4) = *(undefined4 *)(unaff_ESI + -0xc + param_1 * 4);
  *(undefined4 *)(unaff_EDI + -9 + param_1 * 4) = *(undefined4 *)(unaff_ESI + -8 + param_1 * 4);
  *(undefined4 *)(unaff_EDI + -5 + param_1 * 4) = *(undefined4 *)(unaff_ESI + -4 + param_1 * 4);
                    /* WARNING: Could not recover jumptable at 0x1004a84f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&switchD_1004a745::switchdataD_1004a858)[param_2])();
  return;
}

