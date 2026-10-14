
void __cdecl FUN_10049adc(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_10049b81();
  if (DAT_100bca40 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_100bca3c = 1;
  DAT_100bca38 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_100be198 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_100be194 - 4), DAT_100be198 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_100be198 <= puVar1);
    }
    FUN_10049b93((undefined4 *)&DAT_100760fc,(undefined4 *)&DAT_10076104);
  }
  FUN_10049b93((undefined4 *)&DAT_10076108,(undefined4 *)&DAT_10076110);
  if (param_3 == 0) {
    DAT_100bca40 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_10049b8a();
  return;
}

