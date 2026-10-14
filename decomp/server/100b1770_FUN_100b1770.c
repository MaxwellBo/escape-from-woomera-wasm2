
void __cdecl FUN_100b1770(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 *this;
  undefined4 *puVar3;
  float10 fVar4;
  
  puVar3 = &DAT_1011a820;
  do {
    uVar1 = FUN_100d8b20((void *)puVar3[1],(void *)puVar3[1],*(byte **)(param_2 + 4));
    if (uVar1 == 0) {
      switch(*puVar3) {
      case 0:
      case 0xf:
        fVar4 = FUN_100c82a6(this,*(byte **)(param_2 + 8));
        *(float *)(puVar3[2] + param_1) = (float)fVar4;
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      case 1:
      case 0x10:
      case 0x11:
        uVar2 = (*DAT_10121f14)(*(undefined4 *)(param_2 + 8));
        *(undefined4 *)(puVar3[2] + param_1) = uVar2;
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      default:
        (*DAT_10121efc)(4,s_Bad_field_in_entity___1011b2c0);
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      case 7:
      case 8:
        FUN_100b0880((float *)(puVar3[2] + param_1),*(char **)(param_2 + 8));
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      case 10:
        uVar2 = FUN_100c8388(this,*(byte **)(param_2 + 8));
        *(undefined4 *)(puVar3[2] + param_1) = uVar2;
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
    }
    puVar3 = puVar3 + 4;
  } while (puVar3 < &DAT_1011ad80);
  return;
}

