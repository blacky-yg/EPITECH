##
## EPITECH PROJECT, 2020
## fizzbuzz
## File description:
## Makefile
##

SRCS	=	./main.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-Wextra -Werror

NAME	=	fizzbuzz

all: $(NAME)

$(NAME):	$(OBJS)
	gcc -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re