##
## EPITECH PROJECT, 2020
## rrostring
## File description:
## Makefile
##

SRCS	=	$(shell find . -name '*.c')

OBJS	=	$(SRCS:.c=.o)

NAME	=	rrostring

CFLAGS	=	-Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	gcc -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re