
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006ca0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  undefined3 extraout_var;
  float fStack_84;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  int iStack_44;
  int iStack_40;
  float fStack_34;
  
  fVar1 = *(float *)(param_1 + 8);
  fVar2 = *(float *)(param_1 + 0xc);
  fStack_84 = *(float *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 4);
  uStack_68 = *(undefined4 *)(param_1 + 0x14);
  uStack_64 = *(undefined4 *)(param_1 + 0x18);
  uStack_60 = *(undefined4 *)(param_1 + 0x1c);
  (*DAT_100a5050)(&uStack_68,&fStack_74,0,0);
  bVar4 = FUN_1001a780(iVar3);
  if (CONCAT31(extraout_var,bVar4) != 0) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      fStack_84 = fStack_84 - _DAT_1005acb4;
    }
    (**(code **)(DAT_100a5140 + 0x2c))();
    (**(code **)(DAT_100a5140 + 0x34))(iVar3 + -1);
    (**(code **)(DAT_100a5140 + 0x38))(2);
    fStack_50 = fStack_74 * _DAT_1005acb0 + fVar1;
    fStack_4c = fVar2 + fStack_70 * _DAT_1005acb0;
    fStack_48 = fStack_84 + fStack_6c * _DAT_1005acb0;
    fStack_5c = fStack_74 * _DAT_1005acac + fVar1;
    fStack_58 = fVar2 + fStack_70 * _DAT_1005acac;
    fStack_54 = fStack_84 + fStack_6c * _DAT_1005acac;
    (**(code **)(DAT_100a5140 + 0x3c))(&fStack_5c,&fStack_50,0,0xffffffff,&iStack_44);
    if (((iStack_44 == 0) && (iStack_40 == 0)) && ((float)_DAT_10059cf0 < fStack_34)) {
      (**(code **)(DAT_100a5140 + 0x40))(5,0);
    }
    (**(code **)(DAT_100a5140 + 0x30))();
  }
  return;
}

