##
## EPITECH PROJECT, 2021
## day03
## File description:
## Makefile
##

#COMMANDS
MAKE_CLEAN		=	make clean
MAKE_FCLEAN		=	make fclean
RM				=	rm -rf
AR				=	ar rc

#COLOR
RED				=	\e[31m
GREEN			=	\e[32m
YELLOW			=	\e[33m
DEFAULT			=	\e[0m
BOLD			=	\e[1m

#TEXT
COMPILE			=	$$'$(BOLD)$(GREEN)[ Compiled the project ! ]\t$(DEFAULT)'
RE_COMPILE		=	$$'$(BOLD)$(GREEN)[ Recompiled the project ! ]\t$(DEFAULT)'
TEST_RUN		= 	$$'$(BOLD)$(GREEN)[ Running Test ...]$(DEFAULT)'
CLEAN			=	$$'$(BOLD)$(RED)[ Removing object files ... }\t$(DEFAULT)'
FCLEAN			=	$$'$(BOLD)$(RED)[ Removing binary... ]\t$(DEFAULT)'
FILES_REMOVED	=   $$'$(BOLD)$(RED)[ Removing object files ... ]$(DEFAULT)'

#COMPILE TOOLS
CRITERION		=	--coverage -lcriterion
LDFLAGS			=	-std=gnu11 -Wall -Wextra
USELESS			=	$(shell find . -type f -name "*~" -o -name "*.gcda" -o -name "*.gcno" -o -name "\#*\#")

SRC				=	$(shell find . -name '*.c')

TESTS			=	$(shell find ./tests -name '*.c')

OBJS			=	$(SRC:.c=.o)

NAME			=	libstring.a

all:	$(NAME)

$(NAME):	$(OBJS)
		@$(AR) $(NAME) $(OBJS)
		@echo $(COMPILE)

%.o: %.c
		@gcc -o $@ -c $< -g

tests_run:
		@gcc -o unit_tests $(SRCS) $(TESTS) $(CRITERION)
		@./unit_tests
		gcovr --exclude tests/
		gcovr --exclude tests/ --branches

clean:
		@$(RM) $(OBJS) $(USELESS)
		@echo $(FILES_REMOVED)

fclean: clean
		@$(RM) $(NAME) unit_tests
		@echo $(FCLEAN)

re:	fclean all
		@echo $(RE_COMPILE)

.PHONY:	all clean fclean re