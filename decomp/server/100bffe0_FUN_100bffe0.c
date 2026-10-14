
int __thiscall FUN_100bffe0(void *this,uint param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  
  if (((*(int *)((int)this + 4) != 0) &&
      (cVar1 = *(char *)(*(int *)((int)this + 4) + -1), cVar1 != '\0')) && (cVar1 != -1)) {
    FUN_100bbb30(this,*(uint *)((int)this + 8),'\0');
  }
  if (*(int *)((int)this + 4) != 0) {
    *(undefined1 *)(*(int *)((int)this + 4) + -1) = 0xff;
  }
  if (param_1 != 0) {
    param_1 = param_1 - *(int *)((int)this + 4);
  }
  if (*(uint *)((int)this + 8) < param_1) {
    FUN_100d9f8d();
  }
  pcVar2 = *(char **)((int)this + 4);
  if (((pcVar2 != (char *)0x0) && (pcVar2[-1] != '\0')) && (pcVar2[-1] != -1)) {
    FUN_100bacf0(this,'\x01');
    uVar4 = 0xffffffff;
    pcVar5 = pcVar2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_100bba70(this,(undefined4 *)pcVar2,~uVar4 - 1);
  }
  if (*(uint *)((int)this + 8) != param_1) {
    FUN_100c97a0((undefined4 *)(*(int *)((int)this + 4) + param_1),
                 (undefined4 *)(*(int *)((int)this + 4) + 1 + param_1),
                 (*(uint *)((int)this + 8) - 1) - param_1);
    uVar4 = *(int *)((int)this + 8) - 1;
    uVar3 = FUN_100bbb30(this,uVar4,'\0');
    if ((char)uVar3 != '\0') {
      *(uint *)((int)this + 8) = uVar4;
      *(undefined1 *)(uVar4 + *(int *)((int)this + 4)) = 0;
    }
  }
  if (*(int *)((int)this + 4) == 0) {
    return 0;
  }
  return *(int *)((int)this + 4) + param_1;
}

