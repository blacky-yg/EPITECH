##
## EPITECH PROJECT, 2020
## sort_words
## File description:
## Makefile
##

SRCS	=	$(shell find . -name '*.c')

OBJS	=	$(SRCS:.c=.o)

NAME	=	sort_words

CFLAGS	=	-I. -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	gcc -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re