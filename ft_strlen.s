; **************************************************************************** ;
;                                                                              ;
;                                                         ::::::::             ;
;    ft_strlen.s                                        :+:    :+:             ;
;                                                      +:+                     ;
;    By: dsalaman <dsalaman@student.codam.nl>         +#+                      ;
;                                                    +#+                       ;
;    Created: 2020/11/06 15:39:30 by dsalaman      #+#    #+#                  ;
;    Updated: 2020/11/17 15:30:05 by dsalaman      ########   odam.nl          ;
;                                                                              ;
; **************************************************************************** ;

; DESCRIPTION: find length of string.
;
; SYNOPSIS: size_t strlen(const char *s)
;
; RETURN: returns the number of characters that precede the terminating NUL character.
;
; char *s is rdi

section .text
	global _ft_strlen

_ft_strlen:
	mov rax, 0					; i = 0

loop:
	cmp byte [rdi + rax], 0		; if s[i] == NULL
	je end 						; jump if is equal to '0'
	inc rax						; i++
	jmp loop

end:
	ret