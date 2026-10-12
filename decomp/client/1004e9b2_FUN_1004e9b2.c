
int __cdecl FUN_1004e9b2(DWORD param_1,char *param_2,uint param_3)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  BOOL BVar6;
  DWORD *pDVar7;
  char local_418 [1028];
  int local_14;
  DWORD local_10;
  DWORD local_c;
  char *local_8;
  
  local_c = 0;
  local_14 = 0;
  if (param_3 == 0) {
LAB_1004e9cb:
    iVar4 = 0;
  }
  else {
    piVar1 = &DAT_100bd060 + ((int)param_1 >> 5);
    iVar4 = (param_1 & 0x1f) * 0x24;
    if ((*(byte *)(*piVar1 + 4 + iVar4) & 0x20) != 0) {
      FUN_1004e04b(param_1,0,2);
    }
    if ((*(byte *)((undefined4 *)(*piVar1 + iVar4) + 1) & 0x80) == 0) {
      BVar6 = WriteFile(*(HANDLE *)(*piVar1 + iVar4),param_2,param_3,&local_10,(LPOVERLAPPED)0x0);
      if (BVar6 == 0) {
        param_1 = GetLastError();
      }
      else {
        local_c = local_10;
        param_1 = 0;
      }
LAB_1004ea9a:
      if (local_c != 0) {
        return local_c - local_14;
      }
      if (param_1 == 0) goto LAB_1004eb0c;
      if (param_1 == 5) {
        pDVar7 = FUN_1004ddc4();
        *pDVar7 = 9;
        pDVar7 = FUN_1004ddcd();
        *pDVar7 = 5;
      }
      else {
        FUN_1004dd51(param_1);
      }
    }
    else {
      local_8 = param_2;
      param_1 = 0;
      if (param_3 != 0) {
        do {
          pcVar5 = local_418;
          do {
            if (param_3 <= (uint)((int)local_8 - (int)param_2)) break;
            pcVar2 = local_8 + 1;
            cVar3 = *local_8;
            local_8 = pcVar2;
            if (cVar3 == '\n') {
              local_14 = local_14 + 1;
              *pcVar5 = '\r';
              pcVar5 = pcVar5 + 1;
            }
            *pcVar5 = cVar3;
            pcVar5 = pcVar5 + 1;
          } while ((int)pcVar5 - (int)local_418 < 0x400);
          BVar6 = WriteFile(*(HANDLE *)(*piVar1 + iVar4),local_418,(int)pcVar5 - (int)local_418,
                            &local_10,(LPOVERLAPPED)0x0);
          if (BVar6 == 0) {
            param_1 = GetLastError();
            goto LAB_1004ea9a;
          }
          local_c = local_c + local_10;
          if (((int)local_10 < (int)pcVar5 - (int)local_418) ||
             (param_3 <= (uint)((int)local_8 - (int)param_2))) goto LAB_1004ea9a;
        } while( true );
      }
LAB_1004eb0c:
      if (((*(byte *)(*piVar1 + 4 + iVar4) & 0x40) != 0) && (*param_2 == '\x1a')) goto LAB_1004e9cb;
      pDVar7 = FUN_1004ddc4();
      *pDVar7 = 0x1c;
      pDVar7 = FUN_1004ddcd();
      *pDVar7 = 0;
    }
    iVar4 = -1;
  }
  return iVar4;
}

