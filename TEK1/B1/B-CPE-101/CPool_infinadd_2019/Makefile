##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

CC	=	gcc

RM	=	rm -f

SRC	=	infin_add.c	\
		main.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -I./include

LDFLAGS	=	-L ./lib/my -lmy

NAME	=	infin_add

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C ./lib/my
	$(CC) $(OBJ) $(LDFLAGS) $(CFLAGS) -o $(NAME)

clean:
	make clean -C ./lib/my
	$(RM) $(OBJ)

fclean: clean
	make fclean -C ./lib/my
	$(RM) $(NAME)
	$(RM) *~

re: fclean all
