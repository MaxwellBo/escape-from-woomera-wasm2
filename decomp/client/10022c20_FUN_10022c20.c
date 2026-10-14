
void __cdecl FUN_10022c20(int *param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  void *this;
  
  pbVar3 = (byte *)(*DAT_100a508c)(1);
  if (*pbVar3 == 0) {
    iVar4 = -1;
  }
  else {
    iVar4 = FUN_100499e5(this,pbVar3);
  }
  iVar1 = *param_1;
  if ((iVar4 != iVar1) && (iVar2 = param_1[1], iVar4 != iVar2)) {
    if (iVar1 == 0) {
      *param_1 = iVar4;
    }
    else {
      if (iVar2 != 0) {
        (*DAT_100a5094)(s_Three_keys_down_for_a_button___c_10078f8c,iVar1,iVar2,pbVar3);
        return;
      }
      param_1[1] = iVar4;
    }
    if ((param_1[2] & 1U) == 0) {
      param_1[2] = param_1[2] | 3;
      return;
    }
  }
  return;
}

