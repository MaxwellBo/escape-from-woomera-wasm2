
float10 FUN_10051640(double *param_1)

{
  double dVar1;
  int iVar2;
  int unaff_EBP;
  double *unaff_ESI;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined4 in_FPUDataPointer;
  float10 in_ST0;
  unkbyte10 in_ST1;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  unkbyte10 in_ST4;
  unkbyte10 in_ST5;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  double in_stack_00000000;
  
  *(undefined2 *)(unaff_ESI + 1) = in_FPUControlWord;
  *(undefined2 *)((int)unaff_ESI + 0xc) = in_FPUStatusWord;
  *(undefined2 *)(unaff_ESI + 2) = in_FPUTagWord;
  *(undefined4 *)((int)unaff_ESI + 0x1c) = in_FPUDataPointer;
  *(undefined4 *)((int)unaff_ESI + 0x14) = 0x10051645;
  *(undefined2 *)((int)unaff_ESI + 0x1a) = in_FPULastInstructionOpcode;
  *(unkbyte10 *)((int)unaff_ESI + 0x24) = in_ST1;
  *(unkbyte10 *)((int)unaff_ESI + 0x2e) = in_ST2;
  *(unkbyte10 *)(unaff_ESI + 7) = in_ST3;
  *(unkbyte10 *)((int)unaff_ESI + 0x42) = in_ST4;
  *(unkbyte10 *)((int)unaff_ESI + 0x4c) = in_ST5;
  *(unkbyte10 *)((int)unaff_ESI + 0x56) = in_ST6;
  *(unkbyte10 *)(unaff_ESI + 0xc) = in_ST7;
  *(unkbyte10 *)((int)unaff_ESI + 0x6a) = in_ST7;
  iVar2 = FUN_1005185c(SUB84((double)in_ST0,0),(int)((ulonglong)(double)in_ST0 >> 0x20),
                       in_stack_00000000,param_1);
  dVar1 = *unaff_ESI;
  if (iVar2 != 0) {
    *(undefined1 *)(unaff_EBP + -0x90) = 1;
    return (float10)dVar1;
  }
  return (float10)dVar1;
}

