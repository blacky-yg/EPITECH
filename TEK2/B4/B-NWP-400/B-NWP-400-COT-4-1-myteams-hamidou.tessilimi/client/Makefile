##
## EPITECH PROJECT, 2021
## client
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
COMPILE			=	$$'$(BOLD)$(GREEN)[ Compiled the project [myteams_cli] ! ]\t$(DEFAULT)'
CLEAN			=	$$'$(BOLD)$(RED)[ Removed client useless files... ]\t$(DEFAULT)'
FCLEAN			=	$$'$(BOLD)$(RED)[ Removed myteams_cli binary... ]\t$(DEFAULT)'

SRCS	=	$(shell find ./src -name "*.c")

OBJS	=	$(SRCS:.c=.o)

USELESS		=	$(shell find . -type f -name "*~" -o -name "*.gcda" -o -name "*.gcno" -o -name "\#*\#" -o -name "v*")

CFLAGS		=	-Wall -Wextra -Werror -g3 -I ./include -I ../libs/myteams/

TEAMS_LIB	=	-luuid -L ../libs/myteams/ -lmyteams

NAME		=	myteams_cli

all:	$(NAME)

$(NAME):	$(OBJS)
	@gcc -o $(NAME) $(OBJS) $(TEAMS_LIB)
	@echo $(COMPILE)

%.o: %.c
	@gcc -o $@ -c $< $(CFLAGS)

clean:
	@rm -f $(USELESS) $(OBJS)
	@echo $(CLEAN)

fclean:
	@rm -f $(USELESS) $(OBJS)
	@rm -f $(NAME)
	@echo $(FCLEAN)

re: fclean all

.PHONY: all clean fclean re