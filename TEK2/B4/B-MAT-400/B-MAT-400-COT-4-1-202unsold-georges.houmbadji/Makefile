##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

FLAGS	=	-Wall -Werror -Wextra -pedantic -lm

CC	=	g++

RM	=	rm -f

SRC =	$(wildcard src/*.cpp)

TESTS	=	$(shell find ./tests -name '*.cpp')

SRCS_NO_MAIN	=	$(shell find ./src -type f \( -iname "*.cpp" ! -iname "main.cpp" \))

CRITERION	=	--coverage -lcriterion

OBJ =	$(SRC:.cpp=.o)

NAME =	202unsold

TEST_NAME = unit_tests

all:	$(NAME)

$(NAME):	$(OBJ);
		$(CC) -o $(NAME) $(OBJ) $(FLAGS)

tests_run:
	@g++ -o $(TEST_NAME) $(SRCS_NO_MAIN) $(TESTS) $(CRITERION)
	./$(TEST_NAME)
	@gcovr --exclude tests/

clean:
	$(RM) $(OBJ)

fclean:	clean;
	$(RM) $(NAME) $(TEST_NAME)
	$(RM) *.gcda *.gcno

re:	fclean all

.PHONY:	all clean fclean re
