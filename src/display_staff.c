/*
** EPITECH PROJECT, 2019
** display_staff
** File description:
** organize
*/

#include "../csfml.h"

int move_staff(ts_t back[6], obs_t obstacle[2], sfRenderWindow *window,
               int obsta, char *map)
{
    move_background(window, back);
    if (obsta == 0)
        move_obstacle(window, obstacle);
    else
        move_obstacle2(window, obstacle, map);
}

int display_staff(ts_t back[6], pl_t player[1], obs_t obstacle[2], int obsta,
    char *map)
{
    display_backgrounds(back);
    if (obsta == 0)
        display_obstacle(obstacle);
    else
        display_obstacle2(obstacle, obsta, map);
    display_player(player);
}
