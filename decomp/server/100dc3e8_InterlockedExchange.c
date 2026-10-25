
LONG InterlockedExchange(LONG *Target,LONG Value)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100dc3e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = InterlockedExchange(Target,Value);
  return LVar1;
}

