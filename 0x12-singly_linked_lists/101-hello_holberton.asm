section .data
    msg:  db "Hello, Holberton",10
section .text
    global main
    extern printf
main:
    ; prepare arguments for printf
    mov rdi, msg
    xor rax, rax
    call printf
    xor rax, rax
    ret
