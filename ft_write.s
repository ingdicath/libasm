; **************************************************************************** ;
;                                                                              ;
;                                                         ::::::::             ;
;    ft_write.s                                         :+:    :+:             ;
;                                                      +:+                     ;
;    By: dsalaman <dsalaman@student.codam.nl>         +#+                      ;
;                                                    +#+                       ;
;    Created: 2020/11/14 18:49:32 by dsalaman      #+#    #+#                  ;
;    Updated: 2020/11/14 20:33:50 by dsalaman      ########   odam.nl          ;
;                                                                              ;
; **************************************************************************** ;

; Description: write nbyte of data to the object referenced by the descriptor 
; fildes from the buffer pointed to by buf.
; Synopsis: ssize_t write(int fildes, const void *buf, size_t nbyte)
; Return: number of bytes which were written is returned

section .text
	global _ft_write
	extern ___error

_ft_write:
	mov rax, 0x2000004 	; write
	syscall
	jc error          	; jump if Carry Flag - means system call failed
	ret

error:
	push rax			; push rax in stack
	call ___error		; returns address of errno to rax
	mov rdi, rax		; copy errno address to rdi
	pop rax				; pop top of stack into rax
	mov [rdi], rax		; assign errno value in rdi location
	mov rax, -1			; return -1
	ret
