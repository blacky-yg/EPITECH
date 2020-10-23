##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

RED				=	\e[31m
GREEN			=	\e[32m
DEFAULT			=	\e[0m
BOLD			=	\e[1m
INC_DIR			=	./include/
LIB_DIR 		=	./lib/my
LIB	=	ar rc

LIB_COMPILE		=	$$'$(BOLD)$(GREEN)[ Compiled library ! ]\t$(DEFAULT)'
CLEAN			=	$$'$(BOLD)$(RED)[ Removing object files in [$(LIB_DIR)]... ]\t$(DEFAULT)'
FCLEAN			=	$$'$(BOLD)$(RED)[ Removing libmy.a in [$(LIB_DIR)]... ]\t$(DEFAULT)'

SRC	=	$(shell find . -name '*.c')

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	@$(LIB) $(NAME) $(OBJ)
	@echo $(LIB_COMPILE)

%.o: %.c
	@gcc -o $@ -c $<

clean:
	@$(RM) $(OBJ)
	@echo $(CLEAN)

fclean: clean
	@$(RM)  $(NAME)
	@echo $(FCLEAN)

re: fclean all

.PHONY: all clean fclean re