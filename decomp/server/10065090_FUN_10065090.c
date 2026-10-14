
void FUN_10065090(int param_1)

{
  int *this;
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  if ((param_1 != 0) && (this = *(int **)(param_1 + 0x7c), this != (int *)0x0)) {
    FUN_10098c10((uint *)s_game_playerleave_10111c50,this,this,3,0);
    if (DAT_10121dbc == 0) {
      uVar1 = *(undefined4 *)(this[1] + 0x208);
      uVar2 = (*DAT_10121fcc)(uVar1);
      uVar2 = (*DAT_10121fdc)(uVar1,uVar2);
      (*DAT_10121fcc)(uVar1,uVar2);
      pcVar3 = s___s<_i><_u><_i>__disconnected_10111c10;
    }
    else {
      uVar1 = *(undefined4 *)(this[1] + 0x208);
      uVar2 = (*DAT_10121fb0)(uVar1,s_model_10105414);
      uVar2 = (*DAT_10121fb4)(uVar2);
      uVar2 = (*DAT_10121fdc)(uVar1,uVar2);
      (*DAT_10121fcc)(uVar1,uVar2);
      pcVar3 = s___s<_i><_u><_s>__disconnected_10111c30;
    }
    FUN_100b0fe0((byte *)pcVar3);
    FUN_1007be20(this,1);
  }
  return;
}

