
void __thiscall FUN_1003d2f0(void *this,Panel *param_1)

{
  int *piVar1;
  int iVar2;
  Panel *pPVar3;
  
  iVar2 = (**(code **)(DAT_100a5144 + 4))();
  if ((iVar2 == 0) && ((DAT_100a4fe4 == 0 || (param_1 == (Panel *)0x5)))) {
    for (iVar2 = *(int *)((int)this + 0xaa0); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc0)) {
      if (*(Panel **)(iVar2 + 0xc4) == param_1) {
        return;
      }
    }
    switch(param_1) {
    case (Panel *)0x2:
      pPVar3 = (Panel *)FUN_1003d530((int)this);
      break;
    case (Panel *)0x3:
      pPVar3 = (Panel *)FUN_1003d5f0((int)this);
      break;
    case (Panel *)0x4:
      pPVar3 = FUN_1003cea0(this,1);
      break;
    case (Panel *)0x5:
      pPVar3 = FUN_1003cea0(this,3);
      break;
    case (Panel *)0x6:
      pPVar3 = FUN_1003cea0(this,2);
      break;
    default:
      pPVar3 = FUN_10047830(param_1,this);
    }
    if (pPVar3 != (Panel *)0x0) {
      FUN_1003c9a0(this);
      *(Panel **)(pPVar3 + 0xc4) = param_1;
      *(int *)(pPVar3 + 0xcc) = 1;
      (**(code **)(*(int *)pPVar3 + 0x40))(this);
      piVar1 = *(int **)((int)this + 0xaa0);
      if (piVar1 != (int *)0x0) {
        if ((piVar1[0x31] == 3) && (param_1 == (Panel *)0x2)) {
          (**(code **)(*piVar1 + 0x204))();
          *(Panel **)((int)this + 0xaa0) = pPVar3;
          if (*(void **)(pPVar3 + 0xc0) == (void *)0x0) {
            *(int **)(pPVar3 + 0xc0) = piVar1;
            (**(code **)(**(int **)((int)this + 0xaa0) + 0x200))();
            FUN_1003dcc0((int)this);
            return;
          }
          FUN_1003e870(*(void **)(pPVar3 + 0xc0),piVar1);
          (**(code **)(**(int **)((int)this + 0xaa0) + 0x200))();
          FUN_1003dcc0((int)this);
          return;
        }
        if ((void *)piVar1[0x30] == (void *)0x0) {
          piVar1[0x30] = (int)pPVar3;
          return;
        }
        FUN_1003e870((void *)piVar1[0x30],pPVar3);
        return;
      }
      *(Panel **)((int)this + 0xaa0) = pPVar3;
      (**(code **)(*(int *)pPVar3 + 0x200))();
      FUN_1003dcc0((int)this);
    }
  }
  return;
}

