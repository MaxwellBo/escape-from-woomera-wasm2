
bool __thiscall FUN_100137e0(void *this,int param_1)

{
  return (1 << ((byte)(param_1 + -1) & 0x1f) & *(uint *)((int)this + (param_1 + -1 >> 5) * 4 + 0x28)
         ) != 0;
}

