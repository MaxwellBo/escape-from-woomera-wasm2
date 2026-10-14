
void __thiscall FUN_1009c860(void *this,int *param_1,char *param_2,int param_3,int param_4)

{
  int *_Dest;
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  uVar1 = (*DAT_10121f24)(*(undefined4 *)(param_1[1] + 0x208));
  if (param_3 != 0) {
    *(undefined4 *)((int)this + 0xc) = 1;
    *(undefined4 *)((int)this + 0x10) = 1;
    iVar2 = (*DAT_10121f28)(0);
    if (iVar2 != 0) {
      iVar2 = iVar2 + 0x80;
    }
    (**(code **)(*param_1 + 0x60))(iVar2,iVar2,0x44610000,(-(uint)(param_4 != 0) & 0x1000) + 0x1000)
    ;
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  _Dest = param_1 + 0x197;
  _strncpy((char *)_Dest,param_2,0x10);
  uVar3 = (*DAT_10121fb0)(*(undefined4 *)(param_1[1] + 0x208),s_model_10105414,_Dest);
  (*DAT_10121fbc)(uVar1,uVar3);
  uVar3 = (*DAT_10121fb0)(*(undefined4 *)(param_1[1] + 0x208),&DAT_10117fc8,_Dest);
  (*DAT_10121fbc)(uVar1,uVar3);
  (*DAT_10121ec0)(2,DAT_101248b4,0,0);
  (*DAT_10121ec8)(uVar1);
  (*DAT_10121ee0)(_Dest);
  (*DAT_10121ec4)();
  (*DAT_10121ec0)(2,DAT_101248b0,0,0);
  (*DAT_10121ec8)(uVar1);
  lVar4 = __ftol();
  (*DAT_10121ed0)((int)lVar4);
  (*DAT_10121ed0)(param_1[0x191]);
  (*DAT_10121ed0)(0);
  iVar2 = (**(code **)(*DAT_10121db8 + 0xcc))(_Dest);
  (*DAT_10121ed0)(iVar2 + 1);
  (*DAT_10121ec4)();
  return;
}

