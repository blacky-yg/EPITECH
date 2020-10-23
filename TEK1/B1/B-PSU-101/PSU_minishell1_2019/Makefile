##
## EPITECH PROJECT, 2020
## minishell1
## File description:
## Makefile
##

SRCS	=	$(shell find ./src -name '*.c')

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-Wextra -Werror

NAME	=	mysh

all: $(NAME)

$(NAME):	$(OBJS)
	gcc -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re