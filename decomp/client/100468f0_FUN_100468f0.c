
void __cdecl FUN_100468f0(int param_1,int param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  
  puVar1 = DAT_100bc330;
  puVar3 = DAT_100bc32c;
  while ((puVar3 != puVar1 &&
         (cVar2 = (**(code **)(*(int *)*puVar3 + 0x10))((float)param_1,(float)param_2),
         cVar2 == '\0'))) {
    puVar3 = puVar3 + 1;
  }
  if (puVar3 != DAT_100bc330) {
    DAT_100bc350 = *puVar3;
    return;
  }
  DAT_100bc350 = 0;
  return;
}

