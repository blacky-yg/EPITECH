##
## EPITECH PROJECT, 2019
## Bistromatic: Makefile
## File description:
## a Makefile that compiles bistromatic program.
##

SRC	=	src/main.c	\
		src/get_num_in_char.c	\
		src/number.c	\
		src/usage.c	\
		src/eval_expr.c	\
		src/summands.c	\
		src/factors.c	\
		src/check_brackets.c	\
		src/check_expr_base_error.c	\
		src/check_ops_base_error.c	\
		src/get_value.c	\
		src/check_base_num.c	\
		src/check_base_ops.c	\
		src/check_error.c	\
		src/div_operation.c	\
		src/mod_operation.c	\
		src/mult_operation.c	\
		src/add_operation.c	\
		src/sub_operation.c

OBJ	=	$(SRC:.c=.o)

CC	=	gcc

CFLAGS	=	-I./include -L./lib/my/ -lmy

NAME	=	calc

all:	$(NAME)

$(NAME):	$(OBJ)
		make -C ./lib/my/
		$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)
		make clean -C ./lib/my

fclean: clean
		rm -f $(NAME)
		make fclean -C ./lib/my
		rm -f src/*~

re:	fclean all

.PHONY:	all	clean	fclean	re
