
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_10021bb0(void *this,int param_1,int *param_2)

{
  short sVar1;
  uint in_EAX;
  uint uVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  if (((param_2 != (int *)0x0) && (param_1 == 1)) && (*(short *)((int)param_2 + 0x2ea) != 0)) {
    sVar1 = *(short *)((int)&DAT_100b600c + *param_2 * 0x18 + 2);
    if (sVar1 == 1) {
      uVar3 = *(undefined4 *)((int)this + 0xc74);
    }
    else if (sVar1 == 2) {
      uVar3 = *(undefined4 *)((int)this + 0xc78);
    }
    else {
      uVar3 = *(undefined4 *)((int)this + 0xc7c);
    }
    fVar4 = (float10)(*DAT_100a50c8)();
    uVar2 = FUN_10021c70(this,uVar3,param_2,SUB84((double)(fVar4 - (float10)_DAT_10059a10),0),
                         (int)((ulonglong)(double)(fVar4 - (float10)_DAT_10059a10) >> 0x20));
    return uVar2;
  }
  return in_EAX & 0xffffff00;
}

