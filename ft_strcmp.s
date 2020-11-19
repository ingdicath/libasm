; **************************************************************************** ;
;                                                                              ;
;                                                         ::::::::             ;
;    ft_strcmp.s                                        :+:    :+:             ;
;                                                      +:+                     ;
;    By: dsalaman <dsalaman@student.codam.nl>         +#+                      ;
;                                                    +#+                       ;
;    Created: 2020/11/11 13:25:46 by dsalaman      #+#    #+#                  ;
;    Updated: 2020/11/19 22:08:05 by dsalaman      ########   odam.nl          ;
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
; 'neg' multiply operand by -1
; Carry Flag (CF) is set if the addition of two numbers causes a carry out of the 
; most significant (leftmost) bits added.

section .text
	global _ft_strcmp

_ft_strcmp:
	mov rdx, 0 					; i = 0
	mov rax, 0

loop:
	mov cl, byte [rdi + rdx]	; retrieve character ('cl' = s1[i])
	mov al, byte [rsi + rdx]	; retrieve character ('al' = s2[i])
	inc rdx						; i++

check:
	cmp cl, 0					; check if s1 is NULL
	je calc_diff 				; jump if NULL
	cmp al, cl					; if s1[i] == s2[i], jump loop
	je loop
	jne calc_diff

calc_diff:
	sub al, cl					; find difference, s2(al) =  s2(al) - s1(cl)
	jc overflow 				; if CF, fix overflow	
	jmp end

overflow:
	neg al						; cancel overflow
	neg rax						; promote to a bigger register to keep the sign

end:
	neg rax 					; multiply s2 by -1 to fix subtraction result
	ret 
	