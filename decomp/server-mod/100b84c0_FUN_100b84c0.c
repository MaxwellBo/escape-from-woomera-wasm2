
void FUN_100b84c0(void)

{
  undefined4 *puVar1;
  undefined1 local_5;
  undefined1 local_4 [4];
  
  DAT_10132418 = local_5;
  DAT_10132419 = local_5;
  DAT_10132420 = 0;
  puVar1 = operator_new(0x30);
  puVar1[1] = 0;
  puVar1[0xb] = 1;
  FUN_100d9cb0(local_4);
  if (DAT_1013243c == (undefined4 *)0x0) {
    DAT_1013243c = puVar1;
    *puVar1 = 0;
    puVar1 = (undefined4 *)0x0;
    DAT_1013243c[2] = 0;
  }
  DAT_10132438 = DAT_10132438 + 1;
  FUN_100d9d4c();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100c8ce6((undefined *)puVar1);
  }
  puVar1 = DAT_1013243c;
  DAT_1013241c = operator_new(0x30);
  *(undefined4 **)((int)DAT_1013241c + 4) = puVar1;
  *(undefined4 *)((int)DAT_1013241c + 0x2c) = 0;
  DAT_10132424 = 0;
  *(void **)DAT_1013241c = DAT_1013241c;
  *(void **)((int)DAT_1013241c + 8) = DAT_1013241c;
  return;
}

