
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_1001c600(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  if ((((*(int *)(param_3 + 0x198) != 0x80) || (param_3 == param_4)) &&
      (*(int *)(param_3 + 0x134) != 0)) &&
     (*(int *)(DAT_10122044 + 0x98) + *(int *)(param_3 + 0x138) != 0)) {
    if ((*(uint *)(param_3 + 0x224) & 0x4000000) == 0) {
      if ((param_3 != param_4) && (iVar3 = (*DAT_10122000)(param_3,param_7), iVar3 == 0)) {
        return 0;
      }
    }
    else if (param_3 != param_4) {
      return 0;
    }
    if ((((*(uint *)(param_3 + 0x224) & 0x100) == 0) || ((param_5 & 1) == 0)) ||
       (*(int *)(param_3 + 0x218) != param_4)) {
      if (*(int *)(param_4 + 0x2c0) != 0) {
        FUN_100ae6b0(*(int *)(param_4 + 0x2c0),0);
        uVar1 = *(uint *)(param_3 + 0x2c0);
        if (uVar1 != 0) {
          if (DAT_10131b64 == 0) {
            if ((*(uint *)(param_4 + 0x2c0) & uVar1) == 0) {
              return 0;
            }
          }
          else if ((DAT_10131b64 == 1) && ((*(uint *)(param_4 + 0x2c0) & uVar1) != 0)) {
            return 0;
          }
        }
        FUN_100ae6d0();
      }
      puVar4 = param_1;
      for (iVar3 = 0x55; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      param_1[1] = param_2;
      *param_1 = 1;
      if ((*(uint *)(param_3 + 0x224) & 0x20000000) != 0) {
        *param_1 = 2;
      }
      lVar5 = __ftol();
      param_1[0x17] = (float)(int)lVar5 * (float)_DAT_100de1e0;
      param_1[4] = *(undefined4 *)(param_3 + 0x88);
      param_1[5] = *(undefined4 *)(param_3 + 0x8c);
      param_1[6] = *(undefined4 *)(param_3 + 0x90);
      param_1[7] = *(undefined4 *)(param_3 + 0xd0);
      param_1[8] = *(undefined4 *)(param_3 + 0xd4);
      param_1[9] = *(undefined4 *)(param_3 + 0xd8);
      param_1[0x1f] = *(undefined4 *)(param_3 + 0x15c);
      param_1[0x20] = *(undefined4 *)(param_3 + 0x160);
      param_1[0x21] = *(undefined4 *)(param_3 + 0x164);
      param_1[0x22] = *(undefined4 *)(param_3 + 0x168);
      param_1[0x23] = *(undefined4 *)(param_3 + 0x16c);
      param_1[0x24] = *(undefined4 *)(param_3 + 0x170);
      param_1[0x39] = *(undefined4 *)(param_3 + 0x10c);
      param_1[0x3a] = *(undefined4 *)(param_3 + 0x110);
      param_1[0x3b] = *(undefined4 *)(param_3 + 0x114);
      param_1[0x3c] = *(undefined4 *)(param_3 + 0x100);
      param_1[0x3d] = *(undefined4 *)(param_3 + 0x104);
      param_1[0x3e] = *(undefined4 *)(param_3 + 0x108);
      param_1[0x3f] = *(undefined4 *)(param_3 + 0x118);
      param_1[0x40] = *(undefined4 *)(param_3 + 0x11c);
      param_1[10] = *(undefined4 *)(param_3 + 0x134);
      param_1[0xc] = *(undefined4 *)(param_3 + 0x1b0);
      *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_3 + 400);
      param_1[0xf] = *(undefined4 *)(param_3 + 0x198);
      if ((((param_6 == 0) && (*(float *)(param_3 + 0x1b4) != _DAT_100dd5f8)) &&
          (*(float *)(param_3 + 0xa0) == _DAT_100dd5f8)) &&
         ((*(float *)(param_3 + 0xa4) == _DAT_100dd5f8 &&
          (*(float *)(param_3 + 0xa8) == _DAT_100dd5f8)))) {
        *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 1;
      }
      param_1[0x10] = *(undefined4 *)(param_3 + 0x1c4);
      *(undefined2 *)((int)param_1 + 0x3a) = *(undefined2 *)(param_3 + 0x18c);
      param_1[0xd] = *(undefined4 *)(param_3 + 0x228);
      param_1[0x16] = *(undefined4 *)(param_3 + 0x188);
      param_1[0xb] = *(undefined4 *)(param_3 + 0x1a8);
      param_1[0x18] = *(undefined4 *)(param_3 + 0x1b8);
      param_1[0x19] = *(undefined4 *)(param_3 + 0x194);
      iVar3 = 0;
      do {
        *(undefined1 *)((int)param_1 + iVar3 + 0x68) = *(undefined1 *)(iVar3 + 0x1bc + param_3);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
      iVar3 = 0;
      do {
        *(undefined1 *)((int)param_1 + iVar3 + 0x6c) = *(undefined1 *)(iVar3 + 0x1c0 + param_3);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 2);
      param_1[0x12] = *(undefined4 *)(param_3 + 0x1c8);
      lVar5 = __ftol();
      param_1[0x13] = (int)lVar5;
      param_1[0x15] = *(undefined4 *)(param_3 + 0x1dc);
      lVar5 = __ftol();
      *(char *)(param_1 + 0x14) = (char)lVar5;
      lVar5 = __ftol();
      *(char *)((int)param_1 + 0x51) = (char)lVar5;
      lVar5 = __ftol();
      *(char *)((int)param_1 + 0x52) = (char)lVar5;
      param_1[0x25] = 0;
      if (*(int *)(param_3 + 0x214) != 0) {
        uVar2 = (*DAT_10121f24)(*(int *)(param_3 + 0x214));
        param_1[0x25] = uVar2;
      }
      param_1[0x26] = 0;
      if (((*(int *)(param_3 + 0x218) != 0) &&
          (iVar3 = (*DAT_10121f24)(*(int *)(param_3 + 0x218)), 0 < iVar3)) &&
         (iVar3 <= *(int *)(DAT_10122044 + 0x90))) {
        param_1[0x26] = iVar3;
      }
      if (param_6 != 0) {
        param_1[0x2f] = *(undefined4 *)(param_3 + 0xac);
        param_1[0x30] = *(undefined4 *)(param_3 + 0xb0);
        param_1[0x31] = *(undefined4 *)(param_3 + 0xb4);
        uVar2 = (*DAT_10121e14)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_3 + 0x140));
        param_1[0x2d] = uVar2;
        param_1[0x2e] = *(undefined4 *)(param_3 + 0x1ac);
        param_1[0x2c] = *(uint *)(param_3 + 0x224) & 0x4000000;
        param_1[0x27] = *(undefined4 *)(param_3 + 0x1a0);
        param_1[0x28] = *(undefined4 *)(param_3 + 0x19c);
        param_1[0x32] = *(uint *)(param_3 + 0x224) >> 0xe & 1;
        lVar5 = __ftol();
        param_1[0x2b] = (int)lVar5;
        return 1;
      }
      param_1[0x2a] = *(undefined4 *)(param_3 + 0x28c);
      return 1;
    }
  }
  return 0;
}

