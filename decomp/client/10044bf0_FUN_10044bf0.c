
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10044bf0(undefined4 param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  
  fVar1 = param_3 * _DAT_10059cec;
  fVar2 = param_4 * _DAT_10059cec;
  uVar3 = (*DAT_100a50e8)(param_1);
  (**(code **)(DAT_100a5138 + 4))(4);
  (**(code **)(DAT_100a5138 + 0x2c))(uVar3,0);
  (**(code **)(DAT_100a5138 + 0x28))(1);
  (**(code **)(DAT_100a5138 + 8))(2);
  (**(code **)(DAT_100a5138 + 0x18))(0,0);
  (**(code **)(DAT_100a5138 + 0x20))(*param_2 - fVar1,param_2[1] - fVar2,param_2[2]);
  (**(code **)(DAT_100a5138 + 0x18))(0x3f800000,0);
  (**(code **)(DAT_100a5138 + 0x20))(fVar1 + *param_2,param_2[1] - fVar2,param_2[2]);
  (**(code **)(DAT_100a5138 + 0x18))(0x3f800000,0x3f800000);
  (**(code **)(DAT_100a5138 + 0x20))(fVar1 + *param_2,fVar2 + param_2[1],param_2[2]);
  (**(code **)(DAT_100a5138 + 0x18))(0,0x3f800000);
  (**(code **)(DAT_100a5138 + 0x20))(*param_2 - fVar1,fVar2 + param_2[1],param_2[2]);
  (**(code **)(DAT_100a5138 + 0xc))();
  return;
}

