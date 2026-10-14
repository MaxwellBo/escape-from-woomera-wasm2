
void __thiscall FUN_100546f0(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_retaddr;
  undefined1 *puVar4;
  undefined1 auStack_c [12];
  
  if ((*(int *)((int)this + 0x364) < 8) && (param_2 != (int *)0x0)) {
    puVar2 = FUN_100295c0(0x10102c0c,0x1e);
    *(undefined4 **)((int)this + *(int *)((int)this + 0x364) * 4 + 0x344) = puVar2;
    if (*(int *)((int)this + *(int *)((int)this + 0x364) * 4 + 0x344) != 0) {
      uVar3 = (*DAT_10121f24)(*(undefined4 *)(*(int *)((int)this + 4) + 0x208));
      puVar4 = auStack_c;
      puVar2 = (undefined4 *)(**(code **)(*param_2 + 0xf8))(puVar4,uVar3);
      FUN_10029800(*(void **)((int)this + *(int *)((int)this + 0x364) * 4 + 0x344),puVar2,
                   (uint)puVar4);
      iVar1 = *(int *)(*(int *)((int)this + *(int *)((int)this + 0x364) * 4 + 0x344) + 4);
      *(uint *)(iVar1 + 0x110) =
           ((unaff_retaddr < 0) + 1) * 0x1000 | *(uint *)(iVar1 + 0x110) & 0xfff;
      iVar1 = *(int *)((int)this + *(int *)((int)this + 0x364) * 4 + 0x344);
      *(undefined4 *)(*(int *)(iVar1 + 4) + 0x150) = 0x43340000;
      *(undefined4 *)(*(int *)(iVar1 + 4) + 0x154) = 0x437f0000;
      *(undefined4 *)(*(int *)(iVar1 + 4) + 0x158) = 0x42c00000;
      *(undefined4 *)
       (*(int *)(*(int *)((int)this + *(int *)((int)this + 0x364) * 4 + 0x344) + 4) + 0x14c) =
           0x437f0000;
      *(undefined4 *)
       (*(int *)(*(int *)((int)this + *(int *)((int)this + 0x364) * 4 + 0x344) + 4) + 0x114) = 0x50;
      *(int *)((int)this + 0x364) = *(int *)((int)this + 0x364) + 1;
    }
  }
  return;
}

