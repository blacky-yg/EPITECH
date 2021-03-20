; EPITECH PROJECT, 2021
;   asmminilibc
; File description:
;   rindex

segment .text
    global rindex ; function

    rindex:
        xor rax, rax ; set rax to 0

    _loop:
        cmp byte[rdi], sil ; sil is the search byte
        jne _continue ; if not equal, call _continue
        mov rax, rdi ; get argument in rax

    _continue:
        cmp byte[rdi], ZERO ; check if rdi == null
        je _end ; if yes, jump to _end
        inc rdi ; Increments the two poins
        jmp _loop ; loop until one condition is verified

    _end:
        ret ; return instruction

segment .data
    ; CONSTANTS DECLARATION
    ZERO    equ 0 ; 0