; **************************************************************************** ;
;                                                                              ;
;                                                         ::::::::             ;
;    ft_read.s                                          :+:    :+:             ;
;                                                      +:+                     ;
;    By: dsalaman <dsalaman@student.codam.nl>         +#+                      ;
;                                                    +#+                       ;
;    Created: 2020/11/15 20:24:10 by dsalaman      #+#    #+#                  ;
;    Updated: 2020/11/17 16:59:27 by dsalaman      ########   odam.nl          ;
;                                                                              ;
; **************************************************************************** ;

; DESCRIPTION: read nbyte bytes of data from the object referenced by the 
; descriptor fildes into the buffer pointed to by buf.
;
; SYNOPSIS: ssize_t read(int fildes, void *buf, size_t nbyte);
;
; RETURN: If successful, the number of bytes actually read is returned.  
; Upon reading end-of-file, zero is returned.  
; Otherwise, a -1 is returned and the global variable errno is set to indicate the error.

section .text
    global _ft_read
    extern ___error

_ft_read:
	mov rax, 0x2000003 	; read system call is 3, for macOS ->(0x200000 + unix syscall #)
	syscall
	jc error 			; jump if Carry Flag - means system call failed

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
