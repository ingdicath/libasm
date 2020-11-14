# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dsalaman <dsalaman@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/15 09:06:25 by dsalaman      #+#    #+#                  #
#    Updated: 2020/11/14 23:50:37 by dsalaman      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

NASM = nasm -f macho64

CC = gcc

FLAGS = -Wall -Werror -Wextra -fsanitize=address

SRC = ft_strlen.s ft_strcpy.s ft_strcmp.s ft_write.s

MAIN = main.c

TEST = test
# ft_read.s ft_strdup.s

OBJECTS = $(SRC:.s=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rc $@ $^
	@ranlib $@
	@echo "nasm library creation successful"

%.o: %.s
	@$(NASM) $<

test: $(MAIN) $(NAME)
	@$(CC) $(FLAGS) -L. -lasm -o $(TEST) $(MAIN)

clean:
	@rm -f $(OBJECTS)
	@echo "Objects file were removed - clean."

fclean: clean
	@rm -f $(NAME) $(TEST)
	@echo "Objects file were removed - fclean."

re: fclean all

.PHONY: all clean fclean test re
