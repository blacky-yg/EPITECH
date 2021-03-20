; EPITECH PROJECT, 2021
;   asmminilibc
; File description:
;   strcasecmp

segment .text
    global strcasecmp ; function

    strcasecmp:
        xor rax, rax ; set rax to 0

    _end:
        ret ; return instruction

segment .data
    ; CONSTANTS DECLARATION
    ZERO    equ 0 ; 0