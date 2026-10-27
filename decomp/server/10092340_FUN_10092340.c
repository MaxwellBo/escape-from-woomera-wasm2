
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_10092340(undefined4 param_1)

{
  float10 fVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined1 local_40 [64];
  
  puVar2 = local_40;
  puVar3 = &DAT_101124f8;
  uVar4 = DAT_10126a50;
  FUN_100c8506(puVar2,&DAT_101124f8);
  fVar1 = (float10)(*DAT_10121eec)(local_40,puVar2,puVar3,param_1,uVar4);
  if (fVar1 <= (float10)_DAT_100dd5f8) {
    (*DAT_10121efc)(1,s____GetSkillCVar_Got_a_zero_for___101162d8,local_40);
  }
  return (float10)(float)fVar1;
}

