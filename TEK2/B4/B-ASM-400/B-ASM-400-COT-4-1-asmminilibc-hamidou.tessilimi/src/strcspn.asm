; EPITECH PROJECT, 2021
;   asmminilibc
; File description:
;   strcspn

segment .text
    global strcspn ; function

    strcspn:
        xor rax, rax ; set rax to 0

    _end:
        ret ; return instruction

segment .data
    ; CONSTANTS DECLARATION
    ZERO    equ 0 ; 0