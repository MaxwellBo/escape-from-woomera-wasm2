
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10020390(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  fVar4 = (float10)(*DAT_100a50c8)();
  iVar2 = *(int *)((int)this + 0x14);
  iVar3 = *(int *)((int)this + 0x18);
  if (*(float *)((int)this + 0xc9c) <= (float)fVar4) {
    iVar1 = (*DAT_100a5150)();
    if (iVar1 == 1) {
      if (((param_1 & 2) != 0) && (iVar2 = iVar2 + 1, 5 < iVar2)) {
        iVar2 = 2;
      }
      if (((param_1 & 4) != 0) && (iVar3 = iVar3 + 1, 3 < iVar3)) {
        iVar3 = 0;
      }
      if ((param_1 & 0x801) != 0) {
        DAT_100b6724 = 2;
        FUN_100202c0(this,(byte)(param_1 >> 0xb) & 1);
        if ((*(int *)((int)this + 0x14) == 3) && (*(int *)((int)this + 0x950) != 0)) {
          iVar1 = (*DAT_100a50c4)(*(int *)((int)this + 0x950));
          DAT_100bcdf0 = *(undefined4 *)(iVar1 + 0xb48);
          _DAT_100bcdf4 = *(undefined4 *)(iVar1 + 0xb4c);
          _DAT_100bcdf8 = *(undefined4 *)(iVar1 + 0xb50);
          _DAT_100bcde0 = *(undefined4 *)(iVar1 + 0xb54);
          _DAT_100bcde4 = *(undefined4 *)(iVar1 + 0xb58);
          _DAT_100bcde8 = *(undefined4 *)(iVar1 + 0xb5c);
          (*DAT_100a507c)(&DAT_100bcde0);
          DAT_100bcdcc = 1;
        }
      }
      if ((param_1 & 8) != 0) {
        *(undefined4 *)((int)this + 0xca0) = 0x3c23d70a;
      }
      if ((param_1 & 0x10) != 0) {
        *(undefined4 *)((int)this + 0xca0) = 0xbc23d70a;
      }
      if ((param_1 & 0x200) != 0) {
        *(undefined4 *)((int)this + 0xca4) = 0xc1400000;
      }
      if ((param_1 & 0x400) != 0) {
        *(undefined4 *)((int)this + 0xca4) = 0x41400000;
      }
      if ((iVar2 != *(int *)((int)this + 0x14)) || (iVar3 != *(int *)((int)this + 0x18))) {
        FUN_10020530(this,iVar2,iVar3);
      }
      *(float *)((int)this + 0xc9c) = (float)((float10)(double)fVar4 + (float10)_DAT_1005acd0);
    }
  }
  return;
}

