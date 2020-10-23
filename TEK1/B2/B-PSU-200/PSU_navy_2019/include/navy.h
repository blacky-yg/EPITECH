/*
** EPITECH PROJECT, 2020
** navy
** File description:
** navy.h
*/

#ifndef _NAVY_H_
#define _NAVY_H_

#include "my.h"
#include "header.h"
#include "struct.h"

#define TOUCHED (84)
#define MISSED (77)

#ifndef READ_SIZE
#define READ_SIZE (100000)
#endif

//MAIN
void init_game(GAME *game);
int start_game(int ac, char **av, GAME *game);

//CONNECTION
void sig_handler(int sig, siginfo_t *info, void *ptr);
int reception(void);
int invitation(pid_t pid);
void co_to_p2(GAME *game);
void co_to_p1(GAME *game, pid_t pid);

//MAP
char **init_map(void);
void display_map(char **map);
int load_map(char *fp, GAME *game);
int put_on_map(char *pos, GAME *game);
void update_map(GAME *game, int hit, char *move);

//GAME
int play_game(GAME *game);
int player1(GAME *game);
int player2(GAME *game);
void check_status (GAME *game);

//PLAYER 1
int check_input(char *move);
int nb_sig(char *move);
int send_attack(GAME *game);
int hit_ennemy(int nb_sig);
int receive_answer(GAME *game);

//PLAYER 2
int send_it_hit(int hit, int sig, GAME *game);
int hit_me(GAME *game, int nb);
char *translate_sig(int nb);
int receive_attack(GAME *game);

//RIGOR
int check_arg(int ac, char **av);
int check_line(char *line);
int check_file(char *filepath);
int check_line2(char *filepath);
int check_file2(char *filepath);

//OTHERS_FUNCTIONS
char *get_next_line(int fd);
char *allocation(char *line, char *buff, int *cpt, int size_line);
void usage(void);

#endif /* !_NAVY_H_ */