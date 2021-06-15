##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## my_makefile
##

SRC	=	$(shell find src/ -name '*.cpp')

OBJ	=	$(SRC:.cpp=.o)

NAME	=	arcade_pacman.so

INC	=	-I./include/

all:	$(NAME)

$(NAME):	$(OBJ)
	g++ -shared -o $(NAME) $(OBJ) -fpic

%.o: %.cpp
	g++ -c $< -o $@ -fpic -Wall -Werror

clean:
	rm -f	$(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -f *~

re:	fclean all