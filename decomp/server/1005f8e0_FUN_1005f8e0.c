
void __thiscall FUN_1005f8e0(void *this,int param_1)

{
  int iVar1;
  
  *(int *)((int)this + 8) = param_1;
  if (param_1 == 0) {
    (*DAT_10121efc)(4,s_ReadyMonster_____s_couldn_t_find_101112ac,
                    **(int **)((int)this + 4) + *(int *)(DAT_10122044 + 0x98),
                    (*(int **)((int)this + 4))[0x72] + *(int *)(DAT_10122044 + 0x98));
    return;
  }
  *(undefined4 *)((int)this + 0x26c) = 0x10;
  if (*(int *)(*(int *)((int)this + 4) + 0x108) == 5) {
    *(undefined4 *)((int)this + 0x284) = 5;
  }
  else {
    *(undefined4 *)((int)this + 0x284) = 3;
  }
  iVar1 = FUN_1005d300(this);
  if (iVar1 == 0) {
    (*DAT_10121efc)(2,s_Can_t_Create_Route__10111294);
  }
  FUN_10062000(this,1);
  iVar1 = (**(code **)(*(int *)this + 0x184))(2);
  FUN_10004e70(this,iVar1);
  return;
}

