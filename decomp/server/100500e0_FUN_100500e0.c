
void __fastcall FUN_100500e0(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  bVar1 = FUN_10019450((uint *)(param_1 + 0x308));
  if (CONCAT31(extraout_var,bVar1) == 0) {
LAB_10050117:
    local_c = 0xbc;
    local_8 = 0xdc;
  }
  else {
    iVar2 = FUN_100965f0(param_1);
    if (iVar2 == 2) {
      local_c = 0x65;
      local_8 = 0x85;
      local_4 = 0xdd;
      goto LAB_10050126;
    }
    if (iVar2 != 3) {
      if (iVar2 == 4) {
        local_c = 0x3e;
        local_8 = 0x21;
        local_4 = 0xd3;
        goto LAB_10050126;
      }
      (*DAT_10121efc)(2,s_Unsupported_Houndeye_SquadSize__1010f434);
      goto LAB_10050117;
    }
    local_c = 0x43;
    local_8 = 0x55;
  }
  local_4 = 0xff;
LAB_10050126:
  (*DAT_10121ec8)(local_c);
  (*DAT_10121ec8)(local_8);
  (*DAT_10121ec8)(local_4);
  return;
}

