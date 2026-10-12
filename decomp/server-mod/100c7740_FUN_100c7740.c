
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100c7740(void *this,float param_1)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  float10 fVar4;
  
  fVar4 = (float10)FUN_100c8a0a(this);
  if ((fVar4 <= (float10)_DAT_100dd614) && (_DAT_100dd5d8 < *(float *)((int)this + 0x54))) {
    puVar2 = this;
    if (*(char *)((int)this + 0x60) != '\x01') {
      puVar2 = (undefined4 *)((*(int *)((int)this + 0x5c) + 1) * 0x10 + (int)this);
    }
    FUN_100c75e0(puVar2);
    FUN_100c80d0();
    iVar3 = *(int *)((int)this + 0x5c) + 1;
    *(undefined4 *)((int)this + 0x54) = 0;
    *(int *)((int)this + 0x5c) = iVar3;
    if (3 < iVar3) {
      *(undefined4 *)((int)this + 0x5c) = 0;
    }
  }
  fVar1 = *(float *)((int)this + 0x58);
  *(float *)((int)this + 0x58) = param_1;
  *(float *)((int)this + 0x54) = (param_1 - fVar1) + *(float *)((int)this + 0x54);
  return;
}

