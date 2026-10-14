
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1007f750(int *param_1)

{
  int iVar1;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [56];
  
  if (DAT_10121de8 != 1) {
    FUN_100af200(param_1[1] + 0x50);
    iVar1 = param_1[1];
    fStack_3c = *(float *)(DAT_10122044 + 0x30) * _DAT_100ddaf4 + *(float *)(iVar1 + 0x10);
    fStack_40 = *(float *)(DAT_10122044 + 0x2c) * _DAT_100ddaf4 + *(float *)(iVar1 + 0xc);
    fStack_44 = *(float *)(DAT_10122044 + 0x28) * _DAT_100ddaf4 + *(float *)(iVar1 + 8);
    FUN_100afc60((float *)(iVar1 + 8),&fStack_44,1,*(undefined4 *)(iVar1 + 0x198),auStack_38);
    FUN_100b0400((int)auStack_38,0xf7);
  }
  param_1[0x1d] = (int)CBaseEntity::SUB_Remove;
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  return;
}

