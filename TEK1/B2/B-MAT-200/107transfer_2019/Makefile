##
## EPITECH PROJECT, 2019
## transfer
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

COMPILE			=	$$'$(BOLD)$(GREEN)[ Compiled the project ! ]\t$(DEFAULT)'
RE_COMPILE		=	$$'$(BOLD)$(GREEN)[ Recompiled the project ! ]\t$(DEFAULT)'
CLEAN			=	$$'$(BOLD)$(RED)[ Removing object files in [$(LIB_DIR)]... }\t$(DEFAULT)'
FCLEAN			=	$$'$(BOLD)$(RED)[ Removing binary... ]\t$(DEFAULT)'
FILES_REMOVED	=   $$'$(BOLD)$(RED)[ Removing object files in [$(SRC_DIR)]... ]$(DEFAULT)'

SRC				=	$(shell find $(SRC_DIR) -name '*.c')

OBJS			=	$(SRC:.c=.o)

LIFLAGS			=	-I $(INC_DIR)

MAT				=	-lm

LDFLAGS			=	-Wall -Wextra -Werror -std=c99

NAME			=	107transfer

all:	$(NAME)

$(NAME):	$(OBJS)
		@gcc -o $(NAME) $(MAT) $(OBJS) $(LIFLAGS) $(LDFLAGS)
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
