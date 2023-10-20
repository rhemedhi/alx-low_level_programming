#include "lists.h"

section .data
    format db "Hello, Holberton",10,0  ; The format string, with newline character

section .text
    global main

    extern printf

main:
    ; Call printf
    mov rdi, format
    call printf

    ; Exit program
    mov rax, 60         ; syscall number for exit
    xor rdi, rdi        ; exit status, 0
    syscall

