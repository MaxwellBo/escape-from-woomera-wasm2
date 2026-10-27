
void __thiscall FUN_1007bf30(void *this,byte *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 != -3) && (param_2 != -1)) {
    iVar1 = FUN_10080dd0(this,param_1);
    if ((param_2 < 1) ||
       (iVar2 = *(int *)((int)this + iVar1 * 4 + 0x534) - param_2,
       *(int *)((int)this + iVar1 * 4 + 0x534) = iVar2, iVar2 < 0)) {
      *(undefined4 *)((int)this + iVar1 * 4 + 0x534) = 0;
    }
  }
  return;
}

