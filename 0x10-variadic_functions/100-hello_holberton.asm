global main
section .text
main:
mov rax, 1; write(
mov rax, 1; STDOUT_FILENO,
mov rax, msg; "Hello, Holberton\n",
mov rax, msglen ; sizeof("Hello, Holberton\n")
syscall	; );
mov rax, 60 ; exit(
mov rdi, 0; EXIT_SUCCESS
syscall	; );
section .data
msg: db "Hello, Holberton", 10
msglen:	equ $ - msg
