; EPITECH PROJECT, 2021
;   asmminilibc
; File description:
;   strlen

segment .text
    global strlen ; function

    strlen:
        xor rax, rax ; set rax to 0

    _loop:
        cmp byte[rdi + rax], NULL ; cmp rdi + rax to null byte
        je _end ; jump to _end if rdi + rax == 0
        inc rax ; increments rax
        jmp _loop ; repeat the loop until the condition is verified

    _end:
        ret ; return instruction

segment .data
    ; CONSTANTS DECLARATION
    NULL    equ 0x00 ; '\0'