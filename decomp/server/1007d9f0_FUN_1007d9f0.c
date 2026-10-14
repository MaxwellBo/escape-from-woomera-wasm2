
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1007d9f0(void *this,int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  if ((param_1 < 0) && (param_2 == 0)) {
    if (*(float *)(*(int *)((int)this + 4) + 0x164) < _DAT_100dd5f8) {
      return;
    }
    if (*(float *)(*(int *)((int)this + 4) + 0x164) < (float)-param_1) {
      lVar3 = __ftol();
      param_1 = (int)lVar3;
    }
  }
  *(float *)(*(int *)((int)this + 4) + 0x164) =
       (float)param_1 + *(float *)(*(int *)((int)this + 4) + 0x164);
  (*DAT_10121ec0)(2,DAT_101248b0,0,0);
  uVar1 = (*DAT_10121f24)(*(undefined4 *)(*(int *)((int)this + 4) + 0x208));
  (*DAT_10121ec8)(uVar1);
  lVar3 = __ftol();
  (*DAT_10121ed0)((int)lVar3);
  (*DAT_10121ed0)(*(undefined4 *)((int)this + 0x644));
  (*DAT_10121ed0)(0);
  iVar2 = (**(code **)(*DAT_10121db8 + 0xcc))((int)this + 0x65c);
  (*DAT_10121ed0)(iVar2 + 1);
  (*DAT_10121ec4)();
  return;
}

