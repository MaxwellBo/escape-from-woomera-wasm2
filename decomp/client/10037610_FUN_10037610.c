
void __thiscall FUN_10037610(void *this,int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined *this_00;
  
  iVar1 = (int)this + (param_1 + param_2 * 0x4a) * 0xe8 + 0x4f0c;
  if (*(int *)((int)this + 0x9b4) != iVar1) {
    *(undefined4 *)((int)this + 0x9b4) = 0;
    *(undefined4 *)((int)this + 0x9b8) = 0xffffffff;
  }
  if ((iVar1 != 0) && (*(int *)((int)this + param_1 * 4 + 0x26980) == 0)) {
    iVar3 = *(int *)((int)this + param_1 * 4 + 0x26858);
    if ((*(char **)(&DAT_100b59f0 + iVar3 * 0x14) != (char *)0x0) &&
       (**(char **)(&DAT_100b59f0 + iVar3 * 0x14) != '\0')) {
      if (((&DAT_100b59f6)[iVar3 * 0x14] != '\0') && (iVar3 = (*DAT_100a5150)(), iVar3 == 0)) {
        return;
      }
      iVar3 = *(int *)((int)this + param_1 * 4 + 0x26858);
      this_00 = FUN_10012170();
      bVar2 = FUN_100137e0(this_00,iVar3);
      if (bVar2) {
        *(int *)((int)this + 0x9b4) = iVar1;
        *(int *)((int)this + 0x9b8) = param_1;
      }
    }
  }
  return;
}

