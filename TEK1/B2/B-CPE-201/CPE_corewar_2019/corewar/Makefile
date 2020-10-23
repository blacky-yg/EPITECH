##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

#COMMANDS
MAKE_CLEAN		=	make clean
MAKE_FCLEAN		=	make fclean

#COLOR
RED				=	\e[31m
GREEN			=	\e[32m
YELLOW			=	\e[33m
DEFAULT			=	\e[0m
BOLD			=	\e[1m

#DIR
INC_DIR			=	./include/
SRC_DIR			=	./src/
LIB_DIR 		=	./lib/my
LIB				=	-sC lib/my

#TEXT
COMPILE			=	$$'$(BOLD)$(GREEN)[ [COREWAR] Compiled the project ! ]\t$(DEFAULT)'
CLEAN			=	$$'$(BOLD)$(RED)[ [COREWAR] Removing object files in [./corewar/src]... ]\t$(DEFAULT)'
FCLEAN			=	$$'$(BOLD)$(RED)[ [COREWAR] Removing binary... (corewar)]\t$(DEFAULT)'
FILES_REMOVED	=   $$'$(BOLD)$(RED)[ [COREWAR] Removing object files in [./corewar/src]... ]$(DEFAULT)'

#COMPILE TOOLS

SRC				=	$(shell find $(SRC_DIR) -name '*.c')

OBJS			=	$(SRC:.c=.o)

LIFLAGS			=	-I $(INC_DIR) -L $(LIB_DIR) -lmy

LDFLAGS			=	-Wall -Wextra -Werror -std=c99

NAME			=	corewar

all:	$(NAME)

$(NAME):	$(OBJS)
		@make $(LIB)
		@gcc -o $(NAME) $(OBJS) $(LIFLAGS) $(LDFLAGS)
		@echo $(COMPILE)

%.o: %.c
	@gcc -o $@ -c $<

clean:
		@$(MAKE_CLEAN) $(LIB)
		@$(RM) $(OBJS)
		@echo $(FILES_REMOVED)

fclean: clean
		@$(MAKE_FCLEAN) $(LIB)
		@$(RM) $(NAME)
		@echo $(FCLEAN)

re:	fclean all

.PHONY:	all clean fclean re