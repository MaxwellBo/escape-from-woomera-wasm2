
void __cdecl FUN_100c9fe7(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_100ca08c();
  if (DAT_101349b8 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_101349b4 = 1;
  DAT_101349b0 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_10136220 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_1013621c - 4), DAT_10136220 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_10136220 <= puVar1);
    }
    FUN_100ca09e((undefined4 *)&DAT_101010c4,(undefined4 *)&DAT_101010cc);
  }
  FUN_100ca09e((undefined4 *)&DAT_101010d0,(undefined4 *)&DAT_101010d8);
  if (param_3 == 0) {
    DAT_101349b8 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_100ca095();
  return;
}

