; EPITECH PROJECT, 2021
;   asmminilibc
; File description:
;   memcpy

segment .text
    global memcpy ; function

    memcpy:
        mov rax, rdi ; move 1st arg (rdi) to rax
        cmp rdx, ZERO ; check if 3rd arg (rdx) is 0
        jz _end ; if it's 0, jump to _end (return)

    _loop:
        dec rdx ; decrements 3rd arg (index)
        mov r8b, byte[rsi + rdx] ; get each char of the 2nd arg (rsi) in r8b
        mov byte[rdi + rdx], r8b ; get each char of the r8b to the destination
        cmp rdx, ZERO ; check if 3rd arg (rdx) is zero
        jnz _loop ; repeats _loop until rdx == 0

    _end:
        ret ; return instruction

segment .data
    ; CONSTANTS DECLARATION
    ZERO    equ 0 ; 0