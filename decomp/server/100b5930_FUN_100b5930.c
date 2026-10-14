
void __fastcall FUN_100b5930(int *param_1)

{
  int iVar1;
  
  (*DAT_10121efc)(1,s____Globals____1011bf14);
  for (iVar1 = *param_1; iVar1 != 0; iVar1 = *(int *)(iVar1 + 100)) {
    (*DAT_10121efc)(1,s__s___s___s__1011bf04,iVar1,iVar1 + 0x40,
                    (&PTR_DAT_1011bcc8)[*(int *)(iVar1 + 0x60)]);
  }
  return;
}

