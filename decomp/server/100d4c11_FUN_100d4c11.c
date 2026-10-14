
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100d4c11(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  
  uVar5 = (uint)DAT_10134bc6;
  if (DAT_10134a68 == 0) {
    FUN_100c8cf1(DAT_10134b94);
    FUN_100c8cf1(DAT_10134b98);
    FUN_100c8cf1(DAT_10134b9c);
    DAT_10134b94 = (undefined *)0x0;
    DAT_10134b98 = (undefined *)0x0;
    DAT_10134b9c = (char *)0x0;
    pvVar4 = _malloc(2);
    *(void **)PTR_PTR_101216d0 = pvVar4;
    if (*(uint **)PTR_PTR_101216d0 != (uint *)0x0) {
      FUN_100d2d10(*(uint **)PTR_PTR_101216d0,(uint *)&DAT_1011c3cc);
      pvVar4 = _malloc(2);
      *(void **)(PTR_PTR_101216d0 + 4) = pvVar4;
      if (*(undefined1 **)(PTR_PTR_101216d0 + 4) != (undefined1 *)0x0) {
        **(undefined1 **)(PTR_PTR_101216d0 + 4) = 0;
        pvVar4 = _malloc(2);
        *(void **)(PTR_PTR_101216d0 + 8) = pvVar4;
        if (*(undefined1 **)(PTR_PTR_101216d0 + 8) != (undefined1 *)0x0) {
          **(undefined1 **)(PTR_PTR_101216d0 + 8) = 0;
          DAT_1011e238 = **(undefined1 **)PTR_PTR_101216d0;
          _DAT_1011e23c = 1;
          return 0;
        }
      }
    }
  }
  else {
    iVar1 = FUN_100d866e(1,uVar5,0xe,(char *)&DAT_10134b94);
    iVar2 = FUN_100d866e(1,uVar5,0xf,(char *)&DAT_10134b98);
    iVar3 = FUN_100d866e(1,uVar5,0x10,(char *)&DAT_10134b9c);
    FUN_100d4de6(DAT_10134b9c);
    if ((iVar1 == 0 && iVar2 == 0) && iVar3 == 0) {
      if (*(undefined **)PTR_PTR_101216d0 != &DAT_10121698) {
        FUN_100c8cf1(*(undefined **)PTR_PTR_101216d0);
        FUN_100c8cf1(*(undefined **)(PTR_PTR_101216d0 + 4));
        FUN_100c8cf1(*(undefined **)(PTR_PTR_101216d0 + 8));
      }
      *(undefined **)PTR_PTR_101216d0 = DAT_10134b94;
      *(undefined **)(PTR_PTR_101216d0 + 4) = DAT_10134b98;
      *(char **)(PTR_PTR_101216d0 + 8) = DAT_10134b9c;
      DAT_1011e238 = **(undefined1 **)PTR_PTR_101216d0;
      _DAT_1011e23c = 1;
      return 0;
    }
    FUN_100c8cf1(DAT_10134b94);
    FUN_100c8cf1(DAT_10134b98);
    FUN_100c8cf1(DAT_10134b9c);
    DAT_10134b94 = (undefined *)0x0;
    DAT_10134b98 = (undefined *)0x0;
    DAT_10134b9c = (char *)0x0;
  }
  return 0xffffffff;
}

