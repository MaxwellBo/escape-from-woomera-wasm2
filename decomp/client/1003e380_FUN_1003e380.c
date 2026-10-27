
undefined4 __thiscall
FUN_1003e380(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  if (*(int *)((int)this + 0x23c) != 0) {
    *(undefined1 *)((int)this + 0x240) = 0;
  }
  FUN_10026030(param_3,param_2);
  uVar2 = FUN_10026090();
  *(uint *)((int)this + 0x23c) = uVar2;
  uVar2 = 0xffffffff;
  pcVar3 = (char *)((int)this + 0x240);
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar2 = 0x5ff - (~uVar2 - 1);
  uVar2 = ((int)uVar2 < 0) - 1 & uVar2;
  pcVar3 = FUN_10026180();
  _strncat((char *)((int)this + 0x240),pcVar3,uVar2);
  *(undefined1 *)((int)this + 0x83f) = 0;
  if (*(int *)((int)this + 0x23c) != 0) {
    FUN_1003d2f0(this,(Panel *)0x5);
  }
  return 1;
}

