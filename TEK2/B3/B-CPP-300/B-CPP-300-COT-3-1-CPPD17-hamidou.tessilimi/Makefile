##
## EPITECH PROJECT, 2021
## day01
## File description:
## Makefile
##

SRCS	=	ex00/find.hpp	\
			ex01/MyAlgorithms.hpp	\
			$(shell find ./ex03 -name '*.cpp')	\
			$(shell find ./ex04 -name '*.cpp')

TESTS	=	$(shell find ./tests -name '*.cpp')

CRITERION	=	--coverage -lcriterion

USELESS		=	$(shell find . -type f -name "*~" -o -name "*.gcda" -o -name "*.gcno" -o -name "\#*\#")

tests_run:
	@g++ -o unit_tests $(SRCS) $(TESTS) $(CRITERION)
	@./unit_tests
	gcovr --exclude tests/
	gcovr --exclude tests/ --branches

clean:
	@rm -f $(USELESS)

fclean: clean
	@rm -f unit_tests

re: clean fclean

.PHONY: clean fclean re