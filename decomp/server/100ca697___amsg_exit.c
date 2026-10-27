
/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_101349c8 == 1) || ((DAT_101349c8 == 0 && (DAT_101349cc == 1)))) {
    FUN_100d1e33();
  }
  FUN_100d1e6c(param_1);
  (*(code *)PTR___exit_1011e260)(0xff);
  return;
}

