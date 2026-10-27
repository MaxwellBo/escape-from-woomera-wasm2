
int __thiscall FUN_10034150(void *this,int param_1,int param_2)

{
  if ((((-1 < param_1) && (param_1 < *(int *)((int)this + 0xc0))) && (-1 < param_2)) &&
     (param_2 < *(int *)((int)this + 0xc4))) {
    return *(int *)((int)this + 0xe0) + (*(int *)((int)this + 0xc0) * param_2 + param_1) * 0x14;
  }
  return 0;
}

