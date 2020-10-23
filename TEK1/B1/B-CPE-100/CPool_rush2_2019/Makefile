##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

SRC	=	my_putchar.c	\
		my_putstr.c	\
		my_put_nbr.c	\
		rush2.c

OBJ	=	$(SRC:.c=.o)

NAME	=	rush2

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	rm -f *~

fclean: clean
	rm -f $(NAME)

re:	fclean all
