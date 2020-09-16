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

NA = nasm

NA_FLAGS = -f macho64

SRC = ft_strlen.s
#ft_strcpy.s ft_strcmp.s ft_write.s ft_read.s ft_strdup.s

OBJECTS = $(SRC:.c=.o)

TEST = main.c

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)
	@echo "nasm library creation successful"

%.o: %.s
	$(NA) $(NA_FLAGS) -s $< -o $@

clean:
	@rm -f $(OBJECTS)
	@echo "Objects file were removed - clean."

fclean: clean
	@rm -f $(NAME)
	@echo "Objects file were removed - fclean."

re: fclean all

.PHONY: all clean fclean re