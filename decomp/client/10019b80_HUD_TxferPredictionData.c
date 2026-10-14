
void __cdecl
HUD_TxferPredictionData
          (int param_1,int param_2,int param_3,int param_4,undefined4 *param_5,undefined4 *param_6)

{
  int iVar1;
  
                    /* 0x19b80  500  HUD_TxferPredictionData */
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_4 + 0x18);
  *(undefined4 *)(param_3 + 0x68) = *(undefined4 *)(param_4 + 0x68);
  *(undefined4 *)(param_3 + 0x6c) = *(undefined4 *)(param_4 + 0x6c);
  *(undefined4 *)(param_3 + 0x70) = *(undefined4 *)(param_4 + 0x70);
  *(undefined4 *)(param_3 + 0x74) = *(undefined4 *)(param_4 + 0x74);
  *(undefined4 *)(param_3 + 0x78) = *(undefined4 *)(param_4 + 0x78);
  *(undefined4 *)(param_3 + 0x7c) = *(undefined4 *)(param_4 + 0x7c);
  *(undefined4 *)(param_3 + 0x60) = *(undefined4 *)(param_4 + 0x60);
  *(undefined4 *)(param_3 + 100) = *(undefined4 *)(param_4 + 100);
  *(undefined4 *)(param_3 + 0x80) = *(undefined4 *)(param_4 + 0x80);
  *(undefined4 *)(param_3 + 0x5c) = *(undefined4 *)(param_4 + 0x5c);
  iVar1 = *(int *)(param_4 + 0x88);
  *(int *)(param_3 + 0x88) = iVar1;
  if ((*(int *)(param_4 + 0x18c) != 0) || (DAT_10078530 = 0, iVar1 == 0)) {
    DAT_10078530 = 1;
  }
  *(undefined4 *)(param_3 + 0x18c) = *(undefined4 *)(param_4 + 0x18c);
  *(undefined4 *)(param_3 + 400) = *(undefined4 *)(param_4 + 400);
  *(undefined4 *)(param_3 + 0x194) = *(undefined4 *)(param_4 + 0x194);
  iVar1 = (*DAT_100a5150)();
  if (iVar1 != 0) {
    *(undefined4 *)(param_3 + 0x18c) = DAT_100b6724;
    *(undefined4 *)(param_3 + 400) = DAT_100b672c;
    *(undefined4 *)(param_3 + 0x194) = DAT_100b6728;
  }
  *(undefined4 *)(param_3 + 0x198) = *(undefined4 *)(param_4 + 0x198);
  *(undefined4 *)(param_3 + 0x1a0) = *(undefined4 *)(param_4 + 0x1a0);
  *(undefined4 *)(param_3 + 0x1a4) = *(undefined4 *)(param_4 + 0x1a4);
  *(undefined4 *)(param_3 + 0x1ac) = *(undefined4 *)(param_4 + 0x1ac);
  *(undefined4 *)(param_3 + 0x1b0) = *(undefined4 *)(param_4 + 0x1b0);
  *(undefined4 *)(param_3 + 0x1b4) = *(undefined4 *)(param_4 + 0x1b4);
  *(undefined4 *)(param_3 + 0x1b8) = *(undefined4 *)(param_4 + 0x1b8);
  *(undefined4 *)(param_3 + 0x1bc) = *(undefined4 *)(param_4 + 0x1bc);
  *(undefined4 *)(param_3 + 0x1c0) = *(undefined4 *)(param_4 + 0x1c0);
  *(undefined4 *)(param_3 + 0x1c4) = *(undefined4 *)(param_4 + 0x1c4);
  *(undefined4 *)(param_3 + 0x1c8) = *(undefined4 *)(param_4 + 0x1c8);
  *(undefined4 *)(param_3 + 0x1cc) = *(undefined4 *)(param_4 + 0x1cc);
  *(undefined4 *)(param_3 + 0x1d0) = *(undefined4 *)(param_4 + 0x1d0);
  *(undefined4 *)(param_3 + 0x1d4) = *(undefined4 *)(param_4 + 0x1d4);
  *(undefined4 *)(param_3 + 0x1d8) = *(undefined4 *)(param_4 + 0x1d8);
  for (iVar1 = 0x2c0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_5 = *param_6;
    param_6 = param_6 + 1;
    param_5 = param_5 + 1;
  }
  return;
}

