
void __thiscall FUN_100bb770(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = param_3;
  piVar3 = param_2;
  if (((*(int *)((int)this + 0xc) != 0) &&
      (piVar1 = *(int **)((int)this + 4), param_2 == (int *)*piVar1)) && (param_3 == piVar1)) {
    piVar3 = (int *)piVar1[1];
    if ((int *)piVar1[1] != DAT_1013244c) {
      do {
        FUN_100bccb0((int *)piVar3[2]);
        piVar2 = (int *)*piVar3;
        FUN_100c8ce6((undefined *)piVar3);
        piVar3 = piVar2;
      } while (piVar2 != DAT_1013244c);
    }
    *(int **)(*(int *)((int)this + 4) + 4) = DAT_1013244c;
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar3 != piVar2) {
    param_2 = piVar3;
    FUN_100bdbf0((int *)&param_2);
    FUN_100bc8e0(this,&param_3,piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return;
}

