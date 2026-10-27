
void __thiscall
FUN_10035c80(void *this,int param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  
  iVar1 = FUN_10035c00(this,param_1);
  *param_2 = (uint)*(byte *)(iVar1 + 100);
  *param_3 = (uint)*(byte *)(iVar1 + 0x65);
  *param_4 = (uint)*(byte *)(iVar1 + 0x66);
  *param_5 = (uint)*(byte *)(iVar1 + 0x67);
  return;
}

