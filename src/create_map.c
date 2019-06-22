/*
** EPITECH PROJECT, 2019
** create_map
** File description:
** create map
*/

#include "../csfml.h"

char *map_in_var(char *buff, int fd)
{
    int i;
    int count = 0;
    char *map = malloc(sizeof(char) * 1000);

    read(fd, buff, 1000);
    for (i = 0; buff[i] != '\0'; i++) {
        if (buff[i] == '1')
            map[i] = '1';
        else if (buff[i] == ' ' || buff[i] == '0')
            map[i] = '0';
        else
            break;
        count++;
    }
    map[++i] = '\0';
    return (map);
}

int check_map(char *map)
{
    int i;
    int count = 0;

    for (i = 0; map[i] != '\0'; i++) {
        if (map[i] == '1')
            count++;
    }
    if (count == 0)
        return (0);
    else
        return (1);
}

char *create_map(char *file, int fd)
{
    char *buff;
    char *map = NULL;

    buff = malloc(sizeof(char) * 1000);
    map = map_in_var(buff, fd);
    close(fd);
    return (map);
}
