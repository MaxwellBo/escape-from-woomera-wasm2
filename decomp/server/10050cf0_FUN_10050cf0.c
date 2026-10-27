
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10050cf0(CBaseEntity *param_1)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [16];
  float fStack_28;
  
  if ((*(int *)(param_1 + 0x1d8) == 2) &&
     (uVar1 = *(uint *)(param_1 + 0x15c), (uVar1 & 0x100000) == 0)) {
    if ((uVar1 & 0x300) != 0) {
      fVar3 = (float10)(*DAT_10121f74)(0,0x3f800000);
      if (fVar3 <= (float10)_DAT_100df2a8) {
        FUN_100af200(*(int *)(param_1 + 4) + 0x50);
        iVar2 = *(int *)(param_1 + 4);
        fStack_3c = *(float *)(DAT_10122044 + 0x30) * _DAT_100e8b00 + *(float *)(iVar2 + 0x10);
        fStack_40 = *(float *)(DAT_10122044 + 0x2c) * _DAT_100e8b00 + *(float *)(iVar2 + 0xc);
        fStack_44 = *(float *)(DAT_10122044 + 0x28) * _DAT_100e8b00 + *(float *)(iVar2 + 8);
        FUN_100afc90((float *)(iVar2 + 8),&fStack_44,0,3,*(undefined4 *)(iVar2 + 0x208),auStack_38);
        if (fStack_28 == (float)_DAT_100dd628) {
          (**(code **)(*(int *)param_1 + 0x184))(0x2c);
          return;
        }
      }
      (**(code **)(*(int *)param_1 + 0x184))(0x12);
      return;
    }
    if ((uVar1 & 0x400) != 0) {
      iVar2 = FUN_100961f0(param_1,0x380);
      if (iVar2 != 0) {
        (**(code **)(*(int *)param_1 + 0x184))(0x18);
        return;
      }
      (**(code **)(*(int *)param_1 + 0x184))(0x2b);
      return;
    }
  }
  FUN_10006c50(param_1);
  return;
}

