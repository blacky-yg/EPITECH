##
## EPITECH PROJECT, 2019
## my_makefile
## File description:
## makefile
##

SRC	=	$(shell find src/ -name '*.cpp')

OBJ	=	$(SRC:.cpp=.o)

NAME	=	arcade_ncurses.so

all: $(NAME)

$(NAME):	$(OBJ)
	g++ -shared -o $(NAME) $(OBJ) -lncurses -fpic -g -g3

%.o: %.cpp
	g++ -c $< -o $@ -fpic -Wall -Werror -lncurses -g -g3

test:
	g++ $(SRC) -Wall -Werror -lncurses

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -f src/*~
	rm -f *.o
	rm -rf .vscode .dist

re:	fclean all