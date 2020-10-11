##
## EPITECH PROJECT, 2020
## countwords
## File description:
## Makefile
##

SRCS	=	$(shell find . -name '*.c')

OBJS	=	$(SRCS:.c=.o)

NAME	=	countwords

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