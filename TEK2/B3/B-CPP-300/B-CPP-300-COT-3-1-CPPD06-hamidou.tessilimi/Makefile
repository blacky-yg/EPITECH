##
## EPITECH PROJECT, 2021
## day06
## File description:
## Makefile
##

SRCS	=	ex00/my_cat.cpp \
			ex01/my_convert_temp.cpp

TESTS	=	$(shell find ./tests -name '*.cpp')

CRITERION	=	--coverage -lcriterion

USELESS		=	$(shell find . -type f -name "*~" -o -name "*.gcda" -o -name "*.gcno" -o -name "\#*\#")

tests_run:
	@g++ -o unit_tests $(SRCS) $(TESTS) $(CRITERION)
	@./unit_tests
	@gcovr --exclude tests/
	@gcovr --exclude tests/ --branches

clean:
	@rm -f $(USELESS)

fclean: clean
	@rm -f unit_tests

re: clean fclean

.PHONY: clean fclean re