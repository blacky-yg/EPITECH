; EPITECH PROJECT, 2021
;   asmminilibc
; File description:
;   memmove

segment .text
    global memmove ; function

    memmove:
        xor rax, rax ; set rax to 0

    _end:
        ret ; return instruction

segment .data
    ; CONSTANTS DECLARATION
    ZERO    equ 0 ; 0