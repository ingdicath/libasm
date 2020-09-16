# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    ft_strlen.s                                        :+:    :+:             #
#                                                      +:+                     #
#    By: dsalaman <dsalaman@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/15 09:04:08 by dsalaman      #+#    #+#                  #
#    Updated: 2020/09/15 09:05:06 by dsalaman      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

; nasm -f macho64 ft_strlen.s && gcc -o ft_strlen main.c ft_strlen.o && ./ft_strlen

section		.text
	global	_ft_strlen

_ft_strlen:
	mov rax, -1

loop:
	inc rax
	cpm rax, rdi
	