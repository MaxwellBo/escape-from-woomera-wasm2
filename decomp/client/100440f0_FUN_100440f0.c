
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_100440f0(int param_1)

{
  float unaff_ESI;
  float fStack_5c;
  float fStack_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_2c;
  int iStack_c;
  
  CBasePlayerItem::AttemptToMaterialize
            ((CBasePlayerItem *)(*(int *)(*(int *)(param_1 + 0xdc) + 4) + 0x74));
  (**(code **)(**(int **)(param_1 + 0xdc) + 0x214))(&fStack_5c);
  fStack_50 = *(float *)(DAT_1007f7f8 + 0x2c) * _DAT_10059cf8;
  fStack_4c = *(float *)(DAT_1007f7f8 + 0x30) * _DAT_10059cf8;
  fStack_48 = unaff_ESI + *(float *)(DAT_1007f7f8 + 0x28) * _DAT_10059cf8;
  fStack_44 = fStack_5c + fStack_50;
  fStack_40 = fStack_58 + fStack_4c;
  FUN_1000a860();
  if ((float)_DAT_10059a10 <= fStack_2c) {
    return 0;
  }
  if ((iStack_c == 0) && (iStack_c = (*DAT_1007efe4)(0), iStack_c == 0)) {
    return 0;
  }
  return *(undefined4 *)(iStack_c + 0x7c);
}

