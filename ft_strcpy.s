; **************************************************************************** ;
;                                                                              ;
;                                                         ::::::::             ;
;    ft_strcpy.s                                        :+:    :+:             ;
;                                                      +:+                     ;
;    By: dsalaman <dsalaman@student.codam.nl>         +#+                      ;
;                                                    +#+                       ;
;    Created: 2020/11/06 15:39:30 by dsalaman      #+#    #+#                  ;
;    Updated: 2020/11/11 14:45:19 by dsalaman      ########   odam.nl          ;
;                                                                              ;
; **************************************************************************** ;

; Description: copy the string src(rsi) to dst(rdi)
; Synopsis:  char *stpcpy(char *dst, const char *src);
; Return: dst

section .text
global _ft_strcpy

_ft_strcpy:
	mov rcx, 0					; i = 0
	
copy_loop:
	mov al, byte [rsi + rcx]	; retrieve character from src ('al' = rsi[i]), al is "temp"
	mov byte [rdi + rcx], al	; copy character to dst (rdi[i] = 'al')
	cmp al, 0					; check byte in source(rsi) is equal to NULL
	je end						; if is not at Null, it copies the character	
	inc rcx						; i++
	jmp copy_loop 				; start the loop again

end:
	mov rax, rdi				; copy dst(rdi) into rax
	ret
