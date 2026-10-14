
void __fastcall FUN_10076c16(undefined4 param_1,undefined4 param_2,undefined4 param_3,void *param_4)

{
  byte in_AL;
  int iVar1;
  char *this;
  char *unaff_EBX;
  char *unaff_EDI;
  byte in_CF;
  byte bVar2;
  
  *unaff_EBX = *unaff_EBX + (char)unaff_EBX + (0x94 < in_AL || CARRY1(in_AL + 0x6b,in_CF));
  bVar2 = (byte)((uint)param_1 >> 8) & unaff_EBX[7];
  this = (char *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar2,(char)param_1));
  *this = *this + bVar2;
  unaff_EBX[7] = unaff_EBX[7] ^ bVar2;
  *unaff_EDI = *unaff_EDI + (char)((uint)param_2 >> 8);
  iVar1 = FUN_10019c20(this,param_4);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = (*(int **)(this + 4))[0x73];
  if (iVar1 != 0) {
    FUN_100b18e0(param_4,*(int *)(DAT_10122044 + 0x98) + iVar1,(byte *)s_CFuncTrackTrain_10114038,
                 (int)this,0x10113888,0xf);
    return;
  }
  FUN_100b18e0(param_4,*(int *)(DAT_10122044 + 0x98) + **(int **)(this + 4),
               (byte *)s_CFuncTrackTrain_10114038,(int)this,0x10113888,0xf);
  return;
}

