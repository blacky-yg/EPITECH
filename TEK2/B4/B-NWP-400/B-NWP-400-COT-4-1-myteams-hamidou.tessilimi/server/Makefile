##
## EPITECH PROJECT, 2021
## server
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
COMPILE			=	$$'$(BOLD)$(GREEN)[ Compiled the project [myteams_server] ! ]\t$(DEFAULT)'
RE_COMPILE		=	$$'$(BOLD)$(GREEN)[ Recompiled the project [myteams_server]! ]\t$(DEFAULT)'
CLEAN			=	$$'$(BOLD)$(RED)[ Removed server useless files... ]\t$(DEFAULT)'
FCLEAN			=	$$'$(BOLD)$(RED)[ Removed myteams_server... ]\t$(DEFAULT)'

SRCS	=	$(shell find ./src -name "*.c")

OBJS	=	$(SRCS:.c=.o)

USELESS		=	$(shell find . -type f -name "*~" -o -name "*.gcda" -o -name "*.gcno" -o -name "\#*\#" -o -name "v*")

LDFLAGS		=	-Wall -Wextra -Werror -W -I./include/ -I../libs/myteams/ -g3

TEAMS_LIB	=	-luuid -L../libs/myteams/ -lmyteams

NAME		=	myteams_server

all:	$(NAME)

$(NAME):	$(OBJS)
	@gcc -o $(NAME) $(OBJS) $(TEAMS_LIB) $(LDFLAGS)
	@echo $(COMPILE)

%.o: %.c
	@gcc -o $@ -c $< $(LDFLAGS)

clean:
	@rm -f $(USELESS) $(OBJS)
	@echo $(CLEAN)

fclean: clean
	@rm -f $(NAME)
	@echo $(FCLEAN)

re: fclean all
	@echo $(RE_COMPILE)

.PHONY: all clean fclean re