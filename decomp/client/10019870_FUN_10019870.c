
void FUN_10019870(void)

{
  uint uVar1;
  undefined4 *puVar2;
  uint in_stack_00008008;
  undefined4 *in_stack_0000800c;
  
  FUN_1004a6a0();
  puVar2 = (undefined4 *)register0x00000010;
  for (uVar1 = in_stack_00008008 >> 2; puVar2 = puVar2 + 1, uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *in_stack_0000800c;
    in_stack_0000800c = in_stack_0000800c + 1;
  }
  for (uVar1 = in_stack_00008008 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)in_stack_0000800c;
    in_stack_0000800c = (undefined4 *)((int)in_stack_0000800c + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  (**(code **)(DAT_100a5144 + 0xc))(in_stack_00008008 + 4,&stack0x00000000);
  return;
}

