; **************************************************************************** ;
;                                                                              ;
;                                                         ::::::::             ;
;    ft_write.s                                         :+:    :+:             ;
;                                                      +:+                     ;
;    By: dsalaman <dsalaman@student.codam.nl>         +#+                      ;
;                                                    +#+                       ;
;    Created: 2020/11/14 18:49:32 by dsalaman      #+#    #+#                  ;
;    Updated: 2020/11/17 16:59:25 by dsalaman      ########   odam.nl          ;
;                                                                              ;
; **************************************************************************** ;

; DESCRIPTION: write nbyte of data to the object referenced by the descriptor 
; fildes from the buffer pointed to by buf.
;
; SYNOPSIS: ssize_t write(int fildes, const void *buf, size_t nbyte)
;
; RETURN: If successful, the number of bytes which were written is returned.  
; Otherwise, a -1 is returned and the global variable errno is set to indicate the error.

section .text
	global _ft_write
	extern ___error

_ft_write:
	mov rax, 0x2000004 	; write system call is 4, for macOS ->(0x200000 + unix syscall #)
	syscall
	jc error          	; jump if Carry Flag - means if system call failed

end:
	ret

error:
	push rax			; push rax into stack
	call ___error		; returns address of errno to rax
	mov rdi, rax		; copy errno address to rdi
	pop rax				; retrieve into rax
	mov [rdi], rax		; assign errno value in rdi location
	mov rax, -1			; return -1
	ret
