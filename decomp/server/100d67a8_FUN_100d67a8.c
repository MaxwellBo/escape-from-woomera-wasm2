
undefined4 FUN_100d67a8(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  uVar2 = 1;
  FUN_100cf6a6(1);
  if (param_1 == 0) {
    puVar1 = &DAT_10134c08;
    uVar4 = 2;
    pcVar3 = DAT_10134c08;
  }
  else {
    puVar1 = &DAT_10134c0c;
    uVar4 = 0x15;
    pcVar3 = DAT_10134c0c;
  }
  if (pcVar3 == (code *)0x0) {
    FUN_100cf707(1);
    uVar2 = 0;
  }
  else if (pcVar3 == (code *)0x1) {
    FUN_100cf707(1);
  }
  else {
    *puVar1 = 0;
    FUN_100cf707(1);
    (*pcVar3)(uVar4);
  }
  return uVar2;
}

