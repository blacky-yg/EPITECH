##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

MAKE_CLEAN		=	make clean
MAKE_FCLEAN		=	make fclean

RED				=	\e[31m
GREEN			=	\e[32m
YELLOW			=	\e[33m
DEFAULT			=	\e[0m
BOLD			=	\e[1m

INC_DIR			=	./include/
SRC_DIR			=	./src/
LIB_DIR 		=	./lib/my
LIB				=	-sC lib/my

COMPILE			=	$$'$(BOLD)$(GREEN)[ Compiled the project ! ]\t$(DEFAULT)'
RE_COMPILE		=	$$'$(BOLD)$(GREEN)[ Recompiled the project ! ]\t$(DEFAULT)'
OK				=	$$'$(BOLD)$(GREEN)[ OK ]\t$(DEFAULT)'
WARNING			=	$$'$(BOLD)$(YELLOW)[ WARNING ]\t$(DEFAULT)'
CLEAN			=	$$'$(BOLD)$(RED)[ Removing object files in [$(LIB_DIR)]... }\t$(DEFAULT)'
FCLEAN			=	$$'$(BOLD)$(RED)[ Removing binary... ]\t$(DEFAULT)'
FILES_REMOVED	=   $$'$(BOLD)$(RED)[ Removing object files in [$(SRC_DIR)]... ]$(DEFAULT)'

SRC				=	$(shell find $(SRC_DIR) -name '*.c')

OBJS			=	$(SRC:.c=.o)

LIFLAGS			=	-L $(LIB_DIR) -lmy

MAT			=	-lm

GRAPH		=	-lcsfml-system -lcsfml-window -lcsfml-graphics -lcsfml-audio -lcsfml-network

LDFLAGS			=	-Wall -Wextra -Werror -std=c99

NAME			=	my_defender

all:	$(NAME)

$(NAME):	$(OBJS)
		@make $(LIB)
		@gcc $(OBJS) $(LIFLAGS) $(LDFLAGS) $(MAT) $(GRAPH) -o $(NAME)
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
		@echo $(RE_COMPILE)

.PHONY:	all clean fclean re
