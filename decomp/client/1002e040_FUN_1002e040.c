
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1002e040(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 extraout_ECX;
  undefined4 unaff_EBP;
  int iVar1;
  int iVar2;
  float10 fVar3;
  undefined1 *puVar4;
  int iVar5;
  float fVar6;
  undefined1 *puStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined1 auStack_20 [16];
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  uStack_40 = 0x1002e090;
  __ftol();
  uStack_40 = 0x1002e09b;
  fVar3 = (float10)(**(code **)(*param_1 + 0x28))();
  fVar6 = (float)fVar3;
  iVar2 = *(int *)(param_1[0x11] + 0x90) + param_1[0x11];
  iStack_48 = param_1[0xc];
  uStack_40 = CONCAT31((int3)((uint)extraout_ECX >> 8),*(undefined1 *)(iStack_48 + 0xb08));
  iStack_44 = iStack_48 + 0xb3c;
  iStack_48 = iStack_48 + 0x318;
  puStack_4c = auStack_20;
  (**(code **)(*param_1 + 0x38))(fVar6);
  iVar1 = 0;
  if (0 < *(int *)(param_1[0x11] + 0x8c)) {
    do {
      puVar4 = &stack0xffffffcc;
      iVar5 = iStack_c;
      (**(code **)(*param_1 + 0x3c))(uStack_40,unaff_EBP,iVar2,iStack_4,puVar4,iStack_c);
      (**(code **)(*param_1 + 0x40))(puVar4,fVar6,iVar2,iStack_4,&puStack_4c,iVar5);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x70;
      param_4 = iStack_8;
      iStack_4 = iStack_4 + 0xc;
      iStack_c = iStack_c + 0x10;
    } while (iVar1 < *(int *)(param_1[0x11] + 0x8c));
  }
  if ((*(byte *)(param_4 + 0x44) & 1) != 0) {
    *(undefined4 *)(iStack_10 + *(int *)(param_4 + 0x48) * 0xc) = 0;
  }
  if ((*(byte *)(param_4 + 0x44) & 2) != 0) {
    *(undefined4 *)(iStack_10 + 4 + *(int *)(param_4 + 0x48) * 0xc) = 0;
  }
  if ((*(byte *)(param_4 + 0x44) & 4) != 0) {
    *(undefined4 *)(iStack_10 + 8 + *(int *)(param_4 + 0x48) * 0xc) = 0;
  }
  if ((*(byte *)(param_4 + 0x44) & 0x40) != 0) {
    *(undefined4 *)(iStack_10 + *(int *)(param_4 + 0x48) * 0xc) =
         *(undefined4 *)(iStack_10 + *(int *)(param_4 + 0x48) * 0xc);
  }
  if ((*(byte *)(param_4 + 0x44) & 0x80) != 0) {
    *(undefined4 *)(iStack_10 + 4 + *(int *)(param_4 + 0x48) * 0xc) =
         *(undefined4 *)(iStack_10 + 4 + *(int *)(param_4 + 0x48) * 0xc);
  }
  if ((*(uint *)(param_4 + 0x44) & 0x100) != 0) {
    *(undefined4 *)(iStack_10 + 8 + *(int *)(param_4 + 0x48) * 0xc) =
         *(undefined4 *)(iStack_10 + 8 + *(int *)(param_4 + 0x48) * 0xc);
  }
  return;
}

