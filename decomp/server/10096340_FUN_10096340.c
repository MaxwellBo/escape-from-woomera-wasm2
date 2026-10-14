
/* WARNING: Removing unreachable block (ram,0x1009636c) */

void __thiscall FUN_10096340(void *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  uint *puVar4;
  int iVar5;
  
  pvVar1 = (void *)FUN_10019410((uint *)((int)this + 0x308));
  if (pvVar1 == (void *)0x0) {
    pvVar1 = this;
  }
  if ((void *)param_1 == pvVar1) {
    iVar5 = 0;
    puVar4 = (uint *)((int)this + 0x310);
    do {
      iVar2 = FUN_10019410(puVar4);
      if (iVar2 != 0) {
        FUN_10019420((void *)(iVar2 + 0x308),0);
        FUN_10019420(puVar4,0);
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 2;
    } while (iVar5 < 4);
  }
  else {
    pvVar1 = (void *)FUN_10019410((uint *)((int)this + 0x308));
    if (pvVar1 == (void *)0x0) {
      pvVar1 = this;
    }
    if (pvVar1 != (void *)0x0) {
      iVar5 = 0;
      puVar4 = (uint *)((int)pvVar1 + 0x310);
      do {
        pvVar3 = (void *)FUN_10019410(puVar4);
        if (pvVar3 == this) {
          FUN_10019420((void *)((int)pvVar1 + iVar5 * 8 + 0x310),0);
          break;
        }
        iVar5 = iVar5 + 1;
        puVar4 = puVar4 + 2;
      } while (iVar5 < 4);
    }
  }
  FUN_10019420((void *)(param_1 + 0x308),0);
  return;
}

