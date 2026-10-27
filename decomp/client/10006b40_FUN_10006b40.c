
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006b40(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_44 [16];
  float fStack_34;
  
  fStack_8c = *(float *)(param_1 + 8);
  fStack_88 = *(float *)(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + 4);
  fStack_84 = *(float *)(param_1 + 0x10);
  uStack_50 = *(undefined4 *)(param_1 + 0x14);
  uStack_4c = *(undefined4 *)(param_1 + 0x18);
  uStack_48 = *(undefined4 *)(param_1 + 0x1c);
  (*DAT_100a5050)(&uStack_50,&fStack_68,0,0);
  bVar2 = FUN_1001a780(iVar1);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    (**(code **)(DAT_100a5140 + 0x18))(&fStack_74);
    fStack_8c = fStack_74 + fStack_8c;
    fStack_88 = fStack_88 + fStack_70;
    fStack_84 = fStack_84 + fStack_6c;
    fStack_80 = fStack_8c;
    fStack_7c = fStack_88;
    fStack_78 = fStack_84;
    (**(code **)(DAT_100a5140 + 0x2c))();
    (**(code **)(DAT_100a5140 + 0x34))(iVar1 + -1);
    (**(code **)(DAT_100a5140 + 0x38))(2);
    fStack_7c = fStack_64 * _DAT_1005aca8;
    fStack_78 = fStack_60 * _DAT_1005aca8;
    fStack_5c = fStack_68 * _DAT_1005aca8 + fStack_8c;
    fStack_58 = fStack_88 + fStack_7c;
    fStack_54 = fStack_84 + fStack_78;
    (**(code **)(DAT_100a5140 + 0x3c))(&fStack_8c,&fStack_5c,0,0xffffffff,auStack_44);
    if (fStack_34 < (float)_DAT_10059a10) {
      (**(code **)(DAT_100a5140 + 0x40))(6,0);
    }
    (**(code **)(DAT_100a5140 + 0x30))();
  }
  return;
}

