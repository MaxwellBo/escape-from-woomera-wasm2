
void __fastcall FUN_1007f0e0(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  if ((DAT_10122780 != 0) && (DAT_10122784 == 0)) {
    iVar1 = FUN_1006f2c0(0x10122780);
    if (iVar1 == 0) {
      pcVar2 = s___Graph_pointers_were_not_set__10114f58;
    }
    else {
      pcVar2 = s___Graph_Pointers_Set__10114f40;
    }
    (*DAT_10121efc)(1,pcVar2);
  }
  *(undefined4 *)(param_1 + 0x4a0) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x4a8) = 1000;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 0x4c8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4fc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4d4) = 0xc0;
  FUN_1007af20();
  *(undefined4 *)(param_1 + 0x4f4) = 5;
  if (DAT_101144d8 != 0) {
    *(undefined4 *)(param_1 + 0x4cc) = 1;
  }
  return;
}

