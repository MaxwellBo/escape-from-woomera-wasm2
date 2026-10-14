
void __fastcall FUN_1002b180(void *param_1)

{
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x110) = 0;
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x128) = 0;
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x148) = 0;
  *(uint *)(*(int *)((int)param_1 + 4) + 0x1a4) =
       *(uint *)(*(int *)((int)param_1 + 4) + 0x1a4) | 0x20000000;
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0xb8) = *(undefined4 *)((int)param_1 + 0xe0);
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0xb4) = *(undefined4 *)((int)param_1 + 0xdc);
  FUN_1002b030(param_1);
  *(float *)(*(int *)((int)param_1 + 4) + 0x144) = (float)*(int *)((int)param_1 + 200);
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x114) = *(undefined4 *)((int)param_1 + 0xcc);
  *(float *)(*(int *)((int)param_1 + 4) + 0x130) = (float)*(int *)((int)param_1 + 0xe4);
  *(float *)(*(int *)((int)param_1 + 4) + 0x134) = (float)*(int *)((int)param_1 + 0xd4);
  iVar1 = *(int *)((int)param_1 + 4);
  uVar2 = *(uint *)(iVar1 + 0x1a0);
  if ((uVar2 & 0x80) != 0) {
    *(uint *)(iVar1 + 0x148) = *(uint *)(iVar1 + 0x148) & 0xf | 0x40;
    return;
  }
  if ((uVar2 & 0x100) != 0) {
    *(uint *)(iVar1 + 0x148) = (uint)((byte)*(undefined4 *)(iVar1 + 0x148) & 0xf | 0x80);
    return;
  }
  if ((uVar2 & 0x200) != 0) {
    *(uint *)(iVar1 + 0x148) = *(uint *)(iVar1 + 0x148) & 0xf | 0x20;
  }
  return;
}

