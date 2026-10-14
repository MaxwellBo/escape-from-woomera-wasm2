
undefined4 __cdecl FUN_100d99a7(uint *param_1,int param_2)

{
  byte *pbVar1;
  uint *puVar2;
  int iVar3;
  byte *pbVar4;
  size_t sVar5;
  uint *lpName;
  undefined1 *puVar6;
  byte *pbVar7;
  bool bVar8;
  
  if (param_1 == (uint *)0x0) {
    return 0xffffffff;
  }
  puVar2 = FUN_100d9bed(param_1,0x3d);
  if (puVar2 == (uint *)0x0) {
    return 0xffffffff;
  }
  if (param_1 == puVar2) {
    return 0xffffffff;
  }
  bVar8 = *(char *)((int)puVar2 + 1) == '\0';
  if (DAT_10134998 == DAT_1013499c) {
    DAT_10134998 = (byte *)FUN_100d9b86((int *)DAT_10134998);
  }
  if (DAT_10134998 == (byte *)0x0) {
    if ((param_2 == 0) || (DAT_101349a0 == (undefined4 *)0x0)) {
      if (bVar8) {
        return 0;
      }
      DAT_10134998 = _malloc(4);
      if (DAT_10134998 == (byte *)0x0) {
        return 0xffffffff;
      }
      pbVar4 = DAT_10134998 + 1;
      pbVar7 = DAT_10134998 + 2;
      pbVar1 = DAT_10134998 + 3;
      DAT_10134998[0] = 0;
      *pbVar4 = 0;
      *pbVar7 = 0;
      *pbVar1 = 0;
      if (DAT_101349a0 == (undefined4 *)0x0) {
        DAT_101349a0 = _malloc(4);
        if (DAT_101349a0 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_101349a0 = 0;
      }
    }
    else {
      iVar3 = FUN_100d9691();
      if (iVar3 != 0) {
        return 0xffffffff;
      }
    }
  }
  pbVar4 = DAT_10134998;
  iVar3 = FUN_100d9b2e((uchar *)param_1,(int)puVar2 - (int)param_1);
  if ((iVar3 < 0) || (*(int *)pbVar4 == 0)) {
    if (bVar8) {
      return 0;
    }
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    pbVar4 = FUN_100ca1f2(pbVar4,(uint *)(iVar3 * 4 + 8));
    if (pbVar4 == (byte *)0x0) {
      return 0xffffffff;
    }
    *(uint **)(pbVar4 + iVar3 * 4) = param_1;
    pbVar7 = pbVar4 + iVar3 * 4 + 4;
    pbVar7[0] = 0;
    pbVar7[1] = 0;
    pbVar7[2] = 0;
    pbVar7[3] = 0;
  }
  else {
    if (!bVar8) {
      *(uint **)(pbVar4 + iVar3 * 4) = param_1;
      goto LAB_100d9adb;
    }
    pbVar7 = pbVar4 + iVar3 * 4;
    FUN_100c8cf1(*(undefined **)(pbVar4 + iVar3 * 4));
    for (; *(int *)pbVar7 != 0; pbVar7 = pbVar7 + 4) {
      iVar3 = iVar3 + 1;
      *(int *)pbVar7 = *(int *)(pbVar7 + 4);
    }
    pbVar4 = FUN_100ca1f2(pbVar4,(uint *)(iVar3 << 2));
    if (pbVar4 == (byte *)0x0) goto LAB_100d9adb;
  }
  DAT_10134998 = pbVar4;
LAB_100d9adb:
  if (param_2 != 0) {
    sVar5 = _strlen((char *)param_1);
    lpName = _malloc(sVar5 + 2);
    if (lpName != (uint *)0x0) {
      FUN_100d2d10(lpName,param_1);
      puVar6 = (undefined1 *)(((int)lpName - (int)param_1) + (int)puVar2);
      *puVar6 = 0;
      SetEnvironmentVariableA((LPCSTR)lpName,(LPCSTR)(~-(uint)bVar8 & (uint)(puVar6 + 1)));
      FUN_100c8cf1((undefined *)lpName);
    }
  }
  return 0;
}

