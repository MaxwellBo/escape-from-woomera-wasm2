
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10013120(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  float10 fVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 extraout_ECX;
  uint uVar8;
  float10 fVar9;
  int local_10 [4];
  
  piVar1 = *(int **)((int)this + param_1 * 4 + 0x17758);
  if (piVar1 != (int *)0x0) {
    iVar6 = (*DAT_100a5168)(param_1 + 1,local_10);
    if (iVar6 != 0) {
      fVar9 = (float10)FUN_1004a6da(extraout_ECX);
      fVar3 = (float10)_DAT_1005ac70;
      uVar8 = 1 << ((byte)param_1 & 0x1f);
      iVar6 = (param_1 >> 5) * 4;
      uVar2 = *(uint *)(iVar6 + 0x24 + (int)this);
      bVar4 = FUN_100137e0(this,param_1 + 1);
      bVar5 = FUN_10011fa0((void *)((int)this + 0x177f8),local_10);
      if (!bVar4) {
        (**(code **)(*piVar1 + 0x1fc))(0);
        return;
      }
      if (bVar5) {
        (**(code **)(*piVar1 + 0x1fc))(*(undefined4 *)((int)this + 0x17754));
        return;
      }
      if ((uVar2 & uVar8) != 0) {
        if (fVar3 <= fVar9) {
          uVar7 = *(undefined4 *)((int)this + 0x17748);
        }
        else {
          uVar7 = *(undefined4 *)((int)this + 0x1774c);
        }
        (**(code **)(*piVar1 + 0x1fc))(uVar7);
        (**(code **)(*piVar1 + 0x120))(0xff,0xaa,0,1);
        return;
      }
      if ((uVar8 & *(uint *)(iVar6 + 0x2c + (int)this)) == 0) {
        (**(code **)(*piVar1 + 0x1fc))(*(undefined4 *)((int)this + 0x17740));
        (**(code **)(*piVar1 + 0x120))(100,100,100,1);
        return;
      }
      (**(code **)(*piVar1 + 0x1fc))(*(undefined4 *)((int)this + 0x17744));
    }
  }
  return;
}

