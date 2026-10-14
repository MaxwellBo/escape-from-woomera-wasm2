
void __fastcall FUN_10033160(char *param_1)

{
  Label *extraout_ECX;
  Label *extraout_ECX_00;
  Label *this;
  undefined1 local_80 [31];
  undefined1 local_61;
  
  if (param_1[0x120] == '\0') {
    FUN_100499f0(local_80,(byte *)s__s_10079c5c);
    this = extraout_ECX_00;
  }
  else {
    FUN_100499f0(local_80,(byte *)s__c__s_10079c64);
    this = extraout_ECX;
  }
  local_61 = 0;
  vgui::Label::setText(this,param_1);
  return;
}

