
void __fastcall FUN_1009f080(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((param_1[0x32] != 0) && (iVar1 = FUN_100b5a50(&DAT_101323a8,param_1[0x32]), iVar1 != 1)) {
    return;
  }
  if ((*(byte *)(param_1[1] + 0x1a0) & 2) == 0) {
    iVar1 = param_1[0x33];
    piVar2 = param_1;
  }
  else {
    piVar2 = (int *)FUN_100aec40(0,s_player_10101c54);
    if (piVar2 == (int *)0x0) {
      (*DAT_10121efc)(4,s_trigger_auto___From_Player__is_t_10118eec);
      goto LAB_1009f0eb;
    }
    iVar1 = param_1[0x33];
  }
  FUN_10098e40(param_1,piVar2,iVar1,0);
LAB_1009f0eb:
  if ((*(byte *)(param_1[1] + 0x1a0) & 1) != 0) {
    FUN_100b0ef0((int)param_1);
  }
  return;
}

