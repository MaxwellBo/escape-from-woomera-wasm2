
void __cdecl FUN_1004bc6e(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined1 *this;
  uint uVar3;
  undefined1 *puVar4;
  
  this = (undefined1 *)(int)*param_1;
  uVar3 = FUN_10052fc4((uint)this);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_1007bcf4 < 2) {
        uVar3 = (byte)PTR_DAT_1007bae8[*param_1 * 2] & 4;
        this = PTR_DAT_1007bae8;
      }
      else {
        puVar4 = &DAT_00000004;
        uVar3 = FUN_1004b6c6(this,(int)*param_1,4);
        this = puVar4;
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_1007bcf8;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}

