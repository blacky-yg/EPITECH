##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

# Output function
ECHO 			=	echo
LIB_INDENT		=	sed -E "s/^/`printf "\\e[1;35m"`>`printf "\\e[0m"`  /"

# Colors
BLACK			=	\e[30m
RED				=	\e[31m
GREEN			=	\e[32m
YELLOW			=	\e[33m
BLUE			=	\e[34m
MAGENTA			=	\e[35m
CYAN			=	\e[36m
WHITE			=	\e[37m
DEFAULT			=	\e[0m
BOLD			=	\e[1m

# Directories
INC_DIR			=	./include/
LIB_DIR 		=	./lib/my

# Compile Strings
LIB_COMPILE		=	$$'$(BOLD)$(GREEN)[ Compiled library ! ]\t$(DEFAULT)'
OK				=	$$'$(BOLD)$(GREEN)[ OK ]\t$(DEFAULT)'
WARNING			=	$$'$(BOLD)$(YELLOW)[ WARNING ]\t$(DEFAULT)'
ERROR			=	$$'$(BOLD)$(RED)[ ERROR ]\t$(DEFAULT)'
CLEAN			=	$$'$(BOLD)$(RED)[ Removing object files in [$(LIB_DIR)]... ]\t$(DEFAULT)'
FCLEAN			=	$$'$(BOLD)$(RED)[ Removing libmy.a in [$(LIB_DIR)]... ]\t$(DEFAULT)'

# Object Compile Status
define compile_check
	@$(1) 2> $@.log; \
	RESULT=$$?; \
	if [ $$RESULT -ne 0 ]; then \
		$(ECHO) $(ERROR) $$'$(@F)'; \
		cat $@.log | sed -E "s/^/`printf "\\e[1;31m"`>`printf "\\e[0m"`  /";	\
	elif [ -s $@.log ]; then \
		$(ECHO) $(WARNING) $$'$(@F)'; \
		cat $@.log | sed -E "s/^/`printf "\\e[1;33m"`>`printf "\\e[0m"`  /";	\
	else \
		$(ECHO) $(OK) $$'$(@F)'; \
		cat $@.log | sed -E "s/^/`printf "\\e[1;32m"`>`printf "\\e[0m"`  /";	\
	fi
	@$(RM) $@.log;
	@exit $$RESULT
endef

SRC	=	$(shell find . -name '*.c')

OBJ	=	$(SRC:.c=.o)

LIB	=	ar rc

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	@$(LIB) $(NAME) $(OBJ)
	@$(ECHO) $(LIB_COMPILE)

%.o: %.c
	@$(CC) -o $@ -c $<

clean:
	@$(RM) $(OBJ)
	@$(ECHO) $(CLEAN)

fclean: clean
	@$(RM)  $(NAME)
	@$(ECHO) $(FCLEAN)

re: fclean all

.PHONY: all clean fclean re