
void __fastcall FUN_10084500(void *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *extraout_ECX;
  void *extraout_ECX_00;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *local_4;
  
  if (0 < DAT_10126a3c) {
    local_4 = (byte *)&DAT_10124e34;
    iVar3 = DAT_10126a3c;
    iVar6 = 0;
    do {
      iVar1 = iVar6 + 1;
      iVar5 = iVar1;
      pbVar4 = local_4;
      if (iVar1 < iVar3) {
        do {
          uVar2 = FUN_100d8b20(param_1,local_4,pbVar4 + 0xd);
          param_1 = extraout_ECX;
          if (0 < (int)uVar2) {
            FUN_10084440(iVar6,iVar5);
            param_1 = extraout_ECX_00;
          }
          iVar5 = iVar5 + 1;
          iVar3 = DAT_10126a3c;
          pbVar4 = pbVar4 + 0xd;
        } while (iVar5 < DAT_10126a3c);
      }
      local_4 = local_4 + 0xd;
      iVar6 = iVar1;
    } while (iVar1 < iVar3);
  }
  return;
}

