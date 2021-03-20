##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRCS	=	$(shell find ./src -name '*.c')

OBJS	=	$(SRCS:.c=.o)

TESTS	=	$(shell find ./tests -name '*.c')

CRITERION	=	--coverage -lcriterion

USELESS		=	$(shell find . -type f -name "*~" -o -name "*.gcda" -o -name "*.o" -o -name "*.gcno" -o -name "\#*\#")

CFLAGS 		= 	-Wall -Wextra -fpic

NAME 	= 	libmy_malloc.so

all:	$(NAME)

$(NAME):	$(OBJS)
	@gcc -shared -o $(NAME) $(OBJS)

clean:
	@rm -f $(USELESS) $(OBJS)

fclean: clean
	@rm -f unit_tests $(NAME) test

re: fclean all

.PHONY: clean fclean re