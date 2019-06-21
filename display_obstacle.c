/*
** EPITECH PROJECT, 2019
** obstacle display
** File description:
** 
*/

#include "csfml.h"

void display_obstacle(obs_t obstacle[2])
{
    sfVector2f beg = {1026, 470};
    sfVector2f end = {-124, 470};
    sfVector2f size = {1.3, 1.3};

    obstacle[0].texture = sfTexture_createFromFile("triangle.png", NULL);
    obstacle[1].texture = sfTexture_createFromFile("triangle.png", NULL);
    obstacle[0].sprite = sfSprite_create();
    obstacle[1].sprite = sfSprite_create();
    sfSprite_setTexture(obstacle[0].sprite, obstacle[0].texture, 0);
    sfSprite_setTexture(obstacle[1].sprite, obstacle[1].texture, 0);
    sfSprite_setScale(obstacle[0].sprite, size);
    sfSprite_setScale(obstacle[1].sprite, size);
    sfSprite_setPosition(obstacle[0].sprite, beg);
    sfSprite_setPosition(obstacle[1].sprite, end);
}
