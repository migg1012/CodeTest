org 100h
mov dx, string
mov ah, 9
int 21h
mov ah, 4Ch
int 21h

string db 'Hello Marcor in DOS', 0Dh, 0Ah, '$'
