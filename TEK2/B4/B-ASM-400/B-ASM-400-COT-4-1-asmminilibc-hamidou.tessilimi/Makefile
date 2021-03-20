##
## EPITECH PROJECT, 2021
## day01
## File description:
## Makefile
##

#COLOR
RED				=	\e[31m
GREEN			=	\e[32m
YELLOW			=	\e[33m
DEFAULT			=	\e[0m
BOLD			=	\e[1m

#TEXT
COMPILE			=	$$'$(BOLD)$(GREEN)[ Compiled the project ! ]\t$(DEFAULT)'
RE_COMPILE		=	$$'$(BOLD)$(GREEN)[ Recompiled the project ! ]\t$(DEFAULT)'
CLEAN			=	$$'$(BOLD)$(RED)[ Removed useless files... ]\t$(DEFAULT)'
FCLEAN			=	$$'$(BOLD)$(RED)[ Removed binary... ]\t$(DEFAULT)'
TESTS_COMPILE	=	$$'$(BOLD)$(YELLOW)[ Excecuted Units tests... ]\t$(DEFAULT)'

SRCS	=	$(shell find ./src -name "*.asm")

OBJS	=	$(SRCS:.asm=.o)

TESTS	=	$(shell find ./tests -name '*.c')

CRITERION	=	--coverage -lcriterion

USELESS		=	$(shell find . -type f -name "*~" -o -name "*.gcda" -o -name "*.gcno" -o -name "\#*\#" -o -name "v*")

LDFLAGS		=	-f elf64 -Werror

NAME		=	libasm.so

TEST_NAME	=	unit_tests

all:	$(NAME)

$(NAME):	$(OBJS)
	@ld -shared -o $(NAME) $(OBJS)
	@echo $(COMPILE)

%.o: %.asm
	@nasm $(LDFLAGS) $< -o $@

tests_run:
	@gcc -o $(TEST_NAME) $(TESTS) $(CRITERION) -ldl
	@echo $(TESTS_COMPILE)
	@./$(TEST_NAME)
	@gcovr --exclude tests/

clean:
	@rm -f $(USELESS) $(OBJS)
	@echo $(CLEAN)

fclean: clean
	@rm -f $(TEST_NAME) $(NAME)
	@echo $(FCLEAN)

re: fclean all
	@echo $(RE_COMPILE)

.PHONY: all tests_run clean fclean re