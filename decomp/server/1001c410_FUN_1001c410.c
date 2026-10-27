
char * FUN_1001c410(void)

{
  char *pcVar1;
  
  if (DAT_10121db8 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1001c41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar1 = (char *)(**(code **)(*DAT_10121db8 + 0x28))();
    return pcVar1;
  }
  return s_Spirit_of_Half_Life_10105e8c;
}

