BITS 64

SECTION .text

GLOBAL main
EXTERN printf

main:
        PUSH    RBP
        MOV     RBP, RSP

        MOV     RDI, str
        CALL    printf

        MOV     RAX, 60
        XOR     RDI, RDI
        SYSCALL

        LEAVE
        RET

SECTION .rodata
str:    DB 'Hello World!', 0Ah, 0