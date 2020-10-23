/*
** EPITECH PROJECT, 2019
** 102architect
** File description:
** 102architect.h
*/

#ifndef _102_ARCHITECT_H_
#define _102_ARCHITECT_H_

#include <unistd.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

void usage(void);

void translation(char *A, char *B, char *C, char *D, char *E);
void scaling(char *A, char *B, char *C, char *D, char *E);
void rotation(char *A, char *B, char *C, char *D);
void reflection(char *A, char *B, char *C, char *D);

#endif /* _102_ARCHITECT_H_ */
