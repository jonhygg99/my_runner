/*
** EPITECH PROJECT, 2019
** move obstacle
** File description:
** 
*/

#include "csfml.h"

void move_obstacle(sfRenderWindow *window, obs_t obstacle[2])
{
    sfVector2f beg = {-200, 470};
    sfVector2f end = {1024, 470};
    sfVector2f vel = {-1, 0};

    sfRenderWindow_drawSprite(window, obstacle[0].sprite, NULL);
    sfRenderWindow_drawSprite(window, obstacle[1].sprite, NULL);
    sfSprite_move(obstacle[0].sprite, vel);
    sfSprite_move(obstacle[1].sprite, vel);
    if (sfSprite_getPosition(obstacle[0].sprite).x < -1424) {
        sfSprite_setPosition(obstacle[0].sprite, beg);
        sfSprite_setPosition(obstacle[1].sprite, end);
    }
}
