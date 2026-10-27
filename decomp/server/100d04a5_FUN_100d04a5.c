
uint * __cdecl FUN_100d04a5(int param_1,uint *param_2)

{
  uint *puVar1;
  byte *pbVar2;
  size_t sVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined4 *puVar8;
  uint local_8c [33];
  size_t local_8;
  
  iVar6 = 0;
  if ((param_1 < 0) || (5 < param_1)) {
    return (uint *)0x0;
  }
  FUN_100cf6a6(0x13);
  DAT_101351c4 = DAT_101351c4 + 1;
  while (DAT_101351c8 != 0) {
    Sleep(1);
  }
  if (param_1 == 0) {
    local_8 = 1;
    param_1 = 0;
    if (param_2 == (uint *)0x0) {
LAB_100d06cb:
      puVar1 = FUN_100d0806();
    }
    else {
      if ((((char)*param_2 == 'L') && (*(char *)((int)param_2 + 1) == 'C')) &&
         (*(char *)((int)param_2 + 2) == '_')) {
        pbVar2 = FUN_100d53b0((byte *)param_2,&DAT_100f9804);
        puVar1 = param_2;
        while (((pbVar2 != (byte *)0x0 && (local_8 = (int)pbVar2 - (int)puVar1, local_8 != 0)) &&
               (*pbVar2 != 0x3b))) {
          param_2 = (uint *)0x1;
          ppuVar7 = &PTR_s_LC_COLLATE_1012092c;
          do {
            iVar6 = _strncmp(*ppuVar7,(char *)puVar1,local_8);
            if ((iVar6 == 0) && (sVar3 = _strlen(*ppuVar7), local_8 == sVar3)) break;
            param_2 = (uint *)((int)param_2 + 1);
            ppuVar7 = ppuVar7 + 3;
          } while ((int)ppuVar7 < 0x1012095d);
          pbVar2 = pbVar2 + 1;
          sVar3 = FUN_100d5370(pbVar2,&DAT_10118090);
          if ((sVar3 == 0) && (*pbVar2 != 0x3b)) break;
          if ((int)param_2 < 6) {
            _strncpy((char *)local_8c,(char *)pbVar2,sVar3);
            *(undefined1 *)((int)local_8c + sVar3) = 0;
            iVar6 = FUN_100d06eb((int)param_2,local_8c);
            if (iVar6 != 0) {
              param_1 = param_1 + 1;
            }
          }
          if ((pbVar2[sVar3] == 0) || (puVar1 = (uint *)(pbVar2 + sVar3 + 1), (byte)*puVar1 == 0))
          goto LAB_100d0635;
          pbVar2 = FUN_100d53b0((byte *)puVar1,&DAT_100f9804);
        }
        FUN_100cf707(0x13);
        puVar1 = (uint *)0x0;
        goto LAB_100d06da;
      }
      puVar4 = FUN_100d08bf(param_2,local_8c,(undefined4 *)0x0,(undefined4 *)0x0);
      puVar1 = (uint *)0x0;
      if (puVar4 != (uint *)0x0) {
        puVar8 = &DAT_10120924;
        do {
          if ((undefined **)puVar8 != &DAT_10120924) {
            iVar5 = _strcmp((char *)local_8c,(char *)*puVar8);
            if ((iVar5 == 0) || (iVar5 = FUN_100d06eb(iVar6,local_8c), iVar5 != 0)) {
              param_1 = param_1 + 1;
            }
            else {
              local_8 = 0;
            }
          }
          puVar8 = puVar8 + 3;
          iVar6 = iVar6 + 1;
        } while ((int)puVar8 < 0x10120961);
        if (local_8 == 0) {
LAB_100d0635:
          if (param_1 != 0) goto LAB_100d06cb;
          puVar1 = (uint *)0x0;
        }
        else {
          puVar1 = FUN_100d0806();
          FUN_100c8cf1(DAT_10120924);
          DAT_10120924 = (undefined *)0x0;
        }
      }
    }
  }
  else if (param_2 == (uint *)0x0) {
    puVar1 = (uint *)(&DAT_10120924)[param_1 * 3];
  }
  else {
    puVar1 = (uint *)FUN_100d06eb(param_1,param_2);
  }
  FUN_100cf707(0x13);
LAB_100d06da:
  DAT_101351c4 = DAT_101351c4 + -1;
  return puVar1;
}

