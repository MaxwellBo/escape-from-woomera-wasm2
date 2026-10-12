
undefined4 * __thiscall FUN_100c00c0(void *this,uint param_1)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  
  uVar2 = *(uint *)((int)this + 8);
  if ((uVar2 < param_1) || (*(int *)((int)this + 4) == 0)) {
    return &DAT_100f7058;
  }
  cVar1 = *(char *)(*(int *)((int)this + 4) + -1);
  if ((cVar1 == '\0') || (cVar1 == -1)) goto LAB_100c0131;
  if (0xfffffffd < uVar2) {
    FUN_100d9d61();
  }
  puVar3 = *(undefined1 **)((int)this + 4);
  if (((puVar3 == (undefined1 *)0x0) || (cVar1 = puVar3[-1], cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar2 == 0) {
      if (puVar3 != (undefined1 *)0x0) {
        *(undefined4 *)((int)this + 8) = 0;
        *puVar3 = 0;
      }
      goto LAB_100c0131;
    }
    if (uVar2 <= *(uint *)((int)this + 0xc)) goto LAB_100c0131;
  }
  else if (uVar2 == 0) {
    puVar3[-1] = cVar1 + -1;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
    goto LAB_100c0131;
  }
  FUN_100bcd30(uVar2);
LAB_100c0131:
  if (*(int *)((int)this + 4) != 0) {
    *(undefined1 *)(*(int *)((int)this + 4) + -1) = 0xff;
  }
  return (undefined4 *)(param_1 + *(int *)((int)this + 4));
}

