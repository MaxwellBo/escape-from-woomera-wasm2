
undefined4 __fastcall FUN_1005d300(void *param_1)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  undefined3 extraout_var;
  uint *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  
  FUN_1005d2c0((int)param_1);
  uVar6 = 0;
  switch(*(undefined4 *)((int)param_1 + 0x26c)) {
  case 1:
    puVar1 = (uint *)((int)param_1 + 0x168);
    bVar3 = FUN_10019450(puVar1);
    if (CONCAT31(extraout_var,bVar3) != 0) {
      uVar6 = FUN_10019410(puVar1);
      uVar8 = 1;
      iVar7 = FUN_10019460(puVar1);
      uVar6 = FUN_1005e720(param_1,(float *)(*(int *)(iVar7 + 4) + 8),uVar8,uVar6);
      return uVar6;
    }
    break;
  case 2:
    uVar6 = FUN_10019410((uint *)((int)param_1 + 0x160));
    uVar6 = FUN_1005e720(param_1,(float *)((int)param_1 + 0x2a8),2,uVar6);
    return uVar6;
  case 0x10:
    piVar4 = *(int **)((int)param_1 + 8);
    iVar7 = 0;
    if (piVar4 != (int *)0x0) {
      puVar1 = (uint *)((int)param_1 + 0x1f8);
      do {
        puVar5 = puVar1;
        if (7 < iVar7) {
          return 1;
        }
        *puVar5 = 0x10;
        iVar2 = piVar4[1];
        puVar5[-3] = *(uint *)(iVar2 + 8);
        puVar5[-2] = *(uint *)(iVar2 + 0xc);
        puVar5[-1] = *(uint *)(iVar2 + 0x10);
        piVar4 = (int *)(**(code **)(*piVar4 + 0xd8))();
        iVar7 = iVar7 + 1;
        puVar1 = puVar5 + 4;
      } while (piVar4 != (int *)0x0);
      *puVar5 = *puVar5 | 0x80;
    }
    return 1;
  case 0x20:
    uVar6 = FUN_100609d0(param_1,*(float *)((int)param_1 + 0x278),
                         *(undefined4 *)((int)param_1 + 0x27c),*(undefined4 *)((int)param_1 + 0x280)
                        );
    break;
  case 0x40:
    uVar6 = FUN_1005e720(param_1,(float *)((int)param_1 + 0x278),0x40,0);
    return uVar6;
  }
  return uVar6;
}

