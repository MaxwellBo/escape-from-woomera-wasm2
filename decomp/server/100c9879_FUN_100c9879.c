
void __fastcall FUN_100c9879(int param_1,int param_2)

{
  int in_EAX;
  int unaff_ESI;
  undefined1 *unaff_EDI;
  float10 in_ST0;
  
  *(short *)(in_EAX + -0x6733eff4) = (short)ROUND(in_ST0);
  *unaff_EDI = *(undefined1 *)(unaff_ESI + 1);
  *(undefined4 *)(unaff_EDI + param_1 * 4 + -0x1b) =
       *(undefined4 *)(unaff_ESI + -0x1a + param_1 * 4);
  *(undefined4 *)(unaff_EDI + param_1 * 4 + -0x17) =
       *(undefined4 *)(unaff_ESI + -0x16 + param_1 * 4);
  *(undefined4 *)(unaff_EDI + param_1 * 4 + -0x13) =
       *(undefined4 *)(unaff_ESI + -0x12 + param_1 * 4);
  *(undefined4 *)(unaff_EDI + param_1 * 4 + -0xf) = *(undefined4 *)(unaff_ESI + -0xe + param_1 * 4);
  *(undefined4 *)(unaff_EDI + param_1 * 4 + -0xb) = *(undefined4 *)(unaff_ESI + -10 + param_1 * 4);
  *(undefined4 *)(unaff_EDI + param_1 * 4 + -7) = *(undefined4 *)(unaff_ESI + -6 + param_1 * 4);
  *(undefined4 *)(unaff_EDI + param_1 * 4 + -3) = *(undefined4 *)(unaff_ESI + -2 + param_1 * 4);
                    /* WARNING: Could not recover jumptable at 0x100c98df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&switchD_100c97d5::switchdataD_100c98e8)[param_2])();
  return;
}

