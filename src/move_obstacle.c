/*
** EPITECH PROJECT, 2019
** move obstacle
** File description:
**
*/

#include "../csfml.h"

void move_obstacle(sfRenderWindow *window, obs_t obstacle[100])
{
    sfVector2f beg = {-200, 470};
    sfVector2f end = {1024, 470};
    sfVector2f vel = {-1, 0};

    sfRenderWindow_drawSprite(window, obstacle[0].sprite, NULL);
    sfSprite_move(obstacle[0].sprite, vel);
    if (sfSprite_getPosition(obstacle[0].sprite).x < -324)
        sfSprite_setPosition(obstacle[0].sprite, end);
}

void move_obstacle2(sfRenderWindow *window, obs_t obstacle[100], char *map)
{
    int j = 0;
    sfVector2f vel = {-1, 0};

    //  for (j = 0; j<= 5; j++) {
    sfRenderWindow_drawSprite(window, obstacle[j].sprite, NULL);
    sfSprite_move(obstacle[j].sprite, vel);
    //}
    //if (sfSprite_getPosition(obstacle[j].sprite).x < -324) {
    //   j++;
//sfSprite_move(obstacle[j++].sprite, vel);
//    }
}
