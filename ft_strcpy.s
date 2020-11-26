; **************************************************************************** ;
;                                                                              ;
;                                                         ::::::::             ;
;    ft_strcpy.s                                        :+:    :+:             ;
;                                                      +:+                     ;
;    By: dsalaman <dsalaman@student.codam.nl>         +#+                      ;
;                                                    +#+                       ;
;    Created: 2020/11/06 15:39:30 by dsalaman      #+#    #+#                  ;
;    Updated: 2020/11/23 16:12:57 by dsalaman      ########   odam.nl          ;
;                                                                              ;
; **************************************************************************** ;

; DESCRIPTION: copy the string src(rsi) to dst(rdi) (including the terminating '\0' character).
;
; SYNOPSIS: char *stpcpy(char *dst, const char *src)
;
; RETURN: a pointer to the terminating `\0' character of dst

section .text
global _ft_strcpy

_ft_strcpy:
	mov rcx, 0					; i = 0
	
copy_loop:
	mov al, byte [rsi + rcx]	; retrieve character from src ('al' = rsi[i]), al is "temp"
	mov byte [rdi + rcx], al	; copy character to dst (rdi[i] = 'al')
	cmp al, 0					; check byte in source(rsi) is equal to NULL
	je end						; if is not NULL, it copies the character	
	inc rcx						; i++
	jmp copy_loop 				; until finds '\0'

end:
	mov rax, rdi				; copy dst(rdi) into rax
	ret
