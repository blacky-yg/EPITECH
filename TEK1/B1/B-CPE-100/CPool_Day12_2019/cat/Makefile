##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

SRC	=	lib/my/my_putchar.c	\
		lib/my/my_putstr.c	\
		main.c	\
		cat.c

OBJ	=	$(SRC:.c=.o)

NAME	=	cat

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)

tests_run:
	gcc -o test_cat cat.c lib/my/my_putchar.c lib/my/my_putstr.c ../tests/test_cat.c --coverage -lcriterion

clean:
	rm -f $(OBJ)
	rm -f *~
	rm -f *.gcna
	rm -f *.gcno
	rm -f *.gcda

fclean: clean
	rm -f $(NAME)
	rm -f test_cat

re:	fclean all
