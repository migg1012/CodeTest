;  Most efficient implementation in assembly.  Smaller and faster
;
;  C equivalent funciton
;  int gcd1(int x, int y)
;  {
;       while (x != 0
;       {
;           if (x < y)
;           {
;               hold = x;
;               x = y;
;               y = hold;
;           }
;           x %= y;
;       }
;       return y;
;   }
;
segment .data
	;
	;  initialized data
	;

segment .bss
    ;
    ;uninitialized data
    ;

segment .text
	global gcd2

gcd2:
	push ebp         ;save registers
	mov ebp, esp
	mov eax, [ebp+8]  ;x value
	mov ebx, [ebp+12] ;y value

looptop:
    cmp eax, 0        ;if x == 0 we're done
    je  goback
    cmp eax, ebx      ;check x is larger than y
    jge modulo
    xchg eax, ebx     ;swap values of x and y

modulo:
    cdq                 ;setup for division
    idiv ebx            ;divide edxeax by ebx
    mov eax, edx        ;the remainder is in edx
    jmp looptop

goback:
    mov eax, ebx        ;return y
    mov esp, ebp
    pop ebp
    ret
