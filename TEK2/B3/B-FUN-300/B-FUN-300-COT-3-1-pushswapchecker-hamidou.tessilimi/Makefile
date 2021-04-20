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

CC				= 	ghc

SRC				=	$(shell find . -name "*.hs")

NAME			=	pushswap_checker

all:	$(NAME)

$(NAME):	$(SRC)
		@$(CC) -Wall --make -o $(NAME) $(SRC)
		@echo $(COMPILE)

clean:
		@rm *.hi *.o
		@echo $(FILES_REMOVED)

fclean: clean
		@$(RM) $(NAME)
		@echo $(FCLEAN)

re:	fclean all
		@echo $(RE_COMPILE)

.PHONY:	all clean fclean re
