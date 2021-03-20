; EPITECH PROJECT, 2021
;   asmminilibc
; File description:
;   strchr

segment .text
    global strchr ; function

    strchr:
        mov rax, rdi ; move 1st arg (rdi) to rax

    _loop:
        cmp byte[rax], sil ; cmp each char with the 2nd arg (rsi)
        jz _end ; if find, jump to _end (return value)
        cmp byte[rax], NULL ; cmp each char with '\0'
        jz _exit ; if not found, jump to _exit (return null)
        inc rax ; increments rax (index)
        jmp _loop ; repeats until one condition is satisfied

    _exit:
        xor rax, rax ; set rax to 0, return NULL

    _end:
        ret ; return instruction

segment .data
    ; CONSTANTS DECLARATION
    NULL    equ 0x00 ; '\0'