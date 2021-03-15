section .text
        global _start

_start:
        mov eax, 4          ;system call ID: sys_write
        mov ebx,1           ;file descriptor for standard output - stdout
        mov ecx, string     ;string address
        mov edx, length     ;length of the string
        int 80h             ;system call
        mov eax, 1          ;system call ID: sys_exit
        mov ebx, 0          ;exit code 0:  no error
        int 80h             ;system call

section .data
string: db 'Hello Marcor in  Linux', 0Ah    ;string to print
length: equ 23
