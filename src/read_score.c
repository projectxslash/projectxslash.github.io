/*
** EPITECH PROJECT, 2021
** ls
** File description:
** cd
*/

#include "../include/too.h"

char **twoo(char *str)
{
    char **map;
    int k = 0, n = 0, cols = 0, lines = 0;

    for (int a = 0; str[a]; a++)
        if (str[a] == ',')
            lines++;
    map = malloc(sizeof(char *) * (lines + 2));
    for (int a = 0; str[a]; a++, cols = 0, k++) {
        for (; str[a] != ',' && str[a] != '\0'; a++, cols++);
        map[k] = malloc(sizeof(char) * (cols + 1)); }
    k = 0;
    for (int a = 0; a < strlen(str); a++, k++, n = 0) {
        for (; str[a] != ',' && str[a] != '\0'; a++, n++)
            map[k][n] = str[a];
        map[k][n] = '\0'; }
    map[k] = NULL;
    return (map);
}

int *tabint(char **two)
{
    int *tab, b = 0;

    for (int a = 0; two[a]; a++)
        b++;
    tab = malloc(sizeof(int) * b);
    b = 0;
    for (int a = 0; two[b]; b++, a++)
        tab[a] = atoi(two[b]);
    return (tab);
}
