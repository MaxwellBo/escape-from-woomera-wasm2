
void __thiscall FUN_100250e0(void *this,int param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined1 local_20 [32];
  
  if ((0 < param_1) && ((*(uint *)((int)this + 0x18) & 1 << ((char)param_1 - 1U & 0x1f)) != 0)) {
    puVar1 = local_20;
    pcVar2 = s_menuselect__d_10079564;
    FUN_100499f0(puVar1,(byte *)s_menuselect__d_10079564);
    (*DAT_100a5040)(local_20,puVar1,pcVar2,param_1);
    *(undefined4 *)((int)this + 0x14) = 0;
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) & 0xfffffffe;
  }
  return;
}

