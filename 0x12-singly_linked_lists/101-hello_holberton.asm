        global  main
        extern  printf

msg:    db      "Hello world",0

main:
        mov  rdi, msg
        call printf
        mov  rax, 0
        ret
