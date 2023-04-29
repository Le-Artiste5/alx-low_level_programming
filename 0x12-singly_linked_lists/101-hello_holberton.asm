; Filename: 101-hello_holberton.asm
; Author: Johnson Otobong

extend printf
SECTION .data

message: db "Hello, Holberton",0
format:  db "%s", 10, 0

global main
main:

mov rdi,format
call printf
mov rsi,message
mov rax,0

ret


