##
## EPITECH PROJECT, 2019
## PSU_tetris_2019
## File description:
## Makefile
##

BOLD="\e[1m"
NBOLD="\e[21m"
BLINK="\e[5m"
REV="\e[7m"
HIDE="\e[8m"
UNDERLIN="\e[4m"
DIM="\e[2m"
ITALIC="\e[3m"
STHROUGH="\e[9m"

NBOLD="\e[21m"
NBLINK="\e[25m"
NREV="\e[27m"
NHIDE="\e[28m"
NUNDERLIN="\e[24m"
NDIM="\e[22m"
NITALIC="\e[23m"
NSTHROUGH="\e[29m"

NOCOLR="\e[0m"

#Colors
#BACKGROUND = Color + 10

DEFAULT="\e[39m"
RED="\e[31m"
GREEN="\e[32m"
YELLOW="\e[33m"
BLUE="\e[34m"
MAGENTA="\e[35m"
CYAN="\e[36m"
LIGHTGRAY="\e[37m"
DARKGRAY="\e[90m"
LIGHTRED="\e[91m"
LIGHTGREEN="\e[92m"
LIGHTYELLOW="\e[93m"
LIGHTBLUE="\e[94m"
LIGHTMAGENTA="\e[95m"
LIGHTCYAN="\e[96m"
WHITE="\e[97m"

CC = gcc

SRC =	$(shell echo init/*.c)	\
	$(shell echo src/*.c)	\
	$(shell echo src/menu/*.c)	\
	$(shell echo src/help/*.c)	\
	$(shell echo src/option/*.c)	\
	$(shell echo src/play/*.c)	\
	$(shell echo src/game/*.c)	\
	$(shell echo src/pause/*.c)	\
	$(shell echo src/game_end/*.c)	\
	$(shell echo destroy/*.c)

OBJ =	$(SRC:.c=.o)

CFLAGS = -w -I./include/ -Werror -Wall -Wextra --pedantic

CSFML = -lcsfml-audio -lcsfml-graphics -lcsfml-system -lcsfml-window

RM = rm -rf

NAME = my_rpg

all: $(NAME)

obj_file:
	@echo -en "\n"
	@echo -en $(BOLD)$(RED)"\t░▐█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█▄☆\n"$(NOCOLR)
	@echo -en $(BOLD)$(MAGENTA)"\t░███████████████████████\n"$(NOCOLR)
	@echo -en $(BOLD)$(RED)"\t░▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▓▓◤\n"$(NOCOLR)
	@echo -en $(BOLD)$(MAGENTA)"\t╬▀░▐▓▓▓▓▓▓▌▀█░░░█▀░\n"$(NOCOLR)
	@echo -en $(BOLD)$(RED)"\t▒░░▓▓▓▓▓▓█▄▄▄▄▄█▀╬░\n"$(NOCOLR)
	@echo -en $(BOLD)$(MAGENTA)"\t░░█▓▓▓▓▓▌░▒▒▒▒▒▒▒▒▒\n"$(NOCOLR)
	@echo -en $(BOLD)$(RED)"\t░▐█▓▓▓▓▓░░▒▒▒▒▒▒▒▒▒\n"$(NOCOLR)
	@echo -en $(BOLD)$(MAGENTA)"\t░▐██████▌╬░▒▒▒▒▒▒▒▒\n"$(NOCOLR)
	@echo -en "\n"

love:
	@echo -en "\n"
	@echo -en $(BOLD)$(CYAN)"   🔥   ██████╗░██████╗░░██████╗░   🔥\n"$(NOCOLR)
	@echo -en $(BOLD)$(YELLOW)"  🔥    ██╔══██╗██╔══██╗██╔════╝░    🔥\n"$(NOCOLR)
	@echo -en $(BOLD)$(CYAN)" 🔥     ██████╔╝██████╔╝██║░░██╗░     🔥\n"$(NOCOLR)
	@echo -en $(BOLD)$(YELLOW)" 🔥     ██╔══██╗██╔═══╝░██║░░╚██╗     🔥\n"$(NOCOLR)
	@echo -en $(BOLD)$(CYAN)"  🔥    ██║░░██║██║░░░░░╚██████╔╝    🔥\n"$(NOCOLR)
	@echo -en $(BOLD)$(YELLOW)"   🔥   ╚═╝░░╚═╝╚═╝░░░░░░╚═════╝░   🔥\n"$(NOCOLR)
	@echo -en ""

$(NAME): obj_file $(OBJ) love
	@$(CC) $(OBJ) -o $(NAME) $(LDFLAGS) $(CFLAGS) $(CSFML) && \
	echo -en $(BOLD)$(GREEN)"\n[✔] COMPILED:" "$(NAME)\n"$(NOCOLR) || \
	echo -en $(BOLD)$(RED)"\n[✘] BUILD FAILED:" "$(NAME)\n"$(NOCOLR)

%.o: %.c
	@echo -en "\e[`expr $$RANDOM % 37`;`expr $$RANDOM % 37`m"
	@echo -en "\e[`expr $$RANDOM % 37`;`expr $$RANDOM % 37`m"
	@echo -en "\e[`expr $$RANDOM % 37`m"
	@echo -en $(NBLINK)$(NREV)$(NHIDE)$(NUNDERLIN)$(NDIM)$(NITALIC)
	@echo -en $(NSTHROUGH)$(BOLD)
	@echo -en "¡¡ COMPILING $@ !!\n"
	@echo -en $(NOCOLR)
	@$(CC) -o $@ -c $<

clean:
	@$(RM) $(OBJ)
	@echo -en $(BOLD)$(YELLOW)"🌟 $(NAME)'s OBJ files deleted\n"$(NOCOLR)

fclean: clean
	@$(RM) $(NAME)
	@echo -en $(BOLD)$(CYAN)"🌟 $(NAME) deleted\n"$(NOCOLR)

re: fclean all

.PHONY: all clean fclean re love obj_file
