##
## EPITECH PROJECT, 2019
## my_makefile
## File description:
## makefile
##

SRC	=	$(shell find src/ -name '*.cpp')

OBJ	=	$(SRC:.cpp=.o)

NAME	=	arcade

LIB	=	-Wall -Wextra -Werror

INC	=	-I./include/

all:	core graphicals games

core :	$(OBJ)
	g++ -o $(NAME) $(OBJ) $(LIB) $(INC) -ldl -g -g3

graphicals:
	make -sC graphicals/ncurses
	make -sC graphicals/sdl2
	make -sC graphicals/sfml
	cp graphicals/ncurses/arcade_ncurses.so lib/.
	cp graphicals/sdl2/arcade_sdl2.so lib/.
	cp graphicals/sfml/arcade_sfml.so lib/.

games:
	make -sC games/snake
	make -sC games/pacman
	cp games/pacman/arcade_pacman.so lib/.
	cp games/snake/arcade_nibbler.so lib/.

clean:
	make clean -sC  games/snake
	make clean -sC  games/pacman
	make clean -sC  graphicals/ncurses
	make clean -sC  graphicals/sdl2
	make clean -sC  graphicals/sfml
	rm -f $(OBJ) lib/arcade_ncurses.so lib/arcade_sdl2.so lib/arcade_sfml.so lib/arcade_pacman.so lib/arcade_nibbler.so
	
fclean:	clean
	make fclean -sC  games/snake
	make fclean -sC  games/pacman
	make fclean -sC  graphicals/ncurses
	make fclean -sC  graphicals/sdl2
	make fclean -sC  graphicals/sfml
	rm -f $(NAME)
	rm -f $(shell find . -name 'a.out') 
	rm -f $(shell find . -name '*~') 

run_snake: all
	./arcade lib/arcade_sfml.so

re:	fclean all

.PHONY:	all clean fclean re core graphicals games clean