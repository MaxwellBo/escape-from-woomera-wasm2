
/* WARNING: Removing unreachable block (ram,0x10046452) */
/* WARNING: Removing unreachable block (ram,0x10046460) */
/* WARNING: Removing unreachable block (ram,0x10046480) */
/* WARNING: Removing unreachable block (ram,0x1004649e) */

void FUN_100463c0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined4 in_stack_ffffffb0;
  undefined4 in_stack_ffffffb4;
  undefined4 in_stack_ffffffb8;
  undefined4 uVar7;
  undefined1 auStack_30 [48];
  
  if ((DAT_100bc338 != '\0') && (DAT_100bc350 != (int *)0x0)) {
    uVar7 = 0x42200000;
    puVar6 = &stack0xffffffb0;
    (**(code **)(*DAT_100bc350 + 0x14))();
    puVar2 = FUN_100464c0(auStack_30,puVar6,in_stack_ffffffb0,in_stack_ffffffb4,in_stack_ffffffb8,
                          uVar7);
    puVar5 = &DAT_100bc360;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    (**(code **)(*DAT_100bc350 + 0xc))();
  }
  piVar1 = DAT_100bc330;
  DAT_100bc338 = 0;
  DAT_100bc350 = (int *)0x0;
  for (piVar4 = DAT_100bc32c; piVar4 != piVar1; piVar4 = piVar4 + 1) {
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)();
    }
    *piVar4 = 0;
  }
  DAT_100bc330 = DAT_100bc32c;
  DAT_100bc348 = DAT_100bc344;
  return;
}

