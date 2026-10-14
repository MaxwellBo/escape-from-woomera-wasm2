
undefined4 __cdecl FUN_10056e97(uint *param_1,int param_2)

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
  puVar2 = FUN_100570dd(param_1,0x3d);
  if (puVar2 == (uint *)0x0) {
    return 0xffffffff;
  }
  if (param_1 == puVar2) {
    return 0xffffffff;
  }
  bVar8 = *(char *)((int)puVar2 + 1) == '\0';
  if (DAT_100bca20 == DAT_100bca24) {
    DAT_100bca20 = (byte *)FUN_10057076((int *)DAT_100bca20);
  }
  if (DAT_100bca20 == (byte *)0x0) {
    if ((param_2 == 0) || (DAT_100bca28 == (undefined4 *)0x0)) {
      if (bVar8) {
        return 0;
      }
      DAT_100bca20 = _malloc(4);
      if (DAT_100bca20 == (byte *)0x0) {
        return 0xffffffff;
      }
      pbVar4 = DAT_100bca20 + 1;
      pbVar7 = DAT_100bca20 + 2;
      pbVar1 = DAT_100bca20 + 3;
      DAT_100bca20[0] = 0;
      *pbVar4 = 0;
      *pbVar7 = 0;
      *pbVar1 = 0;
      if (DAT_100bca28 == (undefined4 *)0x0) {
        DAT_100bca28 = _malloc(4);
        if (DAT_100bca28 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_100bca28 = 0;
      }
    }
    else {
      iVar3 = FUN_10056b81();
      if (iVar3 != 0) {
        return 0xffffffff;
      }
    }
  }
  pbVar4 = DAT_100bca20;
  iVar3 = FUN_1005701e((uchar *)param_1,(int)puVar2 - (int)param_1);
  if ((iVar3 < 0) || (*(int *)pbVar4 == 0)) {
    if (bVar8) {
      return 0;
    }
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    pbVar4 = FUN_1004cb01(pbVar4,(uint *)(iVar3 * 4 + 8));
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
      goto LAB_10056fcb;
    }
    pbVar7 = pbVar4 + iVar3 * 4;
    FUN_1004ad7e(*(undefined **)(pbVar4 + iVar3 * 4));
    for (; *(int *)pbVar7 != 0; pbVar7 = pbVar7 + 4) {
      iVar3 = iVar3 + 1;
      *(int *)pbVar7 = *(int *)(pbVar7 + 4);
    }
    pbVar4 = FUN_1004cb01(pbVar4,(uint *)(iVar3 << 2));
    if (pbVar4 == (byte *)0x0) goto LAB_10056fcb;
  }
  DAT_100bca20 = pbVar4;
LAB_10056fcb:
  if (param_2 != 0) {
    sVar5 = _strlen((char *)param_1);
    lpName = _malloc(sVar5 + 2);
    if (lpName != (uint *)0x0) {
      FUN_10053680(lpName,param_1);
      puVar6 = (undefined1 *)(((int)lpName - (int)param_1) + (int)puVar2);
      *puVar6 = 0;
      SetEnvironmentVariableA((LPCSTR)lpName,(LPCSTR)(~-(uint)bVar8 & (uint)(puVar6 + 1)));
      FUN_1004ad7e((undefined *)lpName);
    }
  }
  return 0;
}

