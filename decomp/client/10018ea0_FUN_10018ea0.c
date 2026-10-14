
void FUN_10018ea0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if ((DAT_100a5180 != 0) && (DAT_100a5184 != 0)) {
    uStack_c = *(undefined4 *)(DAT_100a5184 + 0x10);
    uStack_8 = *(undefined4 *)(DAT_100a5184 + 0x14);
    uStack_4 = *(undefined4 *)(DAT_100a5184 + 0x18);
    uStack_18 = DAT_100b6fd8;
    uStack_14 = DAT_100b6fdc;
    uStack_10 = DAT_100b6fe0;
    (*DAT_100a50f4)(param_1,param_2,param_3,param_4,&uStack_c,&uStack_18,param_7,param_8,param_9,
                    param_10,param_11,param_12);
  }
  return;
}

