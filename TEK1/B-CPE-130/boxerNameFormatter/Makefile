##
## EPITECH PROJECT, 2020
## boxerNameFormatter
## File description:
## Makefile
##

SRCS	=	./main.c

OBJS	=	$(SRCS:.c=.o)

NAME	=	boxerNameFormatter

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