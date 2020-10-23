##
## EPITECH PROJECT, 2020
## USNameFormatter
## File description:
## Makefile
##

SRCS	=	./main.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-Wextra -Werror

NAME	=	USNameFormatter

all: $(NAME)

$(NAME):	$(OBJS)
	gcc -o $(NAME) $(OBJS) $(CFLAGS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re