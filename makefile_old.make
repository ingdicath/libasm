# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dsalaman <dsalaman@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/15 09:06:25 by dsalaman      #+#    #+#                  #
#    Updated: 2020/09/15 09:06:35 by dsalaman      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

NASM = nasm -f macho64

CC = gcc

SRC = ft_strlen.s

MAIN = main.c
#ft_strcpy.s ft_strcmp.s ft_write.s ft_read.s ft_strdup.s

OBJECTS = $(SRC:.s=.o)

CC_OBJECTS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)
	@echo "nasm library creation successful"

%.o: %.s
	$(NASM) $<  -o $@

test: $(NAME) $(CC_OBJECTS)
	@$(CC) -L. -lasm main.c -o libasm
	./libasm

clean:
	@rm -f $(OBJECTS)
	@echo "Objects file were removed - clean."

fclean: clean
	@rm -f $(NAME)
	@rm -f libasm
	@echo "Objects file were removed - fclean."

re: fclean all

.PHONY: all clean fclean test re

------------------------------------------



NAME = libasm.a

NASM = nasm -f macho64

CC = gcc

FLAGS = -Wall -Werror -Wextra

SRC = ft_strlen.s

MAIN = main.c

TEST = test
#ft_strcpy.s ft_strcmp.s ft_write.s ft_read.s ft_strdup.s

OBJECTS = $(SRC:.s=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)
	@echo "nasm library creation successful"

%.o: %.s
	@$(NASM) $< -o $@

test: $(MAIN) $(NAME)
	@$(CC) $(FLAGS) -L. -lasm -lc -o $(TEST) $(MAIN)

clean:
	@rm -f $(OBJECTS)
	@echo "Objects file were removed - clean."

fclean: clean
	@rm -f $(NAME) test
	@echo "Objects file were removed - fclean."

re: fclean all

.PHONY: all clean fclean test re







--------------------------------

; copy the string src(rsi) to dst(rdi)

section .text

global _ft_strcpy

_ft_strcpy:
	mov rdx, 0					; i = 0
	jmp review

copy_loop:
	mov al, byte [rsi + rdx]	; copy 'al' to memory address [src(rsi) + rdx]
	mov byte [rdi + rdx], al	; copy character
	inc rdx						; move pointer in one position fowards

review:
	cmp byte [rsi + rdx], 0		; compare if the next value in src(rsi) is in the null byte
	jne copy_loop 				; if is not at Null, it copies the character

end:
	mov rax, rdi				; copy dstn(rdi) into rax
	ret 						; pop the return program counter, and jump there. Ends the subroutine



--------------------------------

section .text

global _ft_strcpy

_ft_strcpy:
	mov rdx, 0					; i = 0

copy_loop:
	mov al, byte [rsi + rdx]	; copy src memory address to 'al'
	mov byte [rdi + rdx], al	; copy character -> copy 'al' into dstn memory address
	inc rdx						; move pointer in one position fowards
	cmp byte [rsi + rdx], 0		; compare if the next value in src(rsi) is in the null byte
	je end
	jne copy_loop 				; if is not at Null, it copies the character

end:
	mov al, byte [rsi + rdx]	; move to Null byte
	mov byte [rdi + rdx], al	; copy character
	mov rax, rdi				; copy dstn(rdi) into rax
	ret 						; pop the return program counter, and jump there. Ends the subroutine
