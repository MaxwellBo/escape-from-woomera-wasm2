
undefined1 __thiscall FUN_100390b0(void *this,int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 unaff_EBP;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  int local_c;
  undefined1 auStack_8 [8];
  
  iVar5 = 0;
  uVar3 = 0;
  local_c = 0;
  if (param_1 != 0) {
    (*(code *)**(undefined4 **)this)(*(undefined4 *)((int)this + 4),param_1);
  }
  param_1 = 0;
  if (0 < *(int *)((int)this + 600)) {
    piVar4 = (int *)((int)this + 200);
    do {
      iVar2 = ((int *)*piVar4)[0x3c];
      if ((((iVar2 == 0) || (iVar2 == DAT_100b6620)) &&
          (iVar2 = (**(code **)(*(int *)*piVar4 + 0x260))(), iVar2 == 0)) && (param_2 == '\0')) {
        if ((*(void **)(*piVar4 + 0xf4) == (void *)0x0) ||
           (cVar1 = FUN_100390b0(*(void **)(*piVar4 + 0xf4),*(int *)((int)this + 8) + iVar5,'\0'),
           cVar1 != '\0')) {
          (**(code **)(*(int *)*piVar4 + 0x24))(1);
          (**(code **)(*(int *)*piVar4 + 4))(&local_c,auStack_8);
          (*(code *)**(undefined4 **)*piVar4)(unaff_EBP,iVar5);
          lVar6 = __ftol();
          iVar5 = (int)lVar6;
          uVar3 = 1;
          local_c = iVar5;
        }
        else {
          (**(code **)(*(int *)*piVar4 + 0x24))(0);
        }
      }
      else {
        (**(code **)(*(int *)*piVar4 + 0x24))(0);
        if (*(void **)(*piVar4 + 0xf4) != (void *)0x0) {
          FUN_100390b0(*(void **)(*piVar4 + 0xf4),*(int *)((int)this + 8) + iVar5,'\x01');
        }
      }
      param_1 = param_1 + 1;
      piVar4 = piVar4 + 1;
    } while (param_1 < *(int *)((int)this + 600));
  }
  (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 0xc),iVar5 + 1);
  return uVar3;
}

