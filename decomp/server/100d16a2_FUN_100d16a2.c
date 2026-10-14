
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void __fastcall FUN_100d16a2(undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  DWORD *pDVar3;
  undefined4 unaff_EBX;
  undefined1 *puVar4;
  int unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  *(int *)(iVar1 + -4) = unaff_EBP;
  *(undefined4 *)(iVar1 + -8) = 0xffffffff;
  *(undefined **)(iVar1 + -0xc) = &DAT_100f9888;
  *(undefined4 *)(iVar1 + -0x10) = 0x100cf73c;
  *(void **)(iVar1 + -0x14) = ExceptionList;
  ExceptionList = (void *)(iVar1 + -0x14);
  *(undefined4 *)(iVar1 + -0x18) = param_1;
  *(undefined4 *)(iVar1 + -0x1c) = param_1;
  *(undefined4 *)(iVar1 + -0x20) = unaff_EBX;
  *(undefined4 *)(iVar1 + -0x24) = unaff_ESI;
  puVar4 = (undefined1 *)(iVar1 + -0x28);
  *(undefined4 *)(iVar1 + -0x28) = unaff_EDI;
  *(int *)(iVar1 + -0x1c) = iVar1 + -0x28;
  *(undefined4 *)(iVar1 + -8) = 0;
  *(undefined4 *)(iVar1 + -0x2c) = 0x100d174b;
  pDVar3 = FUN_100cad28();
  if (pDVar3[0x18] != 0) {
    *(undefined4 *)(iVar1 + -8) = 1;
    *(undefined4 *)(iVar1 + -0x2c) = 0x100d175c;
    pDVar3 = FUN_100cad28();
    pcVar2 = (code *)pDVar3[0x18];
    puVar4 = (undefined1 *)(iVar1 + -0x2c);
    *(undefined4 *)(iVar1 + -0x2c) = 0x100d175f;
    (*pcVar2)();
    *(undefined4 *)(iVar1 + -8) = 0;
  }
  *(undefined4 *)(iVar1 + -8) = 0xffffffff;
  *(undefined4 *)(puVar4 + -4) = 0x100d1778;
  FUN_100d5d45();
  return;
}

