
void __thiscall FUN_100083f0(void *this)

{
  int iVar1;
  
  *(undefined4 *)(*(int *)((int)this + 0xdc) + 0x314) = 0x1c2;
  iVar1 = *(int *)(*(int *)((int)this + 0xdc) + 4);
  (*DAT_1007f0bc)(1,*(undefined4 *)(iVar1 + 0x208),
                  CONCAT22((short)((uint)(iVar1 + 0x50) >> 0x10),*(undefined2 *)((int)this + 0x134))
                  ,0,iVar1 + 8,iVar1 + 0x50);
  iVar1 = *(int *)(*(int *)((int)this + 0xdc) + 4);
  (*DAT_1007f0bc)(3,*(undefined4 *)(iVar1 + 0x208),
                  CONCAT22((short)((uint)(iVar1 + 0x50) >> 0x10),*(undefined2 *)((int)this + 0x134))
                  ,0x3c23d70a,iVar1 + 8,iVar1 + 0x50,0,0,0,0,0,1);
  return;
}

