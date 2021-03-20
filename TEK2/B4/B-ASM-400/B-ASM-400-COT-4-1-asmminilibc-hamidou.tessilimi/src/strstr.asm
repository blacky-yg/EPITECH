; EPITECH PROJECT, 2021
;   asmminilibc
; File description:
;   strstr

segment .text
    global strstr ; function

    strstr:
        xor rax, rax ; set rax to 0

    _end:
        ret ; return instruction

segment .data
    ; CONSTANTS DECLARATION
    ZERO    equ 0 ; 0