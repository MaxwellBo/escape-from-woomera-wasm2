
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10098e40(void *this,int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int unaff_retaddr;
  
  if ((*(int *)(*(int *)((int)this + 4) + 0x1c8) != 0) || (*(int *)((int)this + 0xbc) != 0)) {
    if (*(float *)((int)this + 0xb8) != _DAT_100dd5f8) {
      iVar2 = (*DAT_10121e5c)();
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = iVar2 + 0x80;
      }
      iVar1 = *(int *)(iVar2 + 0x208);
      if ((iVar1 == 0) || (piVar3 = *(int **)(iVar1 + 0x7c), piVar3 == (int *)0x0)) {
        piVar3 = (int *)(*DAT_10121f04)(iVar1,200);
        if (piVar3 == (int *)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          *piVar3 = (int)&PTR_FUN_100ee808;
        }
        piVar3[1] = iVar2;
      }
      *(int *)piVar3[1] = (int)s_DelayedUse_1011791c - *(int *)(DAT_10122044 + 0x98);
      (**(code **)(*piVar3 + 8))(*(undefined4 *)((int)this + 0xb8));
      piVar3[0x1d] = (int)CBaseDelay::DelayThink;
      *(int **)(piVar3[1] + 0x180) = param_1;
      piVar3[0x2f] = *(int *)((int)this + 0xbc);
      piVar3[0x2e] = 0;
      *(undefined4 *)(piVar3[1] + 0x1c8) = *(undefined4 *)(*(int *)((int)this + 4) + 0x1c8);
      FUN_10019420(piVar3 + 0x30,unaff_retaddr);
      return;
    }
    if (*(int *)((int)this + 0xbc) != 0) {
      (*DAT_10121efc)(2,s_KillTarget___s_1011790c,
                      *(int *)(DAT_10122044 + 0x98) + *(int *)((int)this + 0xbc));
      FUN_10098c10((uint *)(*(int *)(DAT_10122044 + 0x98) + *(int *)((int)this + 0xbc)),param_1,this
                   ,4,0);
    }
    iVar2 = *(int *)(*(int *)((int)this + 4) + 0x1c8);
    if (iVar2 != 0) {
      FUN_10098c10((uint *)(*(int *)(DAT_10122044 + 0x98) + iVar2),param_1,this,param_2,param_3);
    }
  }
  return;
}

