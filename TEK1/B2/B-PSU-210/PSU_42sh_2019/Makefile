##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Compilator
##

SRC	=	$(shell find ./src -name '*.c')

OBJ	=	$(SRC:.c=.o)

NAME	=	42sh

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(SRC) -g3

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -rf .vscode .dist

re:	fclean all
