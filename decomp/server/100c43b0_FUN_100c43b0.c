
int __cdecl FUN_100c43b0(byte *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined **ppuVar3;
  int iVar4;
  
  iVar2 = -1;
  iVar4 = 0;
  ppuVar3 = &PTR_s_weapon_efw_Pliers_100f81e0;
  do {
    uVar1 = FUN_100c8110(*ppuVar3,param_1);
    if ((char)uVar1 != '\0') {
      iVar2 = iVar4 + 0x10;
    }
    ppuVar3 = ppuVar3 + 1;
    iVar4 = iVar4 + 1;
  } while ((int)ppuVar3 < 0x100f8204);
  return iVar2;
}

