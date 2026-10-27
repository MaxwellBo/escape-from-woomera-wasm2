
void FUN_100c3180(void)

{
  undefined4 *puVar1;
  undefined1 local_5;
  undefined1 local_4 [4];
  
  DAT_10132c80 = local_5;
  DAT_10132c81 = local_5;
  DAT_10132c88 = 0;
  puVar1 = operator_new(0x24);
  puVar1[1] = 0;
  puVar1[8] = 1;
  FUN_100d9cb0(local_4);
  if (DAT_10132c78 == (undefined4 *)0x0) {
    DAT_10132c78 = puVar1;
    *puVar1 = 0;
    puVar1 = (undefined4 *)0x0;
    DAT_10132c78[2] = 0;
  }
  DAT_10132c74 = DAT_10132c74 + 1;
  FUN_100d9d4c();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100c8ce6((undefined *)puVar1);
  }
  puVar1 = DAT_10132c78;
  DAT_10132c84 = operator_new(0x24);
  *(undefined4 **)((int)DAT_10132c84 + 4) = puVar1;
  *(undefined4 *)((int)DAT_10132c84 + 0x20) = 0;
  DAT_10132c8c = 0;
  *(void **)DAT_10132c84 = DAT_10132c84;
  *(void **)((int)DAT_10132c84 + 8) = DAT_10132c84;
  return;
}

