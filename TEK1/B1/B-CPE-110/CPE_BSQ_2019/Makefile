##
## EPITECH PROJECT, 2019
## bsq
## File description:
## makefile
##

SRC	=	$(shell find ./src -name '*.c')

USELESS	=	$(shell find -name '*~')

OBJ	=	$(SRC:.c=.o)

CC	=	gcc

CFLAGS	=	-I ./include -L lib/my -lmy

RM	=	rm -rf

NAME	=	bsq

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	make clean -C lib/my
	$(RM) $(OBJ) $(USELESS) $(shell find . -name 'v*')

fclean: clean
	make fclean -C lib/my
	$(RM) $(NAME) $(USELESS)

re:	fclean all

.PHONY: all clean fclean re