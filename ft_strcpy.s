; copy the string src(rsi) to dst(rdi)

section .text

global _ft_strcpy

_ft_strcpy:
	mov rdx, 0					; i = 0
	cmp byte [rsi + rdx], 0		; compare if the next value in src(rsi) is in the null byte
	jne copy_loop 				; if is not at Null, it copies the character

copy_loop:
	mov al, byte [rsi + rdx]	; copy 'al' to memory address [src(rsi) + rdx]
	mov byte [rdi + rdx], al	; copy character
	inc rdx						; move pointer in one position fowards

end:
	mov rax, rdi				; copy dstn(rdi) into rax
	ret 						; pop the return program counter, and jump there. Ends the subroutine

