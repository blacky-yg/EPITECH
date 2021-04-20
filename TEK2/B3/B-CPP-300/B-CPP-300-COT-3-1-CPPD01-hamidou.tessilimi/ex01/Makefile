##
## EPITECH PROJECT, 2021
## day01
## File description:
## Makefile
##

SRCS	=	$(shell find ./src -name '*.c')

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-std=gnu11 -Wall -Wextra

TESTS	=	$(shell find ./tests -name '*.c')

CRITERION	=	--coverage -lcriterion

USELESS		=	$(shell find . -type f -name "*~" -o -name "*.gcda" -o -name "*.gcno" -o -name "\#*\#")

NAME	=	menger

all: $(NAME)

$(NAME):	$(OBJS)
	@gcc -o $(NAME) $(OBJS) $(CFLAGS)

%.o: %.c
	@gcc -o $@ -c $< -g

tests_run:
	@gcc -o unit_tests ./src/menger.c ./src/check_arg.c $(TESTS) $(CRITERION)
	@./unit_tests

clean:
	@rm -f $(OBJS) $(USELESS)

fclean: clean
	@rm -f $(NAME) unit_tests

re: clean fclean all

.PHONY: all clean fclean re