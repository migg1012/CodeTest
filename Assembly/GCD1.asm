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
x:  resb  1	;first argument
y:  resb  1	; second argument
            ;uninitialized data

segment .text
	global gcd1

gcd1:
	push ebp         ;save registers
	mov ebp, esp
	mov eax, [ebp+8] ;x value
	mov [x], eax
	mov eax, [ebp+12] ;y value
	mov [y], eax

looptop:
    mov eax, [x]
    cmp eax, 0        ;if x == 0 we're done
    je  goback
    mov ebx, [y]
    cmp eax, ebx       ;check x is larger than y
    jge modulo
    mov [x], ebx
    mov [y], eax

modulo:
    mov ebx, [y]
    mov eax, [y]
    cdq                 ;setup for division
    idiv ebx            ;divide edxeax by ebx
    mov [x], edx        ;the remainder is in edx
    jmp looptop

goback:
    mov eax, [y]        ;return y
    mov esp, ebp
    pop ebp
    ret
