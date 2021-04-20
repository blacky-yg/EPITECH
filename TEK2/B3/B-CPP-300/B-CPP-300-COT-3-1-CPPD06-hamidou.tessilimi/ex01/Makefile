##
## EPITECH PROJECT, 2021
## day06
## File description:
## Makefile
##

SRCS	=	$(shell find . -name '*.cpp')

OBJS	=	$(SRCS:.cpp=.o)

CFLAGS	=	-Wall -Wextra -Werror

NAME	=	my_convert_temp

all: $(NAME)

$(NAME):	$(OBJS)
	@g++ -o $(NAME) $(OBJS) $(CFLAGS)

%.o: %.c
	@g++ -o $@ -c $< -g

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: clean fclean all

.PHONY: all clean fclean re