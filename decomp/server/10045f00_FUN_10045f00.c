
void __thiscall FUN_10045f00(void *this,char *param_1)

{
  int iVar1;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    **(int **)((int)this + 4) = (int)s_cycler_1010d68c - *(int *)(DAT_10122044 + 0x98);
    (*DAT_10121e08)();
    (*DAT_10121e10)();
    FUN_10045fb0(this);
    FUN_100afdc0(*(int *)((int)this + 4),&stack0x00000008,&stack0x00000014);
    return;
  }
  iVar1 = *(int *)((int)this + 4);
  (*DAT_10121efc)(4,s_cycler_at___0f___0f__0_f_missing_1010d660,(double)*(float *)(iVar1 + 8),
                  (double)*(float *)(iVar1 + 0xc),(double)*(float *)(iVar1 + 0x10));
  (*DAT_10121e60)(*(undefined4 *)(*(int *)((int)this + 4) + 0x208));
  return;
}

