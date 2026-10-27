void FUN_10005fb0(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  // The only caller constructs arrays with LAB_10001e20, which is `mov eax, ecx; ret`.
  // The recovered call passes that address as a data pointer, so the indirect call
  // is not a table index. The constructor writes nothing.
  return;
}
