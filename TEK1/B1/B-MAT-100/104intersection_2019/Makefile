##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

SRC	=	$(shell find ./src -name '*.c')

OBJ =		$(SRC:.c=.o)

NAME =		104intersection

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) -lm

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all