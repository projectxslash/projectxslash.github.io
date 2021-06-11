golf score card

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

void score_one(int score)
{
    score == 3 ? printf("Triple bogey") : 0;
    score == 2 ? printf("Double bogey") : 0;
    score == 1 ? printf("Bogey") : 0;
    score == 0 ? printf("Par") : 0;
    return ;
}

void score_two(int score)
{
    score == -1 ? printf("Birdie") : 0;
    score == -2 ? printf("Eagle") : 0;
    score == -3 ? printf("Albatros") : 0;
    score == -4 ? printf("Condor") : 0;
    return ;
}

void score_sign(int score)
{
    if (score != 3 && score != 2 && score != 1 && score != 0 &&
        score != -1 && score != -2 && score != -3 && score != -4) {
        if (score < 0)
            printf("%d", score);
        else printf("+%d", score); }
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


int main(int ac, char **av)
{
    int a = golf(ac, av);
    if (a == 84)
        return (84);
    return (0);
}
