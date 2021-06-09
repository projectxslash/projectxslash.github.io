/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <time.h>
#include <stdbool.h>

#define FREE (free(tab), free(buf), my_free(dico, map))

extern int max_try;

int my_str_isnum(char const *str);

void error(char **dico);

void my_free(char **tab, char *map);

char *load_in_1d(char *str);

char **map_two_d(char *str);

bool win(char *str);

void fill(char **str, char c, char *dico2);

int my_rand_number(char **dico);

void display_word(char *tab, char *str, int tries);

void game(char **dico, int max_try, char *map);

#endif /* !MY_H_ */
