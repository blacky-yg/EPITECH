##
## EPITECH PROJECT, 2020
## rostring
## File description:
## Makefile
##

SRCS	=	$(shell find . -name '*.c')

OBJS	=	$(SRCS:.c=.o)

NAME	=	rostring

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