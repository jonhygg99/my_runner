/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

#include "csfml.h"

int display_all(ts_t back[6], pl_t player[1], obs_t obstacle[2])
{
    display_backgrounds(back);
    display_obstacle(obstacle);
    display_player(player);
}
