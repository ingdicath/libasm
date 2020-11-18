; **************************************************************************** ;
;                                                                              ;
;                                                         ::::::::             ;
;    ft_strdup.s                                        :+:    :+:             ;
;                                                      +:+                     ;
;    By: dsalaman <dsalaman@student.codam.nl>         +#+                      ;
;                                                    +#+                       ;
;    Created: 2020/11/15 21:40:44 by dsalaman      #+#    #+#                  ;
;    Updated: 2020/11/16 20:38:13 by dsalaman      ########   odam.nl          ;
;                                                                              ;
; **************************************************************************** ;

; DESCRIPTION: allocates sufficient memory for a copy of the string s1(rdi), 
; does the copy, and returns a pointer to it.  
;
; SYNOPSIS: char *strdup(const char *s1);
;
; RETURN: A pointer to the copy created. If insufficient memory is available, 
; NULL is returned and errno is set to ENOMEM (out of memory, #12)

section .text
	global _ft_strdup
	extern _ft_strlen
	extern _ft_strcpy
	extern _malloc

_ft_strdup:
	cmp rdi, 0 					; check if s1 is NULL
	je end 						; if s1 is NULL, return value
	push rdi					; put s1(rdi) into the stack

memory:
	call _ft_strlen				; calculate size of s1
	inc rax						; size + 1 to include '\0'		
	mov rdi, rax 				; set size for malloc
	call _malloc 				; memory allocation
	cmp rax, 0					; malloc validation -> (!s1)
	je error					; if malloc fails, go to end.

duplicate:
	mov rdi, rax 				; Assign memory pointer to rdi	
	pop rsi						; retrieve s1 into rsi to allow work with ft_strcpy
	call _ft_strcpy				; check is it possible
	
end:
	ret

error:
	pop rdi						; clean the stack
	ret