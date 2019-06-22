/*
** EPITECH PROJECT, 2018
** runner
** File description:
** display all
*/

#include "../csfml.h"

int runner_options(char *str)
{
    char *map = NULL;
    int check;
    int fd;

    if (str[0] == '-' && str[1] == 'i')
        runner(map, 0);
}

int main(int ac, char **ag)
{
    if (ag[1] == NULL) {
        nothing(ag[0]);
        return (84);
    } else if (ag[1][0] == '-' && ag[1][1] == 'h') {
        info(ag[0]);
        return (84);
    } else
        runner_options(ag[1]);
}
