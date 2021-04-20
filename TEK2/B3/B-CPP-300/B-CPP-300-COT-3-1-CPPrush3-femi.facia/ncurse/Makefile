
##
## EPITECH PROJECT, 2021
## day01
## File description:
## Makefile
##

SRCS	=	$(shell find . -name '*.cpp')

OBJS	=	$(SRCS:.cpp=.o)

LIB_NCURSES	=	-lncurses

USELESS		=	$(shell find . -type f -name "*~" -o -name "*.gcda" -o -name "*.gcno" -o -name "\#*\#")

NAME	=	ncurse

all: $(NAME)

$(NAME):	$(OBJS)
	@g++ -o $(NAME) $(OBJS) $(LIB_NCURSES)

%.o: %.c
	@g++ -o $@ -c $< -g

clean:
	@rm -f $(OBJS) $(USELESS)

fclean: clean
	@rm -f $(NAME) unit_tests

re: clean fclean all

.PHONY: all clean fclean re