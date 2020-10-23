##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

CC	=	gcc

RM	=	rm -f

SRC	=	$(shell find ./src -name '*.c')

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -I./include

LDFLAGS	=	-L ./lib/my -lmy

NAME	=	102architect

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C ./lib/my
	$(CC) $(OBJ) $(LDFLAGS) $(CFLAGS) -o $(NAME) -lm

clean:
	make clean -C ./lib/my
	$(RM) $(OBJ)
	$(RM) src/*.o

fclean: clean
	make fclean -C ./lib/my
	$(RM) $(NAME) *~ src/*~ include/*~

re: fclean all

.PHONY: all clean fclean re
