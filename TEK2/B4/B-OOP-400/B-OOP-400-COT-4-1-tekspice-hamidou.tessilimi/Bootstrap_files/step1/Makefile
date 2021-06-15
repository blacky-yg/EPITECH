################################################################################
#                                                                              #
#                   Makefile for list project                                  #
#                   Made by David GIRON & Maxime MONTINET                      #
#                                                                              #
################################################################################


NAME =		demo

INC_PATH =	.

SRC =		\
			list.c

SRC_TEST =  $(SRC)\
			main_test.c

SRC_DEMO =  $(SRC)\
			main.c

OBJ_TEST =		$(SRC_TEST:.c=.o)
OBJ_DEMO =		$(SRC_DEMO:.c=.o)

CC =		gcc $(CFLAGS)
LD =		gcc $(LDFLAGS)
CFLAGS =	-g -W -Wall -Werror -ansi -pedantic
LDFLAGS =

all:
	@make test
	@./test
	@make $(NAME)

$(NAME):	$(OBJ_DEMO)
		$(LD) -o $(NAME) -I $(INC_PATH) $(OBJ_DEMO) $(LIB)

test:		$(OBJ_TEST)
		$(LD) -o test -I $(INC_PATH) $(OBJ_TEST) $(LIB)

%.o: %.c
		$(CC) -I $(INC_PATH) -o $@ -c $<

%.d: %.c
		$(CC) -I $(INC_PATH) -MM -MD -o $@ $<

clean:
		/bin/rm -f $(OBJ_TEST) $(OBJ_DEMO) $(DEP) *~

fclean:		clean
		/bin/rm -rf $(NAME) doc test

re:		fclean all

doc:
		rm -rf doc
		mkdir doc
		doxygen .
		mv html latex doc
