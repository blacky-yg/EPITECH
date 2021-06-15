################################################################################
#                                                                              #
#                   Makefile for list project                                  #
#                   Made by David GIRON & Maxime MONTINET                      #
#                                                                              #
################################################################################


NAME =		demo

INC_PATH =	.

SRC =		\

SRC_TEST =  $(SRC)\
			main_test.cc

SRC_DEMO =  $(SRC)\
			main.cc

OBJ_TEST =		$(SRC_TEST:.cc=.o)
OBJ_DEMO =		$(SRC_DEMO:.cc=.o)

CC =		g++ $(CFLAGS)
LD =		g++ $(LDFLAGS)
CFLAGS =	-g -W -Wall -Werror
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
		/bin/rm -rf $(NAME) test doc

re:		fclean all

doc:
	rm -rf doc
	mkdir doc
	doxygen .
	mv latex html doc
