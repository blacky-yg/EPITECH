##
## EPITECH PROJECT, 2021
## day01
## File description:
## Makefile
##

SRCS	=	ex00/add_mul.c \
			ex01/mem_ptr.c	\
			ex02/tab_to_2dtab.c	\
			ex03/func_ptr.c	\
			ex04/castmania.c	\
			ex04/div.c	\
			ex04/add.c

TESTS	=	$(shell find ./tests -name '*.c')

CRITERION	=	--coverage -lcriterion

USELESS		=	$(shell find . -type f -name "*~" -o -name "*.gcda" -o -name "*.gcno" -o -name "\#*\#")

tests_run:
	@gcc -o unit_tests $(SRCS) $(TESTS) $(CRITERION)
	@./unit_tests
	@gcovr --exclude tests/
	@gcovr --exclude tests/ --branches

clean:
	@rm -f $(USELESS)

fclean: clean
	@rm -f unit_tests

re: clean fclean

.PHONY: clean fclean re