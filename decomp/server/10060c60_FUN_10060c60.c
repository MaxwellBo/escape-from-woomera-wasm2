
void __fastcall FUN_10060c60(int *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined3 extraout_var_00;
  int iVar3;
  undefined4 *puVar4;
  
  (*DAT_10121efc)();
  if ((uint)param_1[0x76] < 8) {
    (*DAT_10121efc)();
  }
  if (DAT_10102248 != 0) {
    puVar4 = &DAT_10102248;
    iVar2 = DAT_10102248;
    do {
      if (iVar2 == param_1[0x73]) {
        (*DAT_10121efc)();
        break;
      }
      iVar2 = puVar4[2];
      puVar4 = puVar4 + 2;
    } while (iVar2 != 0);
  }
  if (param_1[0x79] == 0) {
    (*DAT_10121efc)(1,s_No_Schedule__1011151c);
  }
  else {
    (*DAT_10121efc)();
    puVar4 = (undefined4 *)FUN_10006c30((int)param_1);
    if (puVar4 != (undefined4 *)0x0) {
      (*DAT_10121efc)(1,s_Task__d____d___1011152c,*puVar4,param_1[0x7a]);
    }
  }
  bVar1 = FUN_10019450((uint *)(param_1 + 0x58));
  if (CONCAT31(extraout_var,bVar1) == 0) {
    (*DAT_10121efc)(1,s_No_enemy_10111500);
  }
  else {
    FUN_10019460((uint *)(param_1 + 0x58));
    (*DAT_10121efc)();
  }
  iVar2 = (**(code **)(*param_1 + 0x98))();
  if (iVar2 != 0) {
    (*DAT_10121efc)(1,s_Moving_101114f4);
    if ((float)param_1[0x72] <= *DAT_10122044) {
      iVar2 = (**(code **)(*param_1 + 0x160))();
      if (param_1[0x74] == iVar2) {
        (*DAT_10121efc)(1,s___In_stopped_anim__101114c8);
      }
    }
    else {
      (*DAT_10121efc)(1,s___Stopped_for___2f__101114dc,
                      (double)((float)param_1[0x72] - *DAT_10122044));
    }
  }
  iVar2 = (**(code **)(*param_1 + 0x78))();
  if (iVar2 != 0) {
    bVar1 = FUN_10019450((uint *)(iVar2 + 0x308));
    if (CONCAT31(extraout_var_00,bVar1) == 0) {
      (*DAT_10121efc)(1,&DAT_101114c0);
    }
    (*DAT_10121efc)(1,s_In_Squad__101114b4);
    iVar3 = FUN_10019410((uint *)(iVar2 + 0x308));
    if (iVar3 != iVar2) {
      (*DAT_10121efc)(1,&DAT_101114c0);
    }
    (*DAT_10121efc)(1,s_Leader__101114ac);
  }
  (*DAT_10121efc)(1,&DAT_1010541c);
  (*DAT_10121efc)(1,s_Yaw_speed__3_1f_Health___3_1f_1011148c,(double)*(float *)(param_1[1] + 0xb0),
                  (double)*(float *)(param_1[1] + 0x160));
  if ((*(byte *)(param_1[1] + 0x1a0) & 0x10) != 0) {
    (*DAT_10121efc)(1,s_PRISONER__10111480);
  }
  if ((*(uint *)(param_1[1] + 0x1a0) & 0x100) != 0) {
    (*DAT_10121efc)(1,s_Pre_Disaster__10111470);
  }
  (*DAT_10121efc)(1,&DAT_1010541c);
  return;
}

