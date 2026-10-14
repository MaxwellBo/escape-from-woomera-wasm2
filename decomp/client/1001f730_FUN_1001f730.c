
void __thiscall FUN_1001f730(void *this,int param_1)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 0x408) = *(undefined4 *)((int)this + 0x428);
  *(undefined4 *)((int)this + 0x400) = 1;
  *(undefined4 *)((int)this + 0x404) = 0;
  *(undefined4 *)((int)this + 0x40c) = *(undefined4 *)((int)this + 0x42c);
  if (param_1 != 0) {
    FUN_1001f070((undefined4 *)((int)this + 0x414));
    FUN_1001f070((undefined4 *)((int)this + 0x410));
    FUN_1001f0a0((undefined4 *)((int)this + 0x418));
    *(undefined4 *)((int)this + 0x41c) = 0;
  }
  Ordinal_9(0x6987);
  (*(code *)*DAT_100a5148)();
  if (param_1 != 0) {
    (*(code *)DAT_100a5148[4])();
  }
  iVar1 = DAT_100a96cc;
  DAT_100a96cc = DAT_100a96cc + 1;
  (*(code *)DAT_100a5148[2])(iVar1,4,1,0,0x40140000,&stack0xffffffe8,FUN_1001ebd0);
  iVar1 = DAT_100a96cc;
  DAT_100a96cc = DAT_100a96cc + 1;
  (*(code *)DAT_100a5148[2])(iVar1,4,1,0,0x40140000,&stack0xffffffe8,FUN_1001ebd0);
  return;
}

