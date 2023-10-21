global _start
section .text
_start:
mov rax, 1
mov rdi, 1
mov rsi, my_message
mov rdx, length
syscall

mov rax, 60
mov rdi, 1
syscall

section .data
my_message; db 'Hello, Holberton',0xa
length: equ $-my_message
