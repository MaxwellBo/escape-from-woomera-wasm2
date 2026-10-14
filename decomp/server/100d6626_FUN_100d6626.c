
int __cdecl FUN_100d6626(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  DWORD *pDVar5;
  undefined4 *puVar6;
  uint uVar7;
  BOOL BVar8;
  DWORD DVar9;
  
  if ((param_2 != 4) && (param_2 != 3)) {
    if ((param_1 == 2) || (((param_1 == 0x15 || (param_1 == 0x16)) || (param_1 == 0xf)))) {
      FUN_100cf6a6(1);
      if (((param_1 == 2) || (param_1 == 0x15)) && (DAT_10134c18 == 0)) {
        BVar8 = SetConsoleCtrlHandler(FUN_100d67a8,1);
        if (BVar8 != 1) {
          DVar9 = GetLastError();
          pDVar5 = FUN_100d3f98();
          *pDVar5 = DVar9;
          FUN_100cf707(1);
          goto LAB_100d675c;
        }
        DAT_10134c18 = 1;
      }
      iVar4 = DAT_10134c14;
      iVar3 = DAT_10134c10;
      iVar2 = DAT_10134c0c;
      iVar1 = DAT_10134c08;
      if (param_1 == 2) {
        DAT_10134c08 = param_2;
        param_2 = iVar1;
      }
      else if (param_1 == 0xf) {
        DAT_10134c14 = param_2;
        param_2 = iVar4;
      }
      else if (param_1 == 0x15) {
        DAT_10134c0c = param_2;
        param_2 = iVar2;
      }
      else if (param_1 == 0x16) {
        DAT_10134c10 = param_2;
        param_2 = iVar3;
      }
      FUN_100cf707(1);
      return param_2;
    }
    if (((param_1 == 8) || (param_1 == 4)) || (param_1 == 0xb)) {
      pDVar5 = FUN_100cad28();
      if ((undefined *)pDVar5[0x14] == &DAT_10120a60) {
        puVar6 = _malloc(DAT_10120ae0);
        pDVar5[0x14] = (DWORD)puVar6;
        if (puVar6 == (undefined4 *)0x0) goto LAB_100d675c;
        FUN_100d0170(puVar6,(undefined4 *)&DAT_10120a60,DAT_10120ae0);
      }
      uVar7 = FUN_100d698c(param_1,pDVar5[0x14]);
      if (uVar7 != 0) {
        iVar1 = *(int *)(uVar7 + 8);
        do {
          if (*(int *)(uVar7 + 4) != param_1) {
            return iVar1;
          }
          *(int *)(uVar7 + 8) = param_2;
          uVar7 = uVar7 + 0xc;
        } while (uVar7 < pDVar5[0x14] + DAT_10120ae4 * 0xc);
        return iVar1;
      }
    }
  }
LAB_100d675c:
  pDVar5 = FUN_100d3f8f();
  *pDVar5 = 0x16;
  return -1;
}

