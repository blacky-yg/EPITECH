##
## EPITECH PROJECT, 2019
## my_hunter
## File description:
## makefile
##

SRC	=	$(shell find ./src -name '*.c')

USELESS	=	$(shell find -name '*~')

OBJ	=	$(SRC:.c=.o)

RM	=	rm -rf

GRFLAGS	=	-lcsfml-system -lcsfml-window -lcsfml-graphics -lcsfml-audio -lcsfml-network

CFLAGS	=	-Wall -Werror -pedantic -I./include -L lib/my -lmy

NAME	=	my_hunter

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	gcc -o $(NAME) $(OBJ) $(GRFLAGS) $(CFLAGS)

clean:
	make clean -C lib/my
	$(RM) $(OBJ) $(USELESS)
	$(RM) $(TEST_GCDA) $(TEST_GCNO)

fclean: clean
	make fclean -C lib/my
	$(RM) $(NAME) $(USELESS)
	$(RM) $(TEST) $(shell find . -name 'v*')

re:	fclean all

.PHONY: all clean fclean re