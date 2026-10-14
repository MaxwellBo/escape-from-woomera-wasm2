
void __fastcall FUN_10077570(int param_1)

{
  int iVar1;
  void *this;
  uint uVar2;
  
  if (*(int *)(param_1 + 0xec) != 0) {
    iVar1 = *(int *)(param_1 + 4);
    this = *(void **)(iVar1 + 0x1e8);
    if (this != (void *)0x0) {
      uVar2 = *(uint *)(param_1 + 0xf0);
      if (uVar2 == 0) {
        FUN_10094b20(this,*(undefined4 *)(iVar1 + 0x208),6,
                     (char *)(*(int *)((int)DAT_10122044 + 0x98) + (int)this),0,0,0x20,100);
      }
      else {
        (*DAT_10121ff4)(10,*(undefined4 *)(iVar1 + 0x208),
                        CONCAT22((short)(uVar2 >> 0x10),*(undefined2 *)(param_1 + 0x118)),0,
                        &DAT_10121dd8,&DAT_10121dd8,0,0,(uVar2 & 7) << 0xc,0,1,0);
      }
      FUN_10094b20(DAT_10122044,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),3,
                   (char *)(*(int *)(*(int *)(param_1 + 4) + 0x1ec) +
                           *(int *)((int)DAT_10122044 + 0x98)),*(undefined4 *)(param_1 + 0xf4),
                   0x3f4ccccd,0,100);
      *(undefined4 *)(param_1 + 0xec) = 0;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0xec) = 0;
  return;
}

