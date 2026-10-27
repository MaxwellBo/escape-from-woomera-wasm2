
void __thiscall FUN_10035d20(void *this,int *param_1)

{
  void *this_00;
  
  if (*param_1 == 8) {
    *(undefined4 *)((int)this + 0x314) = 0x43c80000;
  }
  else {
    if (*param_1 != 9) {
      FUN_10060620(this,param_1);
      return;
    }
    if (*(char **)((int)this + 800) != (char *)0x0) {
      this_00 = *(void **)(*(int *)((int)this + 4) + 0x208);
      FUN_10094b20(this_00,this_00,4,*(char **)((int)this + 800),0x3f800000,0x3f4ccccd,0,100);
      return;
    }
  }
  return;
}

