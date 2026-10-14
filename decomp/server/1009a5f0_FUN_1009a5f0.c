
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_1009a5f0(void *this,undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  int unaff_retaddr;
  undefined1 auStack_3c [16];
  float fStack_2c;
  
  iVar2 = (**(code **)(*(int *)this + 0x234))(param_2);
  puVar1 = (&PTR_s_monster_barney_101179f8)[iVar2];
  piVar3 = (int *)FUN_100aec40(unaff_retaddr,puVar1);
  do {
    if (piVar3 == (int *)0x0) {
      return (int *)0x0;
    }
    if ((piVar3 != this) && (iVar2 = (**(code **)(*piVar3 + 0xb8))(), iVar2 != 0)) {
      if (param_2 == 0) {
        fStack_2c = 1.0;
      }
      else {
        FUN_100afc60(*(int *)((int)this + 4) + 8,&stack0xffffffb8,1,
                     *(undefined4 *)(*(int *)((int)this + 4) + 0x208),auStack_3c);
      }
      if (fStack_2c == (float)_DAT_100dd628) {
        return piVar3;
      }
    }
    piVar3 = (int *)FUN_100aec40((int)piVar3,puVar1);
  } while( true );
}

