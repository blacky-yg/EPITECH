##
## EPITECH PROJECT, 2020
## palindrome
## File description:
## Makefile
##

SRCS	=	./main.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-Wextra -Werror

NAME	=	palindrome

all: $(NAME)

$(NAME):	$(OBJS)
	gcc -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: clean fclean all

.PHONY: all clean fclean re