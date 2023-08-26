; Declare some constants
section .data
    msg: db "Hello, Holberton", 10 ; The string to print, 10 is newline
    len: equ $ - msg ; The length of the string

; Declare some global variables
section .bss

; Declare the text section
section .text
    global main ; The entry point
    extern printf ; The printf function

main:
    ; Save the base pointer and stack pointer
    push rbp
    mov rbp, rsp

    ; Call printf with the message and its length
    mov rdi, msg ; The first argument is the format string
    mov rsi, len ; The second argument is the string length
    mov rax, 0 ; No floating point arguments
    call printf ; Call the function

    ; Restore the base pointer and stack pointer
    mov rsp, rbp
    pop rbp

    ; Exit with 0 status
    mov rax, 60 ; The system call number for exit
    mov rdi, 0 ; The exit code
    syscall ; Invoke the system call

