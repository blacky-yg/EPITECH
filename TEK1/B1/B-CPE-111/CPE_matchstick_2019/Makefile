##
## EPITECH PROJECT, 2020
## matchstick
## File description:
## Makefile
##

SRCS	=	$(shell find ./src -name '*.c')

OBJS	=	$(SRCS:.c=.o)

NAME	=	matchstick

CFLAGS	=	-I ./include -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	gcc -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re