/* Ghidra decompiler failed on this function (overlapping varnodes).
   Listing is Capstone disassembly of the function body. */

1004b2c2  8bc8                 mov ecx, eax
1004b2c4  50                   push eax
1004b2c5  9b                   wait
1004b2c6  d93c24               fnstcw word ptr [esp]
1004b2c9  66813c247f02         cmp word ptr [esp], 0x27f
1004b2cf  7405                 je 0x1004b2d6
1004b2d1  e80f640000           call 0x100516e5
1004b2d6  81e10000f07f         and ecx, 0x7ff00000
1004b2dc  8d542408             lea edx, [esp + 8]
1004b2e0  81f90000f07f         cmp ecx, 0x7ff00000
1004b2e6  0f849d000000         je 0x1004b389
1004b2ec  e824640000           call 0x10051715
1004b2f1  0f848e000000         je 0x1004b385
1004b2f7  a90000f07f           test eax, 0x7ff00000
1004b2fc  0f84f6000000         je 0x1004b3f8
1004b302  8a4c240f             mov cl, byte ptr [esp + 0xf]
1004b306  80e180               and cl, 0x80
1004b309  0f8561010000         jne 0x1004b470
1004b30f  d9f1                 fyl2x
1004b311  e8ba630000           call 0x100516d0
1004b316  80f901               cmp cl, 1
1004b319  7502                 jne 0x1004b31d
1004b31b  d9e0                 fchs
1004b31d  833df8c90b1000       cmp dword ptr [0x100bc9f8], 0
1004b324  0f8544640000         jne 0x1005176e
1004b32a  8d0dd8ba0710         lea ecx, [0x1007bad8]
1004b330  ba1d000000           mov edx, 0x1d
1004b335  e97f640000           jmp 0x100517b9
1004b33a  833df8c90b1000       cmp dword ptr [0x100bc9f8], 0
1004b341  0f8527640000         jne 0x1005176e
1004b347  8d0dd8ba0710         lea ecx, [0x1007bad8]
1004b34d  ba1d000000           mov edx, 0x1d
1004b352  e819630000           call 0x10051670
1004b357  5a                   pop edx
1004b358  c3                   ret
1004b359  8d542408             lea edx, [esp + 8]
1004b35d  e8b3630000           call 0x10051715
1004b362  f644241608           test byte ptr [esp + 0x16], 8
1004b367  7503                 jne 0x1004b36c
1004b369  41                   inc ecx
1004b36a  eb33                 jmp 0x1004b39f
1004b36c  dec1                 faddp st(1)
1004b36e  b801000000           mov eax, 1
1004b373  ebc5                 jmp 0x1004b33a
1004b375  f644240e08           test byte ptr [esp + 0xe], 8
1004b37a  75f0                 jne 0x1004b36c
1004b37c  dec1                 faddp st(1)
1004b37e  b807000000           mov eax, 7
1004b383  ebb5                 jmp 0x1004b33a
1004b385  33c9                 xor ecx, ecx
1004b387  eb16                 jmp 0x1004b39f
1004b389  33c9                 xor ecx, ecx
1004b38b  25ffff0f00           and eax, 0xfffff
1004b390  0b442410             or eax, dword ptr [esp + 0x10]
1004b394  75c3                 jne 0x1004b359
1004b396  8d542408             lea edx, [esp + 8]
1004b39a  e876630000           call 0x10051715
1004b39f  8b44240c             mov eax, dword ptr [esp + 0xc]
1004b3a3  8bd0                 mov edx, eax
1004b3a5  250000f07f           and eax, 0x7ff00000
1004b3aa  81e2ffff0f00         and edx, 0xfffff
1004b3b0  3d0000f07f           cmp eax, 0x7ff00000
1004b3b5  7506                 jne 0x1004b3bd
1004b3b7  0b542408             or edx, dword ptr [esp + 8]
1004b3bb  75b8                 jne 0x1004b375
1004b3bd  85c9                 test ecx, ecx
1004b3bf  75bb                 jne 0x1004b37c
1004b3c1  83ec74               sub esp, 0x74
1004b3c4  8bcc                 mov ecx, esp
1004b3c6  51                   push ecx
1004b3c7  83ec10               sub esp, 0x10
1004b3ca  dd1c24               fstp qword ptr [esp]
1004b3cd  dd5c2408             fstp qword ptr [esp + 8]
1004b3d1  9b                   wait
1004b3d2  dd7108               fnsave dword ptr [ecx + 8]
1004b3d5  e882640000           call 0x1005185c
1004b3da  83c410               add esp, 0x10
1004b3dd  59                   pop ecx
1004b3de  dd6108               frstor dword ptr [ecx + 8]
1004b3e1  dd01                 fld qword ptr [ecx]
1004b3e3  83c474               add esp, 0x74
1004b3e6  85c0                 test eax, eax
1004b3e8  0f8480630000         je 0x1005176e
1004b3ee  b801000000           mov eax, 1
1004b3f3  e942ffffff           jmp 0x1004b33a
1004b3f8  8b44240c             mov eax, dword ptr [esp + 0xc]
1004b3fc  25ffff0f00           and eax, 0xfffff
1004b401  0b442408             or eax, dword ptr [esp + 8]
1004b405  0f85f7feffff         jne 0x1004b302
1004b40b  ddd8                 fstp st(0)
1004b40d  8b442414             mov eax, dword ptr [esp + 0x14]
1004b411  a90000f07f           test eax, 0x7ff00000
1004b416  743d                 je 0x1004b455
1004b418  e878000000           call 0x1004b495
1004b41d  8a6c240f             mov ch, byte ptr [esp + 0xf]
1004b421  c0ed07               shr ch, 7
1004b424  f744241780000000     test dword ptr [esp + 0x17], 0x80
1004b42c  7416                 je 0x1004b444
1004b42e  db2df0e30710         fld xword ptr [0x1007e3f0]
1004b434  84cd                 test ch, cl
1004b436  7402                 je 0x1004b43a
1004b438  d9e0                 fchs
1004b43a  b802000000           mov eax, 2
1004b43f  e9f6feffff           jmp 0x1004b33a
1004b444  d9ee                 fldz
1004b446  84cd                 test ch, cl
1004b448  0f8420630000         je 0x1005176e
1004b44e  d9e0                 fchs
1004b450  e919630000           jmp 0x1005176e
1004b455  ddd8                 fstp st(0)
1004b457  25ffff0f00           and eax, 0xfffff
1004b45c  0b442410             or eax, dword ptr [esp + 0x10]
1004b460  7507                 jne 0x1004b469
1004b462  d9e8                 fld1
1004b464  e905630000           jmp 0x1005176e
1004b469  d9ee                 fldz
1004b46b  e9fe620000           jmp 0x1005176e
1004b470  d9c1                 fld st(1)
1004b472  e81e000000           call 0x1004b495
1004b477  d9e0                 fchs
1004b479  84c9                 test cl, cl
1004b47b  0f858efeffff         jne 0x1004b30f
1004b481  ddd8                 fstp st(0)
1004b483  ddd8                 fstp st(0)
1004b485  db2d30c20710         fld xword ptr [0x1007c230]
1004b48b  b801000000           mov eax, 1
1004b490  e9a5feffff           jmp 0x1004b33a
