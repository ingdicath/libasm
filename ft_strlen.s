; **************************************************************************** ;
;                                                                              ;
;                                                         ::::::::             ;
;    ft_strlen.s                                        :+:    :+:             ;
;                                                      +:+                     ;
;    By: dsalaman <dsalaman@student.codam.nl>         +#+                      ;
;                                                    +#+                       ;
;    Created: 2020/11/06 15:39:30 by dsalaman      #+#    #+#                  ;
;    Updated: 2020/11/14 19:20:11 by dsalaman      ########   odam.nl          ;
;                                                                              ;
; **************************************************************************** ;

; Description: computes the length of the string
; Synopsis: size_t strlen(const char *s)
; Return: size_t

section .text
	global _ft_strlen

_ft_strlen:
	mov rax, 0					; i = 0

loop:
	cmp byte [rdi + rax], 0
	je end 					; jump if is equal to '0'
	inc rax					; i++
	jmp loop

end:
	ret