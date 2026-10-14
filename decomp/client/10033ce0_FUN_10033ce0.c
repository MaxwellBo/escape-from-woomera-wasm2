
void __thiscall FUN_10033ce0(void *this,int param_1,int param_2)

{
  if (param_1 != *(int *)((int)this + 200)) {
    *(int *)((int)this + 200) = param_1;
    FUN_100341a0(this,0);
    *(undefined1 *)((int)this + 0xbc) = 1;
  }
  if (param_2 != *(int *)((int)this + 0xcc)) {
    *(int *)((int)this + 0xcc) = param_2;
    FUN_10034200(this,0);
    *(undefined1 *)((int)this + 0xbc) = 1;
  }
  return;
}

