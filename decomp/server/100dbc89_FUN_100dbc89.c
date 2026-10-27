
void * __thiscall FUN_100dbc89(void *this,int param_1)

{
  void *pvVar1;
  
  if (*(int *)((int)this + 0x4c) == -1) {
    if (*(int *)((int)this + 0x30) < 0) {
      FUN_100db550((LPCRITICAL_SECTION)((int)this + 0x34));
    }
    *(int *)((int)this + 0x4c) = param_1;
    if (((param_1 != -1) && (*(int *)((int)this + 8) == 0)) && (*(int *)((int)this + 0x14) == 0)) {
      pvVar1 = operator_new(0x200);
      if (pvVar1 == (void *)0x0) {
        *(undefined4 *)((int)this + 8) = 1;
      }
      else {
        FUN_100dc14c(this,pvVar1,(int)pvVar1 + 0x200,1);
      }
    }
    if (*(int *)((int)this + 0x30) < 0) {
      FUN_100db55b((LPCRITICAL_SECTION)((int)this + 0x34));
    }
  }
  else {
    this = (void *)0x0;
  }
  return this;
}

