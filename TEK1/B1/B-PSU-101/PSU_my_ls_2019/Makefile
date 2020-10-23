##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

# Output function
ECHO 			=	echo
LIB_INDENT		=	sed -E "s/^/`printf "\\e[1;35m"`>`printf "\\e[0m"`  /"
CC				=	gcc
CD				=	cd
RM				=	rm -f
RMD				=	rm -rf
MAKE_CLEAN		=	make clean
MAKE_FCLEAN		=	make fclean

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
SRC_DIR			=	./src/
OBJ_DIR			=	./obj/
BIN_DIR			=	./bin/
LIB_DIR 		=	./lib/my

# Compile Strings
COMPILE			=	$$'$(BOLD)$(GREEN)[ Compiled the project ! ]\t$(DEFAULT)'
COMPILE_DEBUG	=	$$'$(BOLD)$(GREEN)[ Compiled the project with debug mode! ]\t$(DEFAULT)'
RE_COMPILE		=	$$'$(BOLD)$(GREEN)[ Recompiled the project ! ]\t$(DEFAULT)'
OK				=	$$'$(BOLD)$(GREEN)[ OK ]\t$(DEFAULT)'
WARNING			=	$$'$(BOLD)$(YELLOW)[ WARNING ]\t$(DEFAULT)'
ERROR			=	$$'$(BOLD)$(RED)[ ERROR ]\t$(DEFAULT)'
CLEAN			=	$$'$(BOLD)$(RED)[ Removing object files in [$(LIB_DIR)]... }\t$(DEFAULT)'
FCLEAN			=	$$'$(BOLD)$(RED)[ Removing binary... ]\t$(DEFAULT)'
FILES_REMOVED	=   $$'$(BOLD)$(RED)[ Removing object files in [$(SRC_DIR)]... ]$(DEFAULT)'

NAME			=	my_ls

SRC				=	$(shell find $(SRC_DIR) -name '*.c')

OBJ				=	$(SRC:.c=.o)

LIB				=	-C lib/my

USELESS			=	$(shell find . -print0 | grep -FzZ ‘*~)

USL_INC			=	$(shell find $(INC_DIR) -print0 | grep -FzZ 'include/*~')

USL_SRC			=	$(shell find $(SRC_DIR) -print0 | grep -FzZ ‘src/*~ )

USL_LIB			=	$(shell find $(LIB_DIR) -print0 | grep -FzZ ‘lib/my/*~)

USL_DA			=	$(shell find . -print0 | grep -FzZ ‘*gcda)

USL_NO			=	$(shell find . -print0 | grep -FzZ ‘*gcno)

UNIT_TEST		=	$(shell find -name 'tests/test_my_*.c')

VG 				=	$(shell find . -name 'v*')

LIFLAGS			=	-I $(INC_DIR) -L $(LIB_DIR) -lmy

CCFLAGS			=	-W -Wall -Wextra -Werror -std=c99 -pedantic -g -g3 -ansi

all:	$(NAME)

$(NAME):	$(OBJ)
		@$(MAKE) $(LIB)
		@$(CC) $(OBJ) $(LIFLAGS) -o $(NAME)
		@$(ECHO) $(COMPILE)

clean:
		@$(MAKE_CLEAN) -C $(LIB_DIR)
		@$(RM) $(OBJ) $(USELESS)
		@$(RM) $(USL_DA) $(USL_NO) $(USL_INC) $(USL_SRC)
		@$(ECHO) $(FILES_REMOVED)

fclean: clean
		@$(MAKE_FCLEAN) $(LIB)
		@$(RM) $(NAME)
		@$(RM) $(USL) $(USL_DA) $(USL_NO) $(USL_INC) $(USL_SRC) $(USELESS) $(VG) $(TEST)
		@$(ECHO) $(FCLEAN)

re:	fclean all
		@$(ECHO) $(RE_COMPILE)

.PHONY:	all clean fclean re