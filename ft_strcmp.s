; **************************************************************************** ;
;                                                                              ;
;                                                         ::::::::             ;
;    ft_strcmp.s                                        :+:    :+:             ;
;                                                      +:+                     ;
;    By: dsalaman <dsalaman@student.codam.nl>         +#+                      ;
;                                                    +#+                       ;
;    Created: 2020/11/11 13:25:46 by dsalaman      #+#    #+#                  ;
;    Updated: 2020/11/17 16:33:17 by dsalaman      ########   odam.nl          ;
;                                                                              ;
; **************************************************************************** ;

; DESCRIPTION: lexicographically compare the null-terminated strings s1(rdi) and s2(rsi)
;
; SYNOPSIS: int strcmp(const char *s1, const char *s2)
;
; RETURN: int, s1 - s2
; return an integer greater than, equal to, or less than 0, 
; according as the string s1 is greater than, equal to, or less than the string s2.  
; The comparison is done using unsigned characters, so that `\200' is greater than `\0'.
;
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
	sub cl, bl					; find difference, cl <- cl - bl
	movsx rax, cl				; store difference in rax
	ret


