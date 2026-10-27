
void __fastcall FUN_1000fe50(CBaseEntity *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000fd50((int)param_1);
  if (iVar1 != 0) {
    (**(code **)(*(int *)param_1 + 0x184))(0x2b);
    return;
  }
  FUN_10006c50(param_1);
  return;
}

