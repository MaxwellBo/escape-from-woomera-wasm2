
void __thiscall
FUN_1007bf80(void *this,uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,int *param_13
            )

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  void *this_00;
  float10 fVar6;
  
  iVar5 = param_2;
  if (param_13 != (int *)0x0) {
    param_1 = param_1 | 0x800;
  }
  FUN_1007bf30(this,&DAT_1010ec5c,param_2);
  FUN_1007bf30(this,&DAT_10114dfc,param_3);
  FUN_1007bf30(this,(byte *)s_buckshot_10114df0,param_4);
  FUN_1007bf30(this,(byte *)s_bolts_10106650,param_5);
  FUN_1007bf30(this,(byte *)s_ARgrenades_10111afc,param_6);
  FUN_1007bf30(this,(byte *)s_uranium_101086ac,param_8);
  FUN_1007bf30(this,(byte *)s_rockets_10114de8,param_7);
  FUN_1007bf30(this,(byte *)s_Satchel_Charge_10114dd8,param_9);
  FUN_1007bf30(this,(byte *)s_Snarks_10114dd0,param_10);
  FUN_1007bf30(this,(byte *)s_Trip_Mine_10114dc4,param_11);
  FUN_1007bf30(this,(byte *)s_Hand_Grenade_1010d708,param_12);
  FUN_1007bf30(this,(byte *)s_Hornets_1010ee38,(int)param_13);
  param_13 = (int *)((int)this + 0x510);
  param_2 = 6;
  do {
    this_00 = (void *)*param_13;
    if (this_00 != (void *)0x0) {
      iVar2 = *(int *)((int)this_00 + 0xe0);
      while (iVar2 != 0) {
        if ((param_1 & 1 << ((byte)*(undefined4 *)(iVar2 + 0xe4) & 0x1f)) == 0) {
          FUN_100b4650(this_00,(int)this,0,iVar5,param_3,param_4,param_5,param_6,param_7,param_8,
                       param_9,param_10,param_11,param_12);
          (**(code **)(**(int **)((int)this_00 + 0xe0) + 0x144))();
          if (*(int *)((int)this + 0x530) == *(int *)((int)this_00 + 0xe0)) {
            *(undefined4 *)((int)this + 0x530) = 0;
          }
          *(undefined4 *)((int)this_00 + 0xe0) =
               *(undefined4 *)(*(int *)((int)this_00 + 0xe0) + 0xe0);
        }
        else {
          FUN_100b4650(this_00,(int)this,1,iVar5,param_3,param_4,param_5,param_6,param_7,param_8,
                       param_9,param_10,param_11,param_12);
          this_00 = *(void **)((int)this_00 + 0xe0);
        }
        iVar2 = *(int *)((int)this_00 + 0xe0);
      }
      if ((param_1 & 1 << ((byte)*(undefined4 *)(*param_13 + 0xe4) & 0x1f)) == 0) {
        FUN_100b4650(this_00,(int)this,0,iVar5,param_3,param_4,param_5,param_6,param_7,param_8,
                     param_9,param_10,param_11,param_12);
        (**(code **)(*(int *)*param_13 + 0x144))();
        if (*(int *)((int)this + 0x530) == *param_13) {
          *(undefined4 *)((int)this + 0x530) = 0;
        }
        *param_13 = *(int *)(*param_13 + 0xe0);
      }
      else {
        FUN_100b4650(this_00,(int)this,1,iVar5,param_3,param_4,param_5,param_6,param_7,param_8,
                     param_9,param_10,param_11,param_12);
      }
    }
    param_13 = param_13 + 1;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  uVar3 = *(uint *)(*(int *)((int)this + 4) + 0x168);
  *(uint *)(*(int *)((int)this + 4) + 0x168) = uVar3 & 0x7fffffff;
  *(uint *)(*(int *)((int)this + 4) + 0x168) = *(uint *)(*(int *)((int)this + 4) + 0x168) & param_1;
  if (((uVar3 & 0x80000000) != 0) && ((param_1 & 1) == 0)) {
    puVar1 = (uint *)(*(int *)((int)this + 4) + 0x168);
    *puVar1 = *puVar1 | 0x80000000;
  }
  piVar4 = *(int **)((int)this + 0x528);
  if (piVar4 != (int *)0x0) {
    if ((param_1 & 1 << ((byte)piVar4[0x39] & 0x1f)) == 0) {
      FUN_10081e70((int)this);
      (**(code **)(**(int **)((int)this + 0x528) + 0x134))(0);
      *(undefined4 *)(*(int *)((int)this + 4) + 0xbc) = 0;
      *(undefined4 *)(*(int *)((int)this + 4) + 0xc0) = 0;
      *(undefined4 *)((int)this + 0x528) = 0;
      (**(code **)(*(int *)this + 0x23c))();
      (*DAT_10121ec0)(1,DAT_10124884,0,*(undefined4 *)(*(int *)((int)this + 4) + 0x208));
      (*DAT_10121ec8)(0);
      (*DAT_10121ec8)(0);
      (*DAT_10121ec8)(0);
      (*DAT_10121ec4)();
      return;
    }
    if ((piVar4 != (int *)0x0) && (iVar5 = (**(code **)(*piVar4 + 0x180))(), iVar5 == 0)) {
      fVar6 = FUN_100ae400();
      *(float *)(*(int *)((int)this + 0x528) + 0x100) = (float)fVar6;
    }
  }
  (**(code **)(*(int *)this + 0x23c))();
  return;
}

