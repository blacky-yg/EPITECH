##
## EPITECH PROJECT, 2020
## anagram
## File description:
## Makefile
##

SRCS	=	./main.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-Werror -Wextra

NAME	=	anagram

$(NAME):	$(OBJS)
	gcc -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re