##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

SRC	=	my_putchar.c	\
		my_put_nbr.c	\
		my_putstr.c	\
		my_strlen.c	\
		sum_stdarg.c	\
		disp_stdarg.c	\
		main.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall

RM	=	rm -rf

CC	=	gcc

NAME	=	my_disp_darg

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) *~

re: clean fclean all

.PHONY: all clean fclean re
