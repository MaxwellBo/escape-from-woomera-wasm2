
/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_100bca6c == 1) || ((DAT_100bca6c == 0 && (DAT_100bca70 == 1)))) {
    FUN_10052cd2();
  }
  FUN_10052d0b(param_1);
  (*(code *)PTR___exit_1007bd20)(0xff);
  return;
}

