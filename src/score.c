/*
** EPITECH PROJECT, 2021
** ls
** File description:
** cd
*/

//cherche le sujet les gars ont les sujet pardon je compte sur toi man

#include "../include/too.h"

int golf(int ac, char **av)
{
    if (ac != 3)
        return (84);
    char **s1 = twoo(av[1]), **s2 = twoo(av[2]);
    int *tabint1 = tabint(s1), *tabint2 = tabint(s2);
    int score = 0, fnl = 0;

    for (int a = 0; tabint1[a]; a++) {
        score = tabint2[a] - tabint1[a];
        printf("Hole %d (Par %d): ", (a + 1), tabint1[a]);
        tabint2[a] == 1 ? printf("Hole-in-one! (") : 0;
        score_one(score);
        fnl += score;
        score_two(score);
        score_sign(score);
        tabint2[a] == 1 ? printf(")\n") : printf("\n"); }
    score = 0;
    final_score(tabint1, tabint2, score, fnl);
    return (0);
}

void score_one(int score)
{
    score == 3 ? printf("Birdie") : 0;
    score == 2 ? printf("Par") : 0;
    score == 1 ? printf("Bogey") : 0;
    score == 4 ? printf("Eagle") : 0;
    score == 5 ? printf("+4") : 0;
    return ;
}

void score_two(int score)
{
    score == 6 ? printf("Double bogey") : 0;
    score == 7 ? printf("Hole-in-one (Eagle)") : 0;
    score == 8 ? printf("Par") : 0;
    score == 9 ? printf("+5") : 0;
    return ;
}

void score_sign(int score)
{
    if (score != 9 && score != 8 && score != 7 && score != 6 &&
        score != 5 && score != 4 && score != 3 && score != 2 &&
        score != 1) {
        if (score < 0)
            printf("%d", score);
        else printf("%d", score); }
    return ;
}


void final_score(int *tabint1, int *tabint2, int score, int fnl)
{
    for (int a = 0; tabint1[a]; a++)
        score += tabint1[a];
    printf("Total par: %d\n", score);
    score = 0;
    for (int a = 0; tabint2[a]; a++)
        score += tabint2[a];
    printf("Total strokes: %d\n", score);
    printf("Final score: ");
    if (fnl < 0)
        printf("%d\n", fnl);
    else printf("+%d\n", fnl);
    return ;
}
