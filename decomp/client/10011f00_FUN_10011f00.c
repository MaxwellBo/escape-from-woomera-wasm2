
void __fastcall FUN_10011f00(char *param_1)

{
  char *pcVar1;
  FILE *pFVar2;
  int iVar3;
  undefined4 local_204;
  CHAR local_200 [512];
  
  FUN_1004a4b6(local_200,0x200,(byte *)s__s__s_10077928);
  pFVar2 = (FILE *)FUN_1004a4a3(local_200,&DAT_10077930);
  if (pFVar2 != (FILE *)0x0) {
    local_204 = 1;
    FUN_1004a507((char *)&local_204,1,4,(int *)pFVar2);
    iVar3 = 0x100;
    do {
      for (pcVar1 = *(char **)(param_1 + 0x14); pcVar1 != param_1;
          pcVar1 = *(char **)(pcVar1 + 0x14)) {
        FUN_1004a507(pcVar1,1,0x10,(int *)pFVar2);
      }
      param_1 = param_1 + 0x18;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    FUN_1004a0a2(pFVar2);
  }
  return;
}

