##
## EPITECH PROJECT, 2019
## myteams
## File description:
## makefile
##

all: teams_server teams_cli

teams_server:
	@make -sC server
	@cp server/myteams_server .

teams_cli:
	@make -sC client
	@cp client/myteams_cli .

clean:
	@make clean -sC server
	@make clean -sC client

fclean:	clean
	@make fclean -sC server
	@make fclean -sC client
	@rm -f myteams_cli myteams_server

re:	fclean all

.PHONY:	all clean fclean re