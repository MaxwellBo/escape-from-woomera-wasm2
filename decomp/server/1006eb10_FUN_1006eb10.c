
void __thiscall FUN_1006eb10(void *this,int param_1,int param_2)

{
  if (*(int *)this == 100) {
    FUN_100c9014((byte *)s_Queue_is_full__101130ec);
    return;
  }
  *(int *)((int)this + *(int *)this * 8 + 8) = param_2;
  *(int *)((int)this + *(int *)this * 8 + 4) = param_1;
  *(int *)this = *(int *)this + 1;
  FUN_1006ec00(this);
  return;
}

