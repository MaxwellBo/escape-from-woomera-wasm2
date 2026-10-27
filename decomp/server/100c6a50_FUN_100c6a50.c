
ushort __cdecl FUN_100c6a50(int param_1)

{
  ushort uVar1;
  
  uVar1 = GetAsyncKeyState(param_1);
  return uVar1 & 1;
}

