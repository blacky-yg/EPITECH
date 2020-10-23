##
## EPITECH PROJECT, 2019
## my_printf
## File description:
## makefile
##

LIGHT	=	\e[0m
BOLD	=	\e[1m
BLACK	=	\e[30m
RED	=	\e[31m
GREEN	=	\e[32m
YELLOW	=	\e[33m
BLUE	=	\e[34m
PURPLE	=	\e[35m
CYAN	=	\e[36m
WHITE	=	\e[37m
DEFAULT	=	\e[0;37m
INFO    =   $(BOLD)$(GREEN)[INFO]\t$(WHITE)
WARNING =   $(BOLD)$(YELLOW)[WARNING]\t$(WHITE)
ERROR   =   $(BOLD)$(RED)[ERROR]\t$(WHITE)

SRC		=	$(shell find ./src -name '*.c')

LIB		=	-C lib/my

USELESS		=	$(shell find -name '*~')

USL_INC		=	$(shell find -name 'include/*~')

USL_SRC		=	$(shell find -name 'src/*~')

USL_LIB		=	$(shell find -name 'lib/my/*~')

USL_DA		=	$(shell find -name '*.gcda')

USL_NO		=	$(shell find -name '*.gcno')

##UNIT_TEST	=	$(shell find -name 'tests/test*.c')

OBJ		=	$(SRC:.c=.o)

CCC		=	gcc -o

CC		=	gcc

ECHO		=	echo -e

CFLAGS		=	-I ./include -L lib/my -lmy

LDFLAGS		=	-Wall -Wextra -Werror

CRITERION	=	--coverage -lcriterion

TEST		=	unit_test

NAME		=	swap_elem

all:	$(NAME)

$(NAME):		$(OBJ)
		make $(LIB)
		$(CC) $(OBJ) $(CFLAGS) $(LDFLAGS) -o $(NAME)
		@$(ECHO) "$(INFO)Build complete !$(DEFAULT)"

tests_run:
		$(CC) -o $(TEST) $(SRC) tests/test_swap_elem.c $(CRITERION)

clean:
		make clean $(LIB)
		@rm -f $(OBJ) $(USELESS)
		@rm -f $(USL_DA) $(USL_NO) $(USL_INC) $(USL_SRC)
		@$(ECHO) "$(INFO)Files removed !$(DEFAULT)"

fclean: clean
		make fclean $(LIB)
		@rm -f $(NAME) $(USELESS)
		@rm -f $(TEST)

re:		fclean all

.PHONY:		all clean fclean re
