##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

CC	=	gcc

RM	=	rm -f

SRC	=	src/usage.c	\
		src/main.c	\
		src/display_vect_velo.c	\
		src/display_vect_ball_end.c	\
		src/display_incidence_angle.c	\
		src/check_arguments.c	\
		src/pong.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -I./include

LDFLAGS	=	-L ./lib/my -lmy

NAME	=	101pong

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C ./lib/my
	$(CC) -g3 $(OBJ) $(LDFLAGS) $(CFLAGS) -o $(NAME) -lm

clean:
	make clean -C ./lib/my
	$(RM) $(OBJ)
	$(RM) src/*.o

fclean: clean
	make fclean -C ./lib/my
	$(RM) $(NAME) *~ src/*~ include/*~

re: fclean all