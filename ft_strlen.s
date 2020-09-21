
section 	.text

	global 	_ft_strlen

	_ft_strlen:
			mov rax, -1
			jump loop

	loop:
			cmp [rdi + rax], 0
			inc rax
	end:
			ret