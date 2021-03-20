section .data
; msg: DB 'Hello World', 10
; size EQU $ - msg

; global _start

; section .text
;     _start:
;     mov rax, 4
;     mov rbx, 1
;     mov rcx, msg
;     mov rdx, size
;     int 0*80
;     mov rax, 1
;     mov rbx, 0
;     int 0*80
;     ret

; global    _start

; section   .text

;     _start:
;         mov       rax, 1                  ; system call for write
;         mov       rdi, 1                  ; file handle 1 is stdout
;         mov       rsi, message            ; address of string to output
;         mov       rdx, 13                 ; number of bytes
;         syscall                           ; invoke operating system to do the write
;         mov       rax, 60                 ; system call for exit
;         xor       rdi, rdi                ; exit code 0
;         syscall                           ; invoke operating system to exit

; section   .data
;     message:  db        "Hello, World", 10      ; note the newline at the end

section	.text
   global_start   ;must be declared for linker (ld)

_start:	          ;tells linker entry point
   mov	edx, len   ;message length
   mov	ecx, msg   ;message to write
   mov	ebx, 1     ;file descriptor (stdout)
   mov	eax, 4     ;system call number (sys_write)
   int	0x80      ;call kernel

   mov	eax,1     ;system call number (sys_exit)
   int	0x80      ;call kernel

section	.data
msg db 'Hello, world!', 10  ;string to be printed
len equ $ - msg     ;length of the string