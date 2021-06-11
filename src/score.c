/*
** EPITECH PROJECT, 2021
** ls
** File description:
** cd
*/

#include "../include/too.h"

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
