; computes the length of the string

section .text

global 	_ft_strlen

_ft_strlen:
	mov rax, 0					; i = 0

loop:
	cmp byte [rdi + rax], 0
	je theend 					; jump if is equal to '0'
	inc rax
	jmp loop

theend:
	ret