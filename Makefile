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

NASM = nasm

NASM_FLAGS = -f macho64

CC = gcc

CC_FLAGS =  -Wall -Wextra -Werror

SRC = ft_strlen.s

CC_SRC = main.c
#ft_strcpy.s ft_strcmp.s ft_write.s ft_read.s ft_strdup.s

OBJECTS = $(SRC:.s=.o)

CC_OBJECTS = $(CC_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)
	@echo "nasm library creation successful"

test: $(NAME) $(CC_OBJECTS)
	@$(CC) $(CC_FLAGS)

%.o: %.s
	$(NA) $(NA_FLAGS) $< 

clean:
	@rm -f $(OBJECTS) $(CC_OBJECTS)
	@echo "Objects file were removed - clean."

fclean: clean
	@rm -f $(NAME)
	@echo "Objects file were removed - fclean."

re: fclean all

.PHONY: all clean fclean test re
