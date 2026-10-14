
void __thiscall FUN_10094150(void *this,int *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  longlong lVar3;
  
  bVar1 = FUN_100b0030(*(int *)((int)this + 0xcc),param_1);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar2 = (**(code **)(*param_1 + 0xcc))();
    if ((iVar2 != 0) && (iVar2 = *(int *)(*(int *)((int)this + 4) + 0x208), param_1[0xce] != iVar2))
    {
      param_1[0xce] = iVar2;
      iVar2 = *(int *)((int)this + 200);
      param_1[0xd0] = 0;
      param_1[0xcf] = iVar2;
      (*DAT_10121ec0)(1,0x25,0,*(undefined4 *)(param_1[1] + 0x208));
      lVar3 = __ftol();
      (*DAT_10121ed0)((int)(short)lVar3);
      (*DAT_10121ec4)();
      FUN_10098e40(this,param_1,3,0);
    }
  }
  return;
}

