; EPITECH PROJECT, 2021
;   asmminilibc
; File description:
;   strncmp

segment .text
    global strncmp ; function

    strncmp:
        xor rcx, rcx ; set rcx to 0
        xor rax, rax ; set rax to 0
        xor r8, r8 ; set r8 to 0

    _loop:
        mov al, byte[rdi + rcx] ; move each character of 1st arg in al
        mov r8b, byte[rsi + rcx] ; move each character of 2nd arg in al

        cmp rcx, rdx ; check if rdx (counter) == n (number of character)
        je _end ; if yes, call _end

        cmp r8, NULL ; check if r8b == 0
        je _end ; if yes, call _end too
        cmp al, r8b ; check if al == 0
        je _end ; if yes, call _end
        cmp rax, NULL ; check if the character of the 2 arg is equal
        jne _end ; if not, jump to _end
        inc rcx ; else, increments rcx
        jmp _loop ; repeats _loop until a conditon is verified

    _end:
        sub al, r8b ; get the difference between the 2 args
        movsx rax, al ; put the result (al) in rax
        ret ; return instrction

segment .data
    ; CONSTANTS DECLARATION
    NULL    equ 0x00 ; '\0'