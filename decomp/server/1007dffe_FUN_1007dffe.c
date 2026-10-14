
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_1007dffe(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  uint in_EAX;
  int iVar3;
  short *unaff_EDI;
  bool bVar4;
  bool bVar5;
  float10 fVar6;
  float10 extraout_ST0;
  longlong lVar7;
  uint uVar8;
  
  bVar2 = (char)in_EAX - 0x21;
  bVar1 = *param_1 + (byte)param_1;
  bVar4 = CARRY1(*param_1,(byte)param_1) || CARRY1(bVar1,0xfaeff820 < in_EAX);
  *param_1 = bVar1 + (0xfaeff820 < in_EAX);
  bVar5 = CARRY1(bRam201007df,bVar2) || CARRY1(bRam201007df + bVar2,bVar4);
  bRam201007df = bRam201007df + bVar2 + bVar4;
  bVar4 = CARRY1(bRam051007df,bVar2);
  bVar1 = bRam051007df + bVar2;
  bRam051007df = bVar1 + bVar5;
  fVar6 = (float10)*unaff_EDI;
  cRam511007df = cRam511007df + bVar2 + (bVar4 || CARRY1(bVar1,bVar5));
  if (*(float *)(param_1 + 0x4a4) <= *DAT_10122044) {
    *(float *)(param_1 + 0x4a4) = *DAT_10122044 + (float)_DAT_100dd5f0;
    lVar7 = __ftol();
    uVar8 = (uint)(byte)lVar7;
    if (uVar8 != *(uint *)(param_1 + 0x4a8)) {
      *(uint *)(param_1 + 0x4a8) = uVar8;
      (*DAT_10121ec0)(1,DAT_101248ec,0,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
      (*DAT_10121ec8)(uVar8);
      (*DAT_10121ec4)();
    }
    iVar3 = (*DAT_10121f70)(0,3);
    fVar6 = extraout_ST0;
    if (iVar3 == 0) {
      param_1[0x4a0] = 0;
      param_1[0x4a1] = 0;
      param_1[0x4a2] = 0x7a;
      param_1[0x4a3] = 0x44;
    }
  }
  return fVar6;
}

