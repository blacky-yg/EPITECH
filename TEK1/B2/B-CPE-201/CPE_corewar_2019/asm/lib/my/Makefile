##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

RED				=	\e[31m
GREEN			=	\e[32m
DEFAULT			=	\e[0m
BOLD			=	\e[1m
INC_DIR			=	./include/
LIB_DIR 		=	./lib/my
LIB	=	ar rc

SRC	=	$(shell find . -name '*.c')

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	@$(LIB) $(NAME) $(OBJ)

%.o: %.c
	@gcc -o $@ -c $<

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM)  $(NAME)

re: fclean all

.PHONY: all clean fclean re