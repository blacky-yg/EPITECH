##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

#COLOR
RED				=	\e[31m
GREEN			=	\e[32m
YELLOW			=	\e[33m
DEFAULT			=	\e[0m
BOLD			=	\e[1m

#DIR
INC_DIR			=	./include/
SRC_DIR			=	./src/

#TEXT
COMPILE			=	$$'$(BOLD)$(GREEN)[ Compiled the project ! ]\t$(DEFAULT)'
RE_COMPILE		=	$$'$(BOLD)$(GREEN)[ Recompiled the project ! ]\t$(DEFAULT)'
CLEAN			=	$$'$(BOLD)$(RED)[ Removing object files in [$(LIB_DIR)]... }\t$(DEFAULT)'
FCLEAN			=	$$'$(BOLD)$(RED)[ Removing binary... ]\t$(DEFAULT)'
FILES_REMOVED	=   $$'$(BOLD)$(RED)[ Removing object files in [$(SRC_DIR)]... ]$(DEFAULT)'

#COMPILE TOOLS
SRC				=	$(shell find $(SRC_DIR) -name '*.c')

OBJS			=	$(SRC:.c=.o)

LIFLAGS			=	-I $(INC_DIR)

LDFLAGS			=	-Wall -Wextra -Werror -std=c99

NAME			=	binary

all:	$(NAME)

$(NAME):	$(OBJS)
		@gcc -o $(NAME) $(OBJS) $(LIFLAGS) $(LDFLAGS)
		@echo $(COMPILE)

%.o: %.c
	@gcc -o $@ -c $<

clean:
		@$(RM) $(OBJS)
		@echo $(FILES_REMOVED)

fclean: clean
		@$(RM) $(NAME)
		@echo $(FCLEAN)

re:	fclean all
		@echo $(RE_COMPILE)

.PHONY:	all clean fclean re