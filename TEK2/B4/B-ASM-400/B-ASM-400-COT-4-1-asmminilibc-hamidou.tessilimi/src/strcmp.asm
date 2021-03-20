; EPITECH PROJECT, 2021
;   asmminilibc
; File description:
;   strcmp

segment .text
    global strcmp ; function

    strcmp:
        xor rcx, rcx ; set rax to 0

    _loop:
        mov al, byte [rdi + rcx] ; move each character of 1st arg in al
        mov r8b, byte [rsi + rcx] ; move each character of 2nd arg in r8b

        cmp rax, NULL ; check if al == 0
        je _end ; if yes, call _end
        cmp r8b, NULL ; check if r8b == 0
        je _end ; if yes, call _end too
        cmp al, r8b ; check if the character of the 2 arg is equal
        jne _end ; if not, jump to _end
        inc rcx ; else, increments rcx
        jmp _loop ; repeats _loop until a conditon is verified

    _end:
        sub al, r8b ; get the difference between the 2 args
        movsx rax, al ; put the result in rax
        ret ; return instrction

segment .data
    ; CONSTANTS DECLARATION
    NULL    equ 0x00 ; '\0'