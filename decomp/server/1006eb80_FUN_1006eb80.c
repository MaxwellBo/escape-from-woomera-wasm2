
void __thiscall FUN_1006eb80(void *this,int param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = *(int *)this;
  fVar2 = *(float *)((int)this + param_1 * 8 + 8);
  uVar3 = *(undefined4 *)((int)this + param_1 * 8 + 4);
  iVar5 = param_1 * 2 + 1;
  if (iVar5 < iVar4) {
    do {
      iVar1 = param_1 * 2 + 2;
      iVar6 = iVar5;
      if ((iVar1 < iVar4) &&
         (*(float *)((int)this + iVar1 * 8 + 8) < *(float *)((int)this + iVar5 * 8 + 8))) {
        iVar6 = iVar1;
      }
      if (fVar2 <= *(float *)((int)this + iVar6 * 8 + 8)) break;
      *(undefined4 *)((int)this + param_1 * 8 + 4) = *(undefined4 *)((int)this + iVar6 * 8 + 4);
      *(undefined4 *)((int)this + param_1 * 8 + 8) = *(undefined4 *)((int)this + iVar6 * 8 + 8);
      iVar4 = *(int *)this;
      iVar5 = iVar6 * 2 + 1;
      param_1 = iVar6;
    } while (iVar5 < iVar4);
  }
  *(undefined4 *)((int)this + param_1 * 8 + 4) = uVar3;
  *(float *)((int)this + param_1 * 8 + 8) = fVar2;
  return;
}

