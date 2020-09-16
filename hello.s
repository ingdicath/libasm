; nasm -f macho64 hello.s&& gcc -o exe main.c hello.o && ./exe
; nasm -fmacho64 hello.s && gcc hello.o && ./a.out

section .data
		msg: 	db "Hello world", 10
		msg_L: 	equ $-msg

section .text
		global _start

_start:
		mov rax, 4
		mov rbx, 1
		mov rcx, msg
		mov rdx, msg_L
		int 80h

		mov rax, 1
		mov rbx, 0
		int 80h