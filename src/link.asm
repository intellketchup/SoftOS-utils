section .data
    msg db 'Link of SoftOS kernel with Utils', 0Ah, 0

section .text
    global _start

_start:
    ; Llamada a sys_write (syscall 1)
    mov rdi, 1                ; file descriptor 1 (stdout)
    mov rsi, msg              ; dirección del mensaje
    mov rdx, 30               ; longitud del mensaje
    mov rax, 1                ; número de syscall (sys_write)
    syscall

    ; Llamada a sys_exit (syscall 60)
    mov rax, 60               ; número de syscall (sys_exit)
    xor rdi, rdi              ; código de salida 0
    syscall
