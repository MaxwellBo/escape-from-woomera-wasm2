
void __thiscall FUN_1001ebf0(void *this,int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((*param_1 == 0) && (param_1[2] == 0)) {
    for (puVar1 = (undefined4 *)param_1[10]; puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      puVar2 = operator_new(0x1c);
      iVar3 = 5;
      puVar2[6] = 0xffffffff;
      puVar4 = puVar1;
      puVar5 = puVar2;
      while( true ) {
        puVar5 = puVar5 + 1;
        puVar4 = puVar4 + 1;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        *puVar5 = *puVar4;
      }
      *puVar2 = *(undefined4 *)((int)this + 0x410);
      *(undefined4 **)((int)this + 0x410) = puVar2;
    }
    (*DAT_100a5090)(s_got_list_100789f8);
    *(undefined4 *)((int)this + 0x424) = 1;
    *(undefined4 *)((int)this + 0x420) = 0;
  }
  return;
}

