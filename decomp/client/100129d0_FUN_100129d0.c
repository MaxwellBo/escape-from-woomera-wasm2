
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100129d0(void *this,double param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  float10 fVar4;
  
  fVar4 = (float10)(*DAT_100a50c8)();
  if ((float10)_DAT_10059eb0 < fVar4 - (float10)*(float *)((int)this + 0x18)) {
    FUN_10012e90(this,'\0');
  }
  *(double *)((int)this + 0x17738) = param_1 + *(double *)((int)this + 0x17738);
  cVar1 = (**(code **)(**(int **)((int)this + 0x17734) + 0x10))();
  puVar2 = (undefined4 *)((int)this + 0x18ffc);
  iVar3 = 7;
  if (cVar1 == '\0') {
    do {
      (**(code **)(*(int *)*puVar2 + 0x24))(0);
      puVar2 = puVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  else {
    do {
      (**(code **)(*(int *)*puVar2 + 0x24))(CONCAT31((int3)((uint)puVar2[3] >> 8),puVar2[3] != -1));
      puVar2 = puVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = 0;
  do {
    FUN_10013120(this,iVar3);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x20);
  return;
}

