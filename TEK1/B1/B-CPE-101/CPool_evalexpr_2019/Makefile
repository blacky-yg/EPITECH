##
## EPITECH PROJECT, 2019
## evalxpr
## File description:
## makefile
##

SRC	=	number.c	\
		summands.c	\
		eval_expr.c	\
		main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	eval_expr

CC	=	gcc

RM	=	rm -f

all:	$(NAME)

$(NAME): $(OBJ)
	make -C lib/my
	$(CC) $(OBJ) -o $(NAME) -L lib/my -lmy

clean:
	make clean -C lib/my
	$(RM) $(OBJ)

fclean: clean
	make fclean -C lib/my
	$(RM) $(NAME)
	$(RM) *~

re: fclean all
