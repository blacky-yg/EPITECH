##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

RED				=	\e[31m
GREEN			=	\e[32m
YELLOW			=	\e[33m
DEFAULT			=	\e[0m
BOLD			=	\e[1m

COMPILE			=	$$'$(BOLD)$(GREEN)[ Compiled the project ! ]\t$(DEFAULT)'
RE_COMPILE		=	$$'$(BOLD)$(GREEN)[ Recompiled the project ! ]\t$(DEFAULT)'
CLEAN			=	$$'$(BOLD)$(RED)[ Removing object files ... }\t$(DEFAULT)'
FCLEAN			=	$$'$(BOLD)$(RED)[ Removing binary... ]\t$(DEFAULT)'
FILES_REMOVED	=   $$'$(BOLD)$(RED)[ Removing object files ... ]$(DEFAULT)'

SRC				=	DoOp.hs

NAME			=	doop

all:	$(NAME)

$(NAME):	$(SRC)
		@ghc -o $(NAME) $(SRC)
		@echo $(COMPILE)

clean:
		@$(RM) $(OBJS)
		@echo $(FILES_REMOVED)

fclean: clean
		@$(RM) $(NAME) *.hi *.o
		@echo $(FCLEAN)

re:	fclean all
		@echo $(RE_COMPILE)

.PHONY:	all clean fclean re