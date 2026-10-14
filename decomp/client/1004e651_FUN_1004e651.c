
/* WARNING: Instruction at (ram,0x1004e642) overlaps instruction at (ram,0x1004e640)
    */
/* WARNING: Control flow encountered bad instruction data */

void __fastcall FUN_1004e651(int param_1,int param_2)

{
  byte in_AL;
  char unaff_BL;
  undefined4 *unaff_ESI;
  uint uVar1;
  undefined4 *unaff_EDI;
  ushort in_FS;
  bool in_ZF;
  
  if (in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((char)in_AL < -0x10) {
    if (0xef < in_AL) {
                    /* WARNING: Could not recover jumptable at 0x1004e5a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&PTR_caseD_0_1004e670)[-param_1])();
      return;
    }
    for (; param_1 != 0; param_1 = param_1 + -1) {
      *unaff_EDI = *unaff_ESI;
      unaff_ESI = unaff_ESI + -1;
      unaff_EDI = unaff_EDI + -1;
    }
                    /* WARNING: Could not recover jumptable at 0x1004e64a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_1004e597::switchdataD_1004e6c0)[param_2])();
    return;
  }
  uVar1 = (uint)in_FS;
  out(4,0);
  *(char *)(uVar1 + 0xe6a41004) =
       *(char *)(uVar1 + 0xe6a41004) + unaff_BL + (0xef < (byte)(in_AL + 0x30));
  unaff_EDI[param_1 + 7] = *(undefined4 *)(uVar1 + 0x1c + param_1 * 4);
  unaff_EDI[param_1 + 6] = *(undefined4 *)(uVar1 + 0x18 + param_1 * 4);
  unaff_EDI[param_1 + 5] = *(undefined4 *)(uVar1 + 0x14 + param_1 * 4);
  unaff_EDI[param_1 + 4] = *(undefined4 *)(uVar1 + 0x10 + param_1 * 4);
  unaff_EDI[param_1 + 3] = *(undefined4 *)(uVar1 + 0xc + param_1 * 4);
  unaff_EDI[param_1 + 2] = *(undefined4 *)(uVar1 + 8 + param_1 * 4);
  unaff_EDI[param_1 + 1] = *(undefined4 *)(uVar1 + 4 + param_1 * 4);
                    /* WARNING: Could not recover jumptable at 0x1004e6b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&switchD_1004e597::switchdataD_1004e6c0)[param_2])();
  return;
}

