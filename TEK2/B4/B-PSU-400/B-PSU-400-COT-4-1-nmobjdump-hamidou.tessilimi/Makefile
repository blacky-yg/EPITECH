##
## EPITECH PROJECT, 2021
## nm_objdump
## File description:
## Makefile
##

#COLOR
YELLOW			=	\e[33m
DEFAULT			=	\e[0m
BOLD			=	\e[1m

TESTS_COMPILE	=	$$'$(BOLD)$(YELLOW)[ Excecuted Units tests... ]\t$(DEFAULT)'

SRCS_NO_MAIN	=	$(shell find ./nm_dir/src -type f \( -iname "*.c" ! -iname "main.c" \))

SRCS_NO_MAIN	+=	$(shell find ./objdump_dir/src -type f \( -iname "*.c" ! -iname "main.c" \))

OBJS	=	$(SRCS:.c=.o)

TESTS	=	$(shell find ./tests -name '*.c')

CRITERION	=	--coverage -lcriterion

USELESS		=	$(shell find . -type f -name "*~" -o -name "*.gcda" -o -name "*.gcno" -o -name "\#*\#" -o -name "v*")

TEST_NAME	=	unit_tests

all: nm objdump

nm:
	@make -sC nm_dir/
	@cp nm_dir/my_nm .

objdump:
	@make -sC objdump_dir/
	@cp objdump_dir/my_objdump .

tests_run:
	@gcc -o $(TEST_NAME) $(SRCS_NO_MAIN) $(TESTS) $(CRITERION)
	@echo $(TESTS_COMPILE)
	@./$(TEST_NAME)
	@gcovr --exclude tests/
	@gcovr --exclude tests/ --branches

clean:
	@make clean -sC nm_dir
	@make clean -sC objdump_dir
	@rm -rf my_objdump my_nm

fclean:	clean
	@make fclean -sC nm_dir
	@make fclean -sC objdump_dir
	@rm -f $(USELESS) $(TEST_NAME)

re:	fclean all

.PHONY: all clean fclean re