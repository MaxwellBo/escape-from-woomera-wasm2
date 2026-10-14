
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_1001fef0(void *this,float param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [48];
  int iStack_8;
  
  iVar2 = (**(code **)(*(int *)this + 0xcc))();
  if (iVar2 == 0) {
    FUN_100af210((float *)(*(int *)((int)this + 4) + 0x50));
  }
  else {
    FUN_100af200(*(int *)((int)this + 4) + 0x50);
  }
  iVar2 = *(int *)((int)this + 4);
  fStack_5c = *(float *)(iVar2 + 8);
  fStack_58 = *(float *)(iVar2 + 0xc);
  fStack_54 = *(float *)(iVar2 + 0xfc) * (float)_DAT_100dd648 + *(float *)(iVar2 + 0x10);
  fStack_4c = param_1 * *(float *)(DAT_10122044 + 0x2c);
  fStack_48 = param_1 * *(float *)(DAT_10122044 + 0x30);
  fStack_44 = param_1 * *(float *)(DAT_10122044 + 0x28) + fStack_5c;
  fStack_40 = fStack_58 + fStack_4c;
  fStack_3c = fStack_48 + fStack_54;
  FUN_100afc90(&fStack_5c,&fStack_44,0,3,*(undefined4 *)(iVar2 + 0x208),auStack_38);
  if (iStack_8 != 0) {
    piVar1 = *(int **)(iStack_8 + 0x7c);
    if (0 < param_2) {
      (**(code **)(*piVar1 + 0x60))
                (*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 4),(float)param_2,
                 param_3);
    }
    return piVar1;
  }
  return (int *)0x0;
}

