
void __cdecl
FUN_1001d750(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_9 != 0) {
    uVar1 = (*DAT_100a50e8)(param_9);
    (**(code **)(DAT_100a5138 + 4))(0);
    (**(code **)(DAT_100a5138 + 0x2c))(uVar1,0);
    (**(code **)(DAT_100a5138 + 0x28))(1);
    (**(code **)(DAT_100a5138 + 0x10))(param_5,param_6,param_7,0x3f800000);
    (**(code **)(DAT_100a5138 + 8))(2);
    (**(code **)(DAT_100a5138 + 0x18))(0,0);
    (**(code **)(DAT_100a5138 + 0x20))(param_1,param_2,0x3f000000);
    (**(code **)(DAT_100a5138 + 0x18))(0x3f800000,0);
    (**(code **)(DAT_100a5138 + 0x20))(param_3,param_2,0x3f000000);
    (**(code **)(DAT_100a5138 + 0x18))(0x3f800000,0x3f800000);
    (**(code **)(DAT_100a5138 + 0x20))(param_3,param_4,0x3f000000);
    (**(code **)(DAT_100a5138 + 0x18))(0,0x3f800000);
    (**(code **)(DAT_100a5138 + 0x20))(param_1,param_4,0x3f000000);
    (**(code **)(DAT_100a5138 + 0xc))();
    return;
  }
  iVar2 = (*DAT_100a4ff0)(s__sprites_ascale_spr_1007896f + 1);
  if (iVar2 != 0) {
    uVar1 = (*DAT_100a50e8)(iVar2);
    (**(code **)(DAT_100a5138 + 4))(4);
    (**(code **)(DAT_100a5138 + 0x2c))(uVar1,0);
    (**(code **)(DAT_100a5138 + 0x28))(1);
    (**(code **)(DAT_100a5138 + 0x10))(param_5,param_6,param_7,0x3f800000);
    (**(code **)(DAT_100a5138 + 8))(2);
    (**(code **)(DAT_100a5138 + 0x18))(0,param_8);
    (**(code **)(DAT_100a5138 + 0x20))(param_1,param_2,0x3f000000);
    (**(code **)(DAT_100a5138 + 0x18))(0x3f800000,param_8);
    (**(code **)(DAT_100a5138 + 0x20))(param_3,param_2,0x3f000000);
    (**(code **)(DAT_100a5138 + 0x18))(0x3f800000,param_8);
    (**(code **)(DAT_100a5138 + 0x20))(param_3,param_4,0x3f000000);
    (**(code **)(DAT_100a5138 + 0x18))(0,param_8);
    (**(code **)(DAT_100a5138 + 0x20))(param_1,param_4,0x3f000000);
    (**(code **)(DAT_100a5138 + 0xc))();
  }
  return;
}

