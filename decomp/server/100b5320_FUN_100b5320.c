
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100b5320(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  if ((-1 < *(int *)(iVar1 + 0x110)) &&
     ((*(float *)(DAT_10122044 + 0x14) == _DAT_100dd5f8 || ((*(uint *)(iVar1 + 0x1a0) & 0x800) == 0)
      ))) {
    if (*(int *)(iVar1 + 0x1cc) == 0) {
      param_1[0x1d] = (int)CDecal::StaticDecal;
      (**(code **)(*param_1 + 8))(0);
      return;
    }
    param_1[0x1d] = (int)CBaseEntity::SUB_DoNothing;
    param_1[0x1f] = (int)CDecal::TriggerDecal;
    return;
  }
  (*DAT_10121e60)(*(undefined4 *)(iVar1 + 0x208));
  return;
}

