
int __thiscall FUN_100bac00(void *this,void *param_1,uint param_2,size_t param_3)

{
  char *pcVar1;
  uint uVar2;
  void *pvVar3;
  char *pcVar4;
  
  if ((param_3 != 0) && (uVar2 = *(uint *)((int)this + 8), uVar2 != 0)) {
    if (uVar2 <= param_2) {
      param_2 = uVar2 - 1;
    }
    pcVar4 = (char *)(*(int *)((int)this + 4) + param_2);
    pvVar3 = _memchr(param_1,(int)*pcVar4,param_3);
    while( true ) {
      if (pvVar3 != (void *)0x0) {
        return (int)pcVar4 - *(int *)((int)this + 4);
      }
      if (pcVar4 == *(char **)((int)this + 4)) break;
      pcVar1 = pcVar4 + -1;
      pcVar4 = pcVar4 + -1;
      pvVar3 = _memchr(param_1,(int)*pcVar1,param_3);
    }
  }
  return DAT_100f7054;
}

