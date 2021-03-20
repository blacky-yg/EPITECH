##
## EPITECH PROJECT, 2021
## nm_objdump
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

SRCS	=	$(shell find ./src -name "*.c")

OBJS	=	$(SRCS:.c=.o)

LDFLAGS		=	-Wall -Wextra -Werror -W

NAME		=	my_objdump

all:	$(NAME)

$(NAME):	$(OBJS)
	@gcc -o $(NAME) $(OBJS) $(LDFLAGS)
	@cp $(NAME) ..
	@echo $(COMPILE)

%.o: %.c
	@gcc -o $@ -c $< -g

clean:
	@rm -f $(OBJS)
	@echo $(CLEAN)

fclean: clean
	@rm -f $(NAME)
	@echo $(FCLEAN)

re: fclean all
	@echo $(RE_COMPILE)

.PHONY: all tests_run clean fclean re