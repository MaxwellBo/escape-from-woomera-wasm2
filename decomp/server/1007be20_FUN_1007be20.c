
void __thiscall FUN_1007be20(void *this,int param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int local_4;
  
  if (*(int *)((int)this + 0x528) != 0) {
    FUN_10081e70((int)this);
    (**(code **)(**(int **)((int)this + 0x528) + 0x134))(0);
    *(undefined4 *)((int)this + 0x528) = 0;
  }
  *(undefined4 *)((int)this + 0x530) = 0;
  piVar3 = (int *)((int)this + 0x510);
  local_4 = 6;
  do {
    iVar2 = *piVar3;
    *(int *)((int)this + 0x528) = iVar2;
    while (iVar2 != 0) {
      iVar2 = (*(int **)((int)this + 0x528))[0x38];
      (**(code **)(**(int **)((int)this + 0x528) + 0x144))();
      *(int *)((int)this + 0x528) = iVar2;
    }
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  *(undefined4 *)((int)this + 0x528) = 0;
  *(undefined4 *)(*(int *)((int)this + 4) + 0xbc) = 0;
  *(undefined4 *)(*(int *)((int)this + 4) + 0xc0) = 0;
  if (param_1 == 0) {
    puVar1 = (uint *)(*(int *)((int)this + 4) + 0x168);
    *puVar1 = *puVar1 & 0x80000000;
  }
  else {
    *(undefined4 *)(*(int *)((int)this + 4) + 0x168) = 0;
  }
  puVar4 = (undefined4 *)((int)this + 0x534);
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  (**(code **)(*(int *)this + 0x23c))();
  (*DAT_10121ec0)(1,DAT_10124884,0,*(undefined4 *)(*(int *)((int)this + 4) + 0x208));
  (*DAT_10121ec8)(0);
  (*DAT_10121ec8)(0);
  (*DAT_10121ec8)(0);
  (*DAT_10121ec4)();
  return;
}

