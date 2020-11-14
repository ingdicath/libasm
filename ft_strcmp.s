; **************************************************************************** ;
;                                                                              ;
;                                                         ::::::::             ;
;    ft_strcmp.s                                        :+:    :+:             ;
;                                                      +:+                     ;
;    By: dsalaman <dsalaman@student.codam.nl>         +#+                      ;
;                                                    +#+                       ;
;    Created: 2020/11/11 13:25:46 by dsalaman      #+#    #+#                  ;
;    Updated: 2020/11/11 15:19:50 by dsalaman      ########   odam.nl          ;
;                                                                              ;
; **************************************************************************** ;

; Description: lexicographically compare the null-terminated strings s1(rdi) and s2(rsi) 
; Synopsis: int strcmp(const char *s1, const char *s2)
; Return: int, s1 - s2
; movsx dst,org (Move with Sign Extension)

section .text
	global _ft_strcmp

_ft_strcmp:
	mov rdx, 0 					; i = 0

loop:
	mov cl, byte [rdi + rdx]	; retrieve character ('cl' = s1[i])
	mov bl, byte [rsi + rdx]	; retrieve character ('bl' = s2[i])
	cmp cl, bl
	jne end 					; if s1[i] != s2[i], return value
	cmp cl, 0
	je end						; if s1 is NULL, return value
	inc rdx						; i++
	jmp loop

end:
	sub cl, bl					; find diff, cl <- cl - bl
	movsx rax, cl				; store diff in rax
	ret


